#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void Merge(int A[], int low, int mid,int high)
{
    int B[12];
    int i,j,k;
    for ( k = low; k <= high; k++)
    {
        B[k] = A[k];
    }
    for ( i = low, j = mid+1 ,k = low; i <= mid && j <= high ; k++)
    {
        if (B[i] <= B[j])
            A[k] = B[i++];
        else
            A[k] = B[j++];
    }
    while(i<=mid)  A[k++] = B[i++];
    while(j<=high)  A[k++] = B[j++];
}

void MergeSort(int A[],int low,int high)
{
    if (low < high){
        int mid = (low + high)/2;
    MergeSort(A,low,mid);
    MergeSort(A,mid+1,high);
    Merge(A,low,mid,high);
    }
}

void PrintArray(int A[],int high)
{
    //A[1] = 22222;
    for (int i = 0; i <= high; i++)
    {
        printf("A[%d] = %d\n",i,A[i]);
    }

}

int main()
{
    int A[] = {1,2,43,4,453,6,75,57,8,567,35,3};
    int low = 0;
    int high = sizeof(A)/sizeof(int)-1;
    PrintArray(A,high);
    printf("A[1] = = = = = = = = == = = = = = %d\n ",A[1]);
    printf("low = %d----- -----high = %d\n",low,high);
    MergeSort(A,low,high);
    PrintArray(A,high);
    return 0;
}
