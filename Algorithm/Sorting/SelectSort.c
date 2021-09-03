#include"TheListA.h"

void Selectsort(SqList *L)
{
    int i,j,temp;
    for (int i = 1; i <= L->length; i++)//零号不参与序号为1~20；而非0~19；
    {
        L->r[0] = L->r[i];
        for ( j = i; j <= L->length; j++)
        {
            if(L->r[j].key < L->r[i].key)
            {
                L->r[i] = L->r[j];
                temp = j;
            }
        }
        L->r[temp] = L->r[0];
    }
    
}

int main()
{
    InitA();
    outbefor();
    Selectsort(&L);
    outlater();
}