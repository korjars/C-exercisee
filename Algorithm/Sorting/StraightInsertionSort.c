#include<stdio.h>
#include<math.h>
#include"TheListA.h"

void InsertSort(int A[])
{
    //printf("%d\n",sizeof(A));
    for (int i = 0; i < 10; i++)
    {   
        int temp = A[i];
        for (int j = i-1; j >= 0; j--)
        {
            if (temp <A[j])
            {
                A[j+1] = A[j];
            }
            else
            {
                A[j+1] = temp;
                break;
            }
        }
    }
}

void InsertSortForTheListA(SqList *L)
{
    //printf("%d\n",sizeof(A));
    for (int i = 1; i < L->length + 1; i++)
    {   
        L->r[0] = L->r[i];
        for (int j = i-1; j >= 0; j--)
        {
            if (L->r[0].key < L->r[j].key)
            {
                L->r[j+1] = L->r[j];
            }
            else
            {
                L->r[j+1] = L->r[0];
                break;
            }
        }
    }
}
int main()
{
    int A[10] = {1,5,4,3,2,7,6,9,8,666};
    printf("%d\n",sizeof(A));
    InsertSort(A);
    for (int i = 0; i < 10; i++)
    {
        printf("%d < ", A[i]);
    }
    InitA();
    outbefor();
    InsertSortForTheListA(&L);
    outlater();
    return 0;
}