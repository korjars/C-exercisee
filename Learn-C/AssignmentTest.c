#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int a =10;
	int b =11;
	printf("a= %d , b = %d\n" ,a,b);
	a = b;
	b = 99;
	printf("a= %d , b = %d\n" ,a,b);

	int *pa = &a;
	*pa = 10;
	int *pb = &b;
	*pb = 11;
	printf("*Pa= %d , *Pb = %d\n" ,*pa,*pb);
	*pa = *pb;
	*pb =99;
	printf("*pa= %d , *Pb = %d\n" ,*pa,*pb);
	printf("pa= %d , pb = %d\n" ,pa,pb);
	printf("a= %d , b = %d\n" ,a,b);
	pa = pb;
	*pb = 88;
	printf("*pa= %d , *Pb = %d\n" ,*pa,*pb);
	printf("pa= %d , pb = %d\n" ,pa,pb);
	printf("a= %d , b = %d\n" ,a,b);
	

}