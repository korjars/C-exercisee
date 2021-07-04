# include <stdio.h>
int main()
{
//// int a = 1;
//// const int b =2;
//// int const c = 3;
//// int *pa = &a;
//// int *pb = &b;
//// int *pc = &c;
//
//// printf("a=%d\n*pa=%d\npa=%d\n",a,*pa,pa);
//// *pa = 11;
//// printf("a=%d\n*pa=%d\npa=%d\n",a,*pa,pa);
//
//// printf("b=%d\n*pb=%d\npb=%d\n",b,*pb,pb);
//// pb = 22;
//// printf("b=%d\n*pb=%d\npb=%d\n",b,*pb,pb);
//
//// printf("c=%d\n*pc=%d\npc=%d\n",c,*pc,pc);
//// *pc = 33;
//// printf("c=%d\n*pc=%d\npc=%d\n",c,*pc,pc);
//// printf("a=%d\n*pa=%d\npa=5d\n",a,*pa,pa);
//// printf("a=%d\n*pa=%d\npa=5d\n",a,*pa,pa);
//
//
//// char a = 'a';
//
//// printf("%d\n",a);
//// printf("%c\n",a);
//// printf("%s\n",a);
//char *grt2[] = {"bcdef","ghijk"};
//printf("%d\n",sizeof(grt2));
//printf("%d\n",sizeof(grt2[0]));
//printf("%d\n",sizeof(grt2[0][0]));
//
//// printf("%d\n",grt2+1);
//
//// printf("%d\n",*grt2+1);
//
//printf("%d\n",&grt2);
//printf("%d\n",grt2);
//printf("%d\n",*grt2);
//printf("%d\n",&grt2[0]);
//printf("%d\n",grt2[0]);
//printf("%d\n",*grt2[0]);
//printf("%d\n",&grt2[0][0]);
//printf("%d\n",grt2[0][0]);
//// printf("%c\n",*(*grt2+1));
//printf("%d\n",*(grt2+1));
//// printf("%c\n",*(*grt2));
//// printf("%d\n\n",**grt2);
//
//
//printf("%s\n",grt2);
//printf("%s\n",grt2[0]);
//printf("%s\n\n",&grt2[0][0]);
//
//for (int i = 0; i < 2; i++)
//{
//    for (int j = 0; j < 6; j++)
//    {
//        printf("%d\n",&grt2[i][j]);
//        printf("%s\n",&grt2[i][j]);
//    }
//    printf("\n\n");
//}
//
//
//// printf("%s\n",*grt2);
//// printf("%s\n",*grt2+1);
//// printf("%d\n",grt2);
//// printf("%d\n\n",grt2+1);
//
//// printf("%s\n",grt2[0]);
//// printf("%s\n",*grt2+1);
//// printf("%d\n",grt2);
//// printf("%d\n\n",grt2+1);
//
//// printf("%s\n",grt2[1]);
//// printf("%s\n",*grt2+1);
//// printf("%d\n",grt2);
//// printf("%d\n\n",grt2+1);
//
//
//printf("\n\n");
//
//
//int a[5][5] = {0};
//// printf("\n%d\n",sizeof(a));
//// printf("%d\n",sizeof(a[0]));
//// printf("%d\n",sizeof(a[0][0]));
//printf("%d\n",&a);
//printf("%d\n",a);
//printf("%d\n",&(a[0]));
//printf("%d\n",a[0]);
//printf("%d\n\n",&(a[0][0]));
//// printf("%d\n",a[0][0]);
//// printf("%d\n",*a);
//// printf("%d\n",**a);
//
//for (int i = 0; i < 5; i++)
//{
//    for (int j = 0; j < 5; j++)
//    {
//        printf("%d\n",&a[i][j]);
//        printf("%d\n",a[i][j]);
//    }
//    printf("\n\n");
//}

printf("看一看数组的储存方式");
int i=0;
int j = 0;
int groupN[9] = {1,2,3,4,5,6,7,8,8};
int groupN2[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,15,14};

for (int i = 0; i < 9; i++)
{
    printf("&groupN[%d]=%d\n",i,&groupN[i]);
}


for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 5; j++)
    {
        printf("%d  %d  &groupN2[%d][%d]=%d\n",i,j,i,j,&(groupN2[i][j]));
        printf("groupN2[%d][%d]=%d\n",i,j,(groupN2[i][j]));
    }
    
}


