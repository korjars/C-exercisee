#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void Exchg1(int x, int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    printf("x = %d, y = %d\n", x, y);
}   


void Exchg2(int *x,int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
    printf("x = %d, y = %d\n", x, y);
    printf("*x = %d, *y = %d\n", *x, *y);
}

//void Exchg3(int &x, int &y)
//{
//    int tmp;
//    tmp = x;
//    x = y;
//    y = tmp;
//    printf("x = %d, y = %d\n", x, y);
//}

void DeliverPoint(int *p)
{   
    printf("point 传入 函数Deliver 111 函数 形参 p的值\n");
    for (int i = 0; i < 4; i++)
    {
        printf("point in p[%d] = %d\n",i,p[i]);
    }
    p = (int *)malloc(sizeof(int)*4);
    *p = 1;
    *(p+1) = 2;
    p[2] = 3;
    p[3] = 4;
    printf("point 传入 函数Deliver 111 函数 新开辟空间后 p的值\n");
    for (int i = 0; i < 4; i++)
    {
        printf("point in p[%d] = %d\n",i,p[i]);
    }
    printf("the adress of p = %d\n",p);
    for (int i = 0; i < 4; i++)
    {
        printf("the adress of p + %d = %d\n",i,&p[i]);
    }

}
void DeliverPoint2(int** p2)
{
    *p2 = (int *)malloc(sizeof(int)*4);
    for (int i = 0; i < 4; i++)
    {
        *(*p2+i) = i;
        printf("point in *(*p2+%d) = %d\n",i,*(*p2+i));
    }
    for (int i = 0; i < 4; i++)
    {
        printf("point in *(*p2+%d) = %d\n",i,*(*p2+i));
    }
    for (int i = 0; i < 4; i++)
    {
        printf("point in *p2+%d = %d\n",i,(*p2+i));
    }
    
    printf("the adress of *p2 = %d\n",*p2);
    
    for (int i = 0; i < 4; i++)
    {
        printf("the adress of p2 + %d = %d\n",i,&p2[i]);
    }

}
int main()
{
    int a = 4,b = 6;
    Exchg1(a, b);
    printf("a = %d, b = %d\n", a, b);
    printf("&a = %d, &b = %d\n", &a, &b);
    Exchg2(&a,&b);
    printf("a = %d, b = %d\n", a, b);

    int *point;
    point = (int *)malloc(sizeof(int)*4);
    for (int i = 0; i < 4; i++)
    {
        point[i] = i*100;
    }
        for (int i = 0; i < 4; i++)
    {
        printf("the adress of point[%d] = %d\n",i,&point[i]);
    }
    DeliverPoint(point);
    for (int i = 0; i < 4; i++)
    {
        printf("point[%d] = %d\n",i,point[i]);
    }
    DeliverPoint2(&point);
    for (int i = 0; i < 4; i++)
    {
        printf("point[%d] = %d\n",i,point[i]);
    }
    return(0);
}
