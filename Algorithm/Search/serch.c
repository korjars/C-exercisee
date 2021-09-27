#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

typedef int KeyType;

typedef struct {
    KeyType Key;
//可以加入其他元素 key值是用来排序的关键字；
//例如
} ElemType;

typedef struct {
    ElemType *elem;
    int length;
}SSTable;

SSTable T;

int InitT(SSTable *T){
    (*T).elem = (ElemType *)malloc(20*sizeof(ElemType));
    for (int i = 0; i < 20; i++)
    {
        (*T).elem[i].Key = i;
    }
    
}

int OutputT(SSTable T){
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n",T.elem[i].Key);
    }
    
}

int main(){
    InitT(&T);
    OutputT(T);
    return 0;
    
}
