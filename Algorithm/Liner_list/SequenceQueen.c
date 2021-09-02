#include<stdio.h>
#include<stdbool.h>

#define ElemType int
#define MaxSize 50
typedef struct{
	ElemType data[MaxSize];
	int front,rear;
} SqQueue;

void InitSqQueue(SqQueue * Q)
{
	Q->front  = Q->rear = 0;
}

bool IsEmpty(SqQueue Q)
{
	if(Q.front = Q.rear)
	return 1;
	else 
	return 0;
}

bool EnQueue(SqQueue *Q , int x)
{
	if((Q->rear + 1) % MaxSize == Q->front)
	return 0;
	Q->data[Q->rear] = x;
	Q->rear = (Q->rear +1) %MaxSize;
	return 0;
}	

bool DeQueue(SqQueue *Q, int *x)
{
	if(Q->front == Q->rear)
	return 0;
	*x = Q->data[Q->front];
	Q->front = (Q->front+1)%MaxSize;
	return 0;
}

int main()
{
	SqQueue Q;
	InitSqQueue(&Q);
	int a[11] = {1,5,2,7,9,2,8,7,1,8,8};
	for (int i = 0; i < 11; i++)
	{
		EnQueue(&Q , a[i]);
	}

	for (int i = 0; i < 11; i++)
	{	
		int x;
		DeQueue(&Q , &x);
		printf("%d",x);
	}
	
	
	return 0;
	
}

