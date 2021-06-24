#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Linknode
{
	char name[12] ;
	int StudentID;
	struct Linknode *next;
} Node, *Pnode;

int main(void)
{
	Pnode student[10];
	printf("%d\n",sizeof(student[0]));
	printf("%d\n",sizeof(Node));
	student[0] = (Pnode)malloc(sizeof(Node));
	student[0]->StudentID = 10173124;
	strcpy(student[0]->name,"zhangyichang");
	printf("%d\n",student[0]->StudentID);
	printf("%s\n",student[0]->name);

return 0;
}