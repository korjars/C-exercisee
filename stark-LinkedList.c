#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100
typedef struct starkLinkedList
{
    int date;
    struct starkLinkedList * next;
    
}  node, * psnode;

typedef struct Stark
{
    psnode PTOP;
    psnode PBOTTOM;

} STARK, *PSTARK;

void Initstark(PSTARK Stark)
{
    psnode new = (psnode)malloc(sizeof(node));
    if (new == NULL)
    {
	    printf("failed malloc space of new node\n");
	    exit(-1);
    }
    printf("Creat a stark succecfully.\n");
    new->next = NULL;
    Stark->PTOP = new;
    Stark->PBOTTOM = new;
}


void PUSHSTARK(PSTARK Stark,int temp)
{
   psnode new = (psnode)malloc(sizeof(node));
    if (new == NULL)
    {
	    printf("failed malloc space of new node\n");
	    exit(-1);
    }
    printf("push the date into the stark succesfully.\n");
    new->date = temp;
    new->next = Stark->PTOP;
    Stark->PTOP = new;
}

void POPSTARK(PSTARK Stark)
{
	//   psnode new = (psnode)malloc(sizeof(node));
	//    if (new == NULL)
	//    {
	//	    printf("failed malloc space of new node");
	//	    exit(-1);
	//    }
	if (Stark->PTOP == Stark->PBOTTOM)
	{
	    printf("The stark is empty\n");
	    exit(-1);
	}
	int temp;
	psnode ptemp = Stark->PTOP;
	temp = ptemp->date;
	Stark->PTOP = ptemp->next;
	free(ptemp);
	printf("the number have go out the stark %d\n",temp);
}

bool Isempty(PSTARK Stark)
{
	if (Stark->PTOP == Stark->PBOTTOM)
	{
		printf("The stark is empty.\n");
		return true;
	}
	else
	{
		printf("The stark can pop number. so let's do the next step.\n");
		return false;
	}
	
}

void Traversestark(PSTARK Stark)
{
	if (Isempty(Stark))
	{
		printf("there is nothing.\n");
	}
	psnode temp = Stark->PTOP;
	printf("the date which in the stark is the allow:\n");
	while (temp != Stark->PBOTTOM)
	{
		printf("%d\n",temp->date);
		temp = temp->next;
	}
	
}

void Cleanstark(PSTARK Stark)
{
	if (Isempty(Stark))
	{
		printf("The stark is empty. Don't need to clean it.\n");
	}
	psnode delete = Stark->PTOP;
	psnode temp;
	while (delete != Stark->PBOTTOM)
	{
		temp = delete->next;
		free(delete);
		delete = temp;
	}
	Stark->PTOP = Stark->PBOTTOM;
	printf("Clean the stark succescfully.\n");
	
}

int main()
{
	STARK Stark;
	int val;
	Initstark(&Stark);
	Isempty(&Stark);
	PUSHSTARK(&Stark,50);
	PUSHSTARK(&Stark,100);
	PUSHSTARK(&Stark,200);
	PUSHSTARK(&Stark,300);
	PUSHSTARK(&Stark,400);
	PUSHSTARK(&Stark,500);
	PUSHSTARK(&Stark,600);
	PUSHSTARK(&Stark,700);
	PUSHSTARK(&Stark,800);
	PUSHSTARK(&Stark,900);
	Isempty(&Stark);
	POPSTARK(&Stark);
	Traversestark(&Stark);
        Cleanstark(&Stark);

	return 0;
}
