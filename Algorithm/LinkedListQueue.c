#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

#define ElemType int
typedef struct LinkNode
{
	ElemType data;
	struct LinkNode *next;
} LinkNode;

typedef struct 
{
	LinkNode * front , * rear;
} LLQueue;

void InitLLQueue(LLQueue *Q)
{
	Q->front = Q->rear = (LinkNode *)malloc(sizeof(LinkNode));
	Q->front->next = NULL;
	printf("%d , %d \n",Q->front,Q->rear);
}

bool EnQueue(LLQueue *Q , int x)
{
	LinkNode *new = (LinkNode*)malloc(sizeof(LinkNode));
	new->data = x;
	new->next = NULL;
	Q->rear->next =new;
	Q->rear = new;
}

bool DeQueue(LLQueue *Q , int *x)
{
	if (Q->front->next == NULL)
	return 0;
	LinkNode *q = Q->front->next;
	*x = q->data;
	Q->front->next = q->next;
	free (q);
	
}

void GetValue(LLQueue Q,int *temp)
{
	*temp = Q.rear->data;
}

int main()
{
	LLQueue Q;
	InitLLQueue(&Q);
	int a[11] = {1,5,2,7,9,2,8,7,1,8,8};
	for (int i = 0; i < 11; i++)
	{
		EnQueue(&Q , a[i]);
		int temp;
		GetValue(Q,&temp);
		printf("%d\n",temp);
	}

	for (int i = 0; i < 11; i++)
	{	
		int x;
		DeQueue(&Q , &x);
		printf("%d",x);
	}
	
	
	return 0;
}

