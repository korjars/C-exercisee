#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//链表节点类型定义
struct LinkNode
{
    int date;
    struct LinkNode *next;
    
};

struct Link
{
    //内容
    int a[10];
    char fill[40];


    //指向
    struct Link *next;

};

int main(void)
{
    struct LinkNode node0 =
    {
        0,NULL
    };
    
    struct LinkNode node1 = { 1 , NULL };
    struct LinkNode node2 = { 2 , NULL };
    struct LinkNode node3 = { 3 , NULL };
    struct LinkNode node4 = { 4 , NULL };
    struct LinkNode node5 = { 5 , NULL };
    struct LinkNode node6 = { 6 , NULL };
    struct LinkNode node7 = { 7 , NULL };
    struct LinkNode node8 = { 8 , NULL };

    node0.next = &node1;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = &node6;
    node6.next = &node7;
    node7.next = &node8;
    node8.next = NULL;

    //遍历链表
   //定义辅助指针变量

   struct LinkNode *pCurret = &node0;


for (int i = 0; i < 9; i++)
{   
    printf("%d\n",pCurret->date);
    pCurret = pCurret->next;
}



       




    return 0;
}

