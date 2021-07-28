#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

#define Maxsize 50   //the element in stack

typedef struct{
	int date[Maxsize];   //Elemtype date[Maxsize];  the Elemtype is int.

	int top;//the number of element;
} SqStack;

//InitStack
void Initstack(SqStack *S);
bool StackEmpty(SqStack S);
bool Push(SqStack *S , int x);
bool Pop(SqStack *S , int *x);
bool GetTop(SqStack S, int *x);

int main()
{	
	SqStack S;
	Initstack(&S);
	printf("S.top = %d\n",S.top);
	int count = 38;
	int TestDate[count];
	for (int i = 0; i < 38; i++)
	{
		TestDate[i] = i;
		printf("TestDatee[%d] = %d\n",i,i);
	}

	for (int i = 0; i < count; i++)
	{
		Push(&S , TestDate[i]);
		int x;
		GetTop(S, &x);
		printf("push successful & top = %d\n",x);

	}

	for (int i = count; i > count/2; i--)
	{	
		int x = 0;
		Pop(&S, &x);
		printf("Pop the top element x: %d \n", x);
	}
	int x;
	GetTop(S,&x);
	printf("Pop the top element x: %d \n", x);
	if (x == TestDate[count/2]-1)
		printf("Test successfully\n");
	

	return 0;
}

void Initstack(SqStack *S)
{
	S->top = -1;
}

bool StackEmpty(SqStack S)
{
	if (S.top == -1)
	{
		return 1;
	}
	else
	return 0;
}

bool Push(SqStack *S, int x)
{
	if (S->top < Maxsize-1)
	{
		S->top = S->top +1;
		S->date[S->top] = x;
		//printf("push successful & top = %d\n",S->date[S->top]);
		return 1;
	}
	return 0;
}

bool Pop(SqStack *S, int *x)
{
	if (StackEmpty(*S))
	{
		return 0;
	}
	else
	{
		*x = S->date[S->top--];
		//S->top--;
	}
	return 0;
}

bool GetTop(SqStack S, int *x)
{
	if (StackEmpty(S))
	{
		return 0;
	}
	else 
	{
		*x = S.date[S.top];
	}
	return 0;

}
