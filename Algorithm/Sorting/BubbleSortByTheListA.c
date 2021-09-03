#include"TheListA.h"

void BubbleSort(SqList *L)
{
    for (int i = 1; i <= L->length; i++)
    {
        for (int j = 1; j <= L->length - i +1; j++)//冒泡所以这里的等于号可以不要；
        {
            if (L->r[j].key > L->r[j+1].key)
            {
                L->r[0] = L->r[j+1];
                L->r[j+1] = L->r[j];
                L->r[j] = L->r[0];
            }
        }
    }
}

int main()
{
    InitA();
    outbefor();
    BubbleSort(&L);
    outlater();
    test(BubbleSort);
    return 0;
}