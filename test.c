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
    
    // int a,  b,  c;    
    //  b=2, c=3;
    //  a = b + c;
    //  b = 5;
    // printf("\n地址测试\n\n");
    // printf("%#X, %#X ,%#X\n\n", &a, &b,&c);
    // printf("%p, %p ,%p\n\n", &a, &b,&c);
    // printf("%p, %p ,%p\n\n", &a, &b,&c);
    // printf("%d,%d,%d\n\n", a ,b,c);
    // printf("%d,%d,%d\n\n", a ,b,c);
    // printf("%d,%d,%d\n\n", a ,b,c);




printf("int:%d\ndouble:%d\nfloat:%d\n",sizeof(int),sizeof(double),sizeof(float));
printf("long:%d\nlong int:%d\n",sizeof(long),sizeof(long int));

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

    int array[][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}};
        int (*p)[4] = array;
        int i,j;
        
        for (i = 0; i < 3; i++)
        {       
               for ( j = 0; j < 4; j++)
               {
                   printf("%2d ", *(*(p+i)+j));
               }
               printf("\n");



        }


        printf("p:%p , array:%p\n",p,array);
        printf("p+1:%p , array+1: %p\n",p+1,array+1);









    return 0;
}
