#include<stdio.h>
#include<math.h>

int Partition(int A[],int low,int high)
{
    int pivotkey = A[low];
    while(low < high)
    {
        //if (A[high] < pivotkey)
        //{
        //    A[low] = A[high];
        //    high--;
        //}
        //else
        //{
        //    if (A[low] > pivotkey)
        //    {
        //        
        //    }
        //    
        //}
        while(low < high && A[high] >= pivotkey) high--;
        A[low] = A[high];
        while(low < high && A[low] <= pivotkey) low++;
        A[high] = A[low];
    }
    A[low] = pivotkey;
    return low;
}

void QUicksorts(int A[],int low,int high)
{
    if (low < high)
    {
        int pivotkey = Partition(A,low,high);
        QUicksorts(A,low,pivotkey-1);
        QUicksorts(A,pivotkey+1,high);
    }
    //return 0;
}

int main()
{
    int A[] = {9,8,7,6,5,4,3,2,1};
    QUicksorts(A,0,sizeof(A)/sizeof(int)-1);
    for (int i = 0; i <= sizeof(A)/sizeof(int)-1; i++)
    {
        printf("%d <",A[i]);
    }
    
}