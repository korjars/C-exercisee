#include<stdio.h>
#include<stdlib.h>

#define ElemType int

typedef struct 
{
	ElemType data[100];
	int length;
} SqList;

int main(void)
{
	SqList L;
	scanf("%d",&L.data[99]);
	printf("%d\n",L.data[99]);
	
}
