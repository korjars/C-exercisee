#include<stdbool.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MAXSIZE 20

typedef int KeyType;

typedef struct{
    KeyType key;
    
} RcdType;

typedef struct 
{
    RcdType r[MAXSIZE+1];
    int length;
} SqList;

int Temp[20] = {4,7,2,3,6,5,1,9,8,15,13,17,19,12,20,18,16,14,11,10};
SqList L;
void InitA()
{
    
    for (int i = 0; i < 20; i++)
    {
        L.r[i+1].key = Temp[i];
    }
    L.length=20;
}

void outbefor()
{
    printf("\n排序前序列：\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d < ",L.r[i+1].key);
    }
}

void outlater()
{
    printf("\n排序后序列：\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d < ",L.r[i+1].key);
    }
}

void test(void (*B)())
{
    InitA();
    outbefor();
    printf("\n\nL：%d\n",L);
    printf("\n这里函数必须传入L的地址：%d\n",&L);
    B(&L);
    outlater();
}