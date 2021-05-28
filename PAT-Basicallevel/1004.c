//结构体加排序
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

struct Score
{
    char name[10];
    char studentid[10];
    int score;
    struct Score *next;
};

struct Score *initscorelist()
{
    struct Score *header = malloc(sizeof(struct Score));
    header->score = 0;
    header->next = NULL;
    struct Score *prear = header;

    int n=0;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        char a[10];
        char b[10];
        int c=0;
        scanf("%s %s %d",a,b,&c);
//        struct Score A = {a,b,c,NULL}; 
    struct Score *newnode = malloc(sizeof(struct Score));
//        struct Score *newnode =  &A; 
        newnode->next = NULL;


        strcpy(newnode->name,a);
        strcpy(newnode->studentid,b);
        newnode->score = c;

        prear->next = newnode;
        prear = newnode;

    }
    
    return header;
};

void traversalhigheat (struct Score *header)
{
    if (header->next == NULL)
    {
        return ;
    }

    //辅助变量
    struct Score *pC =  header->next;

    struct Score *highest = pC;

    while (pC != NULL)
    {   if (pC->score > highest->score)
        {
            highest = pC;
        }

        pC = pC->next ;
    }
    
    printf("%s %s\n",highest->name,highest->studentid);
    

    return ;
}

void traversalloweat (struct Score *header)
{
    if (header->next == NULL)
    {
        return ;
    }

    //辅助变量
    struct Score *pC =  header->next;

    struct Score *lowest = pC;

    while (pC != NULL)
    {   if (pC->score < lowest->score)
        {
            lowest = pC;
        }

        pC = pC->next;
    }
    
    printf("%s %s\n",lowest->name,lowest->studentid);

    return ;
}

void traversal (struct Score *header)
{
    if (header->next == NULL)
    {
        return ;
    }

    //辅助变量
    struct Score *pC =  header->next;

    while (pC != NULL)
    {
        printf("%d\n",pC->score);
        pC = pC->next;
    }
    


    return ;
}

int main(void)
{
    struct Score *header = initscorelist();
    traversal(header);
    traversalloweat(header);
    traversalhigheat(header);
    
    
    

    

    return 0;
}


