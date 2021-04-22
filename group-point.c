#include<stdio.h>
int main()
{
    
    int temp2[5] = {1,2,3,4,5};
    int (*p)[5] = &temp2;
    int i;

    printf("sizeof(p):%d\n",sizeof(p));
    printf("sizeof(p[1]):%d\n",sizeof(p[1]));
    
    printf("sizeof(*(p + i)):%d\n",sizeof(*(p + i)));
    printf("sizeof(*(*p+i)):%d\n",sizeof(*(*p+i)));
    printf("sizeof(p):%d\n",sizeof(p));



printf("%d\n%d\n",p,*p);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(p + i));
    }

printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",(p + i));
    }

 printf("\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",p[i]);
//     }  


// printf("\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",&p[i]);
//     }
// printf("\n");

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",*p[i]);
//     }
// printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(*p+i));
    }
printf("\n");

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",(*p[i]));
//     }

printf("\n定义数组指针\n");

int temp = {0,1,2,3,4,5,6,7,8,9};
int (*gp)[] = &temp;

printf("szieof(gp)=%d\n",sizeof(gp));
printf("szieof(*gp)=%d\n",sizeof(*gp+1));
printf("sizeof(temp)=%d\n",sizeof(temp));
printf("sizeof(&temp)=%d\n",sizeof(&temp));
printf("(gp)=%d\n",(gp));
printf("(temp)=%d\n",temp);
printf("(&temp)=%d\n",&temp);
printf("gp=%d\n",gp);
// printf("gp+1=%d\n",gp+1);
// printf("gp+2=%d\n",gp+2);
// printf("gp+3=%d\n",gp+3);
printf("*gp=%d\n",*gp);
printf("(*gp+1)=%d\n",(*gp+1));
printf("(*gp+2)=%d\n",(*gp+2));
printf("(*gp+3)=%d\n",(*gp+3));
printf("**gp=%d\n",**gp);
printf("*(*gp+1)=%d\n",*(*gp+1));
printf("*(*gp+2)=%d\n",*(*gp+2));
printf("*(*gp+3)=%d\n",*(*gp+3));
    return 0;
}