#include <stdio.h>
#include <string.h>
int main()
{
    // char name[10];
    // printf("Input your name: ");
    // scanf("%s",name);
    // printf("Hello,%s,this is your vscode!\n",name);
// 短值
    // int a=2;
    // int b=3;

    // (a=0) && (b =5);
    // printf("a=%d  b=%d\n",a,b);

    // (a=1) || (b =5);
    // printf("a=%d  b=%d\n",a,b);

// if 

    // int a;
    // printf("how old are you:");
    // scanf("%d",&a);
    // if (a >= 18 & a <= 99)
    // {
    //     printf("young guy!!!");

        
    // }
    // else if (a < 18 | a>99)
    // {
    //     printf("your age is not safe.");
    // }
    // else
    // {
    //     printf("you can't go into here!!!  baybay");
    // }
    
// char a[10] = "abcal";
// printf("%s   %d",a, strlen(a));
    
    int a,  b,  c;    
     b=2, c=3;
     a = b + c;
     b = 5;

    int *p_a = &a;
    int *p2_a = p_a;
    int **q_p = &p_a;


    // printf("地址测试\n");
    // printf("%#X, %#X ,%#X\n", &a, &b,&c);
    // printf("%p, %p ,%p\n", &a, &b,&c);
    
    // printf("a = %d\n",a);
    // printf("p_a = &a = %p = %p\n",&a , p_a);
    // printf("p2_a =%p , *p2_a = %d\n",p2_a,*p2_a);
    // printf("q_p = %p , *q_p = %p, **q_p = %d \n",q_p,*q_p,**q_p);



//     printf("    a:%p ,    &a:%p\n *p_a:%p ,   p_a:%p ,  &p_a:%p \n*p2_a:%p ,  p2_a:%p , &p2_a:%p\n &q_p:%p ,   q_p:%p ,  *q_p:%p , **q_p:%p\n",\
// a ,&a ,*p_a,p_a,&p_a,*p2_a ,p2_a ,&p2_a, &q_p,q_p,*q_p,**q_p);
// printf("\n\n\n");
//     printf("    a:%p ,    &a:%p\n *p_a:%p ,   p_a:%p ,  &p_a:%p \n*p2_a:%p ,  p2_a:%p , &p2_a:%p\n &q_p:%p ,   q_p:%p ,  *q_p:%p , **q_p:%p\n",\
// a+1 ,&a+1 ,*p_a+1,p_a+1,&p_a+1,*p2_a+1,p2_a+1,&p2_a+1,&q_p+1,q_p+1,*q_p+1,**q_p+1);


// printf("int:%d\ndouble:%d\nfloat:%d\nchar:%d\n",sizeof(int),sizeof(double),sizeof(float),sizeof(char));
// printf("long:%d\nlong int:%d\n",sizeof(long),sizeof(long int));
// printf("sizeof(adress):%d\n", sizeof(p_a));

    // int a;
    // int *p = &a;
    // printf("input a:");
    // scanf("%d", &a);
    // printf("a = %d\n", a);

    // printf("input a:");
    // scanf("%d", p);
    // printf("a = %d\n", a);  

    // char a[] = "zhangyichang";
    // int b[] = {1,2,3,4,5,6};
    // float c[] = {1.1,2.2,3.3,4.4,5.5};
    // double d[] = {1.11,2.22,3.33,4.44,5.55,6.66};
    // char *p = a; //与下一行效果一样
    // p = &a[0];  

    // int array[][4] = {
    //     {0,1,2,3},
    //     {4,5,6,7},
    //     {8,9,10,11}};
    //     int (*p)[4] = array;
    //     int i,j;
        
    //     for (i = 0; i < 3; i++)
    //     {       
    //            for ( j = 0; j < 4; j++)
    //            {
    //                printf("%2d ", *(*(p+i)+j));
    //            }
    //            printf("\n");


    //     }

    // printf("p:%p , array:%p\n",p,array);

    // printf("p+1:%p , array+1: %p\n",p+1,array+1);

// points and couple group

    int array[10][10] = {0};
    int i=0,j=0;
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("array[%d][%d]:%d  ",i,j,&array[i][j]);
        }
        printf("\n");
    }
    

     printf(\
"  array:%d\n\
array+1:%d\n\
*(array+1):%d\n\
&array[1]:%d\n\
array+5:%d\n\
array+9:%d\n\
array+15:%d\n\
array[0]:%d\n\
array[1]:%d\n\
array[2]:%d\n\
array[3]:%d\n\
array[0]+1:%d\n\
array[1]+1:%d\n\
array[2]+1:%d\n\
array[3]+1:%d\n\
&array[0][0]:%d\n\
&array[0][1]:%d\n\
&array[0][5]:%d\n\
&array[0][9]:%d\n\
&array[1][0]:%d\n\
&array[1][5]:%d\n\
&array[1][9]:%d\n\
&array[9][0]:%d\n\
&array[9][9]:%d\n\
sizeof(array):%d\n\
sizeof(array[0]):%d\n\
sizeof(array[0][0]):%d\n\
sizeof(&array[0]):%d\n\
sizeof(&array[0][0]):%d\n\
sizeof(&array[5][5]):%d\n\
",array,\
array+1,\
*(array+1),\
&(array[1]),\
array+5,\
array+9,\
array+15,\
array[0],\
array[1],\
array[2],\
array[3],\
array[0]+1,\
array[1]+1,\
array[2]+1,\
array[3]+1,\
&array[0][0],\
&array[0][1],\
&array[0][5],\
&array[0][9],\
&array[1][0],\
&array[1][5],\
&array[1][9],\
&array[9][0],\
&array[9][9],\
sizeof(array),\
sizeof(array[0]),\
sizeof(array[0][0]),\
sizeof(&array[0]),\
sizeof(&array[0][0]),\
sizeof(&array[5][5])\
);

// 总结 array 是一个地址 array+1 = *(array+1) = array[1] = &array[1][0]是第二行的首地址 为array[1][1]的地址
//问题是
// array理解为指向指针的指针 所以*（array+1)是一个地址 而不是一个值 
// 下面验证 *((array+1)+1) *(*(array+1)+1)
printf("*((array+1)+1)=%d     *(*(array+1)+1)=%d\n",*((array+1)+1),*(*(array+1)+1));

//结果可见 *((array+1)+1)为 array[2][0]的地址   *(*(array+1)+1)为array[1][1]的值

//再验证 验证 ((array+1)+1) (*(array+1)+1)
printf("((array+1)+1)=%d     (*(array+1)+1)=%d",((array+1)+1),(*(array+1)+1));

//得出验证 ((array+1)+1)  等价于 array+2     (*(array+1)+1)为array[1][1]的地址



    return 0;
}
