#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// defination
struct LinkNode
{
    int date;
    struct  LinkNode *next;
    
};

// init

struct LinkNode *Init_LinkList()
{
    struct LinkNode *header = malloc(sizeof(struct LinkNode));
    header->date = -1;
    header->next = NULL;

    struct LinkNode *pRear = header;

    int val = -1;
    while ( 1 )
    {
        printf("input number:\n");
        scanf("%d",&val);

        if (val == -1)
        {
          break;
        }

        struct LinkNode *newnode = malloc(sizeof(struct LinkNode));

        newnode->date = val;
        newnode->next = NULL;



        pRear->next = newnode;

        pRear = newnode;


        
        

    }
    return header;
};

// insert

void Insert(struct LinkNode *header, int oldval, int newvel)
{
    struct LinkNode *pPrev;
    struct LinkNode *pCurr;
    pPrev = header;
    pPrev->next = pCurr;

    //find oldval

    while( pCurr != NULL )
    {
        if (oldval == pCurr->date)
        {
            break;
        }
        
        pPrev = pCurr; // pPrev =pPrev->next;
        pCurr = pCurr->next;

        if (pPrev->next == NULL)
        {
            return;
        }
        
    }


    struct LinkNode *newnode = malloc(sizeof(struct LinkNode));
    newnode->date = newvel;
    newnode->next = NULL;

    newnode->next = pCurr;
    pPrev->next = newnode;

    
    
}


//del

void Del(struct LinkNode *header,int delval)
{
    struct LinkNode *pPrev = header;
    struct LinkNode *pCurr = header->next;
    if (header->next == NULL)
    {
        return;
    }

    while (pCurr->date = delval )
    {
    pPrev = pCurr;
    pCurr = pCurr->next;
    
    }
    if (pCurr->next == NULL)
    {
        return;
    }



    pPrev = pCurr->next;

    free(pCurr);
}

//ergodic //maybe traversal

void traversal (struct LinkNode *header)
{
    if (header->next == NULL)
    {
        return ;
    }

    //辅助变量
    struct LinkNode *pC =  header->next;

    while (pC != NULL)
    {
        printf("%d\n",pC->date);
        pC = pC->next;
    }
    


    return ;
}

//clear Link

void clear(struct LinkNode *header)
{
    struct LinkNode *pCurr = header->next;
    if (header->next == NULL)
    {
        return;
    }

    while (pCurr->next != NULL)
    {
        /* code */
    struct LinkNode *clear = pCurr;
    pCurr = pCurr->next;
    free(clear);
    }
    
    


    
    


}

int main()
{
    struct LinkNode *header = Init_LinkList();
    traversal(header);


    return 0;
}