#include<stdio.h>
#include<math.h>
#include"TheListA.h"

void ShellSort(int A[],int S)//A[0] 不参与排序
{
    int d,i,j;
    for (int d = (S/2); d >0; d = d/2)
    {
        for (int i = d+1; i < S; i++)
        {
            if (A[i] < A[i-d])
            {
                A[0] = A[i];
                for (j = i-d;j > 0 && A[0] < A[j]; j=j-d)
                {
                    A[j+d] = A[j];
                }
                A[j+d] = A[0];//for 最后是一步A[j]移入A[j+d]，但是结束后j=j-d.再回for判断不符合才执行此句，所以这里的j+d表示原来的j；
            }
        }
    }
}

void ShellSortForTheListA(SqList *L)//L.r[0]不参与排序
{
    int d,j,i;
    for ( d = L->length/2; d > 0; d/=2)
    {
        for ( i = d+1; i <= L->length; i++)
        {
            L->r[0] = L->r[i];
            if (L->r[i].key < L->r[i-d].key)
            {
                for ( j = i-d; j > 0 && L->r[j].key > L->r[0].key; j-=d)
                {
                    L->r[j+d] = L->r[j];
                }
                L->r[j+d] = L->r[0];
            }
        }
    }
}
int main()
{
    int A[] = {0,5,4,3,2,1,6,8,7,9,10};

    ShellSort(A,11);
    for (int i = 0; i < 10; i++)
    {
        printf("%d < ",A[i]);
    }
    InitA();
    outbefor();
    ShellSortForTheListA(&L);
    outlater();
    return 0;
}