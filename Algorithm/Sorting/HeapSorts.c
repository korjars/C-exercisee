#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void BulidMaxHeap();
void HeadAdjust();

void BulidMaxHeap(int A[] , int len)
{
    for (int i = len/2; i > 0; i--)
    {
        HeadAdjust(A , i , len);
    }
    
}

void HeadAdjust(int A[] ,int k , int len)
{
    A[0] = A[k];
    for (int i = 2*k; i <= len; i = 2*i)
    {
        if (i < len && A[i] < A[i+1]) i++;
        if (A[0] > A[i]) break;
        else
        {
            A[k] = A[i];
            k = i;
        }
    }
    A[k] = A[0];
}

void HeapSorts(int A[] , int len)
{
    BulidMaxHeap(A , len);
    for (int i = 0; i < 15; i++)
    {
        printf(" %d \t",A[i]);
    }
    printf("\n");
    for (int i = len; i > 0; i--)
    {
        int temp = A[1];
        A[1] = A[i];
        A[i] = temp;
        HeadAdjust(A,1,i-1);
    }
}

int main()
{
    int A[] = {1,3,6,2,4,5,8,7,9,10,15,13,12,14,99};//A[0]不参与排序。A[0]作为辅助储存空间。
    for (int i = 0; i < 15; i++)
    {
        printf("--%d--\t",i);
    }
    printf("\n");
    for (int i = 0; i < 15; i++)
    {
        printf(" %d\t",A[i]);
    }
    printf("\n");
    HeapSorts(A,14);
    for (int i = 0; i < 15; i++)
    {
        printf(" %d\t",A[i]);
    }
    
}