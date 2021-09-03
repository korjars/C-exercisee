#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void Exchg1(int x, int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    printf("x = %d, y = %d\n", x, y);
    return false;
}

void Exchg2(int *x,int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
    printf("x = %d, y = %d\n", x, y);
    printf("*x = %d, *y = %d\n", *x, *y);
    return false;
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
    printf("point 传入函数 形参p的值\n");
    for (int i = 0; i < 4; i++)
    {
        printf("point in p[%d] = %d\n",i,p[i]);
    }
    printf("\npoint 传入函数 形参p的地址是否与上面point在主函数的地址一样？\n");
    for (int i = 0; i < 4; i++)
    {
        printf("the adress of p[%d] = %d\n",i,&p[i]);
    }//查看p地址
    printf("point 传入函数 形参p 用malloc函数给p开辟空间\n");
    p = (int *)malloc(sizeof(int)*4);
    *p = 1;
    *(p+1) = 2;
    p[2] = 3;
    p[3] = 4;
    printf("空间开辟成功后形参p赋予新的值1,2,3,4\n");
    printf("查看开辟空间后 p的值\n");
    for (int i = 0; i < 4; i++)
    {
        printf("new p[%d] = %d\n",i,p[i]);
    }
    printf("查看此时p的地址与原来地址的不同\n");
    printf("the adress of p = %d\n",p);
    for (int i = 0; i < 4; i++)
    {
        printf("the adress of p[%d]= %d\n",i,&p[i]);
    }

}

void DeliverPoint2(int *p)
{   
    printf("point 传入函数 形参p的值\n");
    for (int i = 0; i < 4; i++)
    {
        printf("point in p[%d] = %d\n",i,p[i]);
    }
    printf("\npoint 传入函数 形参p的地址是否与上面point在主函数的地址一样？\n");
    for (int i = 0; i < 4; i++)
    {
        printf("the adress of p[%d] = %d\n",i,&p[i]);
    }//查看p地址
    // printf("point 传入函数 形参p 用malloc函数给p开辟空间\n");
    // p = (int *)malloc(sizeof(int)*4);
    *p = 1;
    *(p+1) = 2;
    p[2] = 3;
    p[3] = 4;
    printf("不进行空间开辟  直接给形参p赋予新的值1,2,3,4\n");
    // printf("查看开辟空间后 p的值\n");
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("new p[%d] = %d\n",i,p[i]);
    // }
    // printf("查看此时p的地址与原来地址的不同\n");
    // printf("the adress of p = %d\n",p);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("the adress of p[%d]= %d\n",i,&p[i]);
    // }

}

void DeliverPoint3(int** p2)
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
    // int a = 4,b = 6;
    // Exchg1(a, b);
    // printf("a = %d, b = %d\n", a, b);
    // printf("&a = %d, &b = %d\n", &a, &b);
    // Exchg2(&a,&b);
    // printf("a = %d, b = %d\n", a, b);

    int *point;
    point = (int *)malloc(sizeof(int)*4);
    for (int i = 0; i < 4; i++)
    {
        point[i] = i*100;
    }//初始化point
    printf("\npoint初始化后的值：\n");
    for (int i = 0; i < 4; i++)
    {
        printf("point[%d] = %d\n",i,point[i]);
    }
    printf("point初始化后point的地址的值：\n");
    for (int i = 0; i < 4; i++)
    {
        printf("the adress of point[%d] = %d\n",i,&point[i]);
    }//查看point地址
    DeliverPoint(point);
    printf("\n运行第一个函数后point值是否改变？\n");
    for (int i = 0; i < 4; i++)
    {
        printf("point[%d] = %d\n",i,point[i]);
    }
    printf("\n开始运行第二个函数\n");
    printf("\n第二个函数除未开辟新的空间其余与第一个函数一模一样\n");
    DeliverPoint2(point);
    printf("\n第二个函数运行结束查看函数内值修改是否影响到了主函数的point\n");
    printf("\n打印point[i]的值：\n");
    for (int i = 0; i < 4; i++)
    {
        printf("point[%d] = %d\n",i,point[i]);
    }
    return(0);
}
