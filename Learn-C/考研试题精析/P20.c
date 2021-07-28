#include<stdio.h>

int fact(int n)
{	
	int count = n;
	int i,j,k,sum = 0;
	for (int i = 0; i < count; i++)
	{
		for (int j = count; j > i-1; j--)
			for (int k = 0; k < j+1; k++)
				sum++;
			printf("sum = %d\n",sum);
	}
	return sum;
}

void changeA( int *c)
{
	*c = 1000;
	printf("A = %d\n",c);
}

int main(void)
{
	int l = 10000;
	fact(5);

	for (int i = 0; i < 10; i++)
	//for (int i = 0; i < 10; i++)
		printf("print %i times\n",i+1);
	printf("print %i times\n",l);

	int A = 666;
	printf("A = %d\n",&A);
	printf("A = %d\n",A);
	changeA(&A);
	printf("A = %d\n",A);




	return 0;
}