//  指针指针 指针数组 数组指针 二维数组 总结比较
// printf("定义四者\n");
// printf("定义指针指针\n");
// int a = 5 ;
// int *p = &a;
// int **pp = &p;
// printf("sizeof(a):%d\n",sizeof(a));
// printf("sizeof(p):%d\n",sizeof(p));
// printf("sizeof(pp):%d\n",sizeof(pp));
// printf("地址(a):%d\n",(&a));
// printf("地址(p):%d\n",(&p));
// printf("地址(pp):%d\n",(&pp));


// printf("\n定义指针数组\n");

// printf("定义数字指针数组\n");
// int *getN[] = {1,2,3,4};

// printf("sizeof(getN):%d\n",sizeof(getN));
// printf("sizeof(getN[0]):%d\n",sizeof(getN[0]));
// printf("sizeof(*getN[0]):%d\n",sizeof(*getN[0]));
// printf("*getN[1]:%d\n",*(getN+1));
// printf("地址(getN):%d\n",(&getN));
// printf("值(getN):%d\n",getN);
// printf("*(getN):%d\n",*getN);
// printf("值(getN[0]):%d\n",getN[0]);
// printf("值(getN[2]):%d\n",getN[3]);

printf("\n定义数字指针数组2\n");
int *getN2[4][4] = {1,2,3,4,4,5,6,7,458,9,8,7,6};

printf("sizeof(getN2):%d\n",sizeof(getN2));
printf("sizeof(getN2[0]):%d\n",sizeof(getN2[0]));
printf("sizeof(*getN2[0]):%d\n",sizeof(*getN2[0]));
printf("地址(getN2):%d\n",(&getN2));
printf("值(getN2):%d\n",getN2);
printf("值(getN2+1):%d\n",getN2+1);
printf("值(getN2+2):%d\n",getN2+2);
printf("值(getN2+3):%d\n",getN2+3);
printf("值*getN2):%d\n",*getN2);
printf("值*getN2+1):%d\n",*getN2+1);
printf("值*getN2+2):%d\n",*getN2+2);
printf("值*getN2+3):%d\n",*getN2+3);
printf("值*(*getN2):%d\n",**getN2);
printf("值*(*getN2+1):%d\n",*(*getN2+1));
printf("值*(*getN2+2):%d\n",*(*getN2+2));
printf("值*(*getN2+3):%d\n",*(*getN2+3));
printf("*(getN2):%d\n",*(getN2));
printf("*(getN2+1):%d\n",*(getN2+1));
printf("*(getN2+2):%d\n",*(getN2+2));
printf("*(getN2+3):%d\n",*(getN2+3));
printf("地址(getN2[0]):%d\n",(&getN2[0]));
printf("getN2[0]=%d\n",getN2[0]);
printf("getN2[1]=%d\n",getN2[1]);
printf("getN2[2]=%d\n",getN2[2]);
printf("getN2[3]=%d\n",getN2[3]);
// printf("\n定义字符指针数组\n");
// char *getC[] = {"a","b",'c','d'};

// printf("sizeof(getC):%d\n",sizeof(getC));
// printf("sizeof(getC[0]):%d\n",sizeof(getC[0]));
// printf("sizeof(*getC[0]):%d\n",sizeof(*getC[0]));
// printf("地址(getC):%d\n",(&getC));
// printf("值(getC):%d\n",getC);
// printf("*(getC):%d\n",*getC);
// printf("地址(getC[0]):%d\n",(&getC[0]));
// printf("getC[[0][0]:%d\n",getC[0][0]);


// printf("\n定义字符指针数组2\n");
// int *getC2[] = {"zhang","yichang","ceshi","zifu"};

// printf("sizeof(getC2):%d\n",sizeof(getC2));
// printf("sizeof(getC2[0]):%d\n",sizeof(getC2[0]));
// printf("sizeof(*getC2[0]):%d\n",sizeof(*getC2[0]));
// printf("地址(getC2):%d\n",(&getC2));
// printf("值(getC2):%d\n",getC2);
// printf("*(getC2):%d\n",*getC2);
// printf("地址(getC2[0]):%d\n",(&getC2[0]));
// printf("getC2[0][0]:%d\n",getC2[0][0]);

printf("\n定义数组指针\n");

int temp = {0,1,2,3,4,5,6,7,8,9};
int (*gp)[] = &temp;

printf("szieof(gp)=%d\n",sizeof(gp));
printf("szieof(**gp)=%d\n",sizeof(**gp));
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

printf("\n定义二维数组\n");


    return 0;

}