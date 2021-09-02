#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct LinkedList
{
	int date;
	struct LinkedList *next;
} Node, *Pnode;

int main(void)
{	
	// Node L;
	// scanf("%d",&L.date);
	// printf("%d\n",L.date);
	char b[13] = "ezhangyicahng";
	char *p = b;
	printf("%d\n",b);
	printf("%d\n",p);
	p = (char *)malloc(100*sizeof(char));
	strcpy(p,b);
	printf("%d\n",p);
	printf("%d\n",sizeof(p));
	printf("%d\n",*p);
	printf("%s\n",p);
	printf("%c\n",p);
	printf("%c\n",p+1);
	printf("%c\n",p+2);
	printf("%s\n",p);
	return 0;
}
