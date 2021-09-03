#include"C:\Users\zyichang\Desktop\C\Algorithm\Sorting\TheListA.h"

void A(RcdType *A)
{
    printf("%d\n",A[1].key);
    A[1].key = 999;
}

void B(int *p)
{
    printf("%d\n",*p);
    *p = 100;
    *(p+1) =200;
}

int main()
{
    InitA();
    outbefor();//
    printf("\nL:%d\n",L);
    printf("sizeof(L):%d\n",sizeof(L));
    printf("L.r:%d\n",L.r);
    printf("sizeof(L.r):%d\n",sizeof(L.r));
    printf("L.r[1]:%d\n",L.r[1]);
    printf("sizeof(L.r[0]):%d\n",sizeof(L.r[0]));
    printf("L.length:%d\n",L.length);
    printf("&L.length:%d\n",&L.length);
    printf("L:%d\n",L);
    A(L.r);
    outbefor();
    int Ssq[] = {1,2,3,4,5,6,7,8,9};
    int *q = Ssq;
    B(q);
    printf("%d\n",Ssq[0]);
    printf("%d\n",Ssq[1]);
}