# include <stdio.h>
int main()
{
//指向指针的指针 与二维数组的区别
int a =9;
int *p = &a;
int **pp = &p;

printf("sizeof(a):%d\n",sizeof(a));
printf("sizeof(p):%d\n",sizeof(p));
printf("sizeof(pp):%d\n",sizeof(pp));
printf("(&pp):%d\n",&pp);
printf("(pp):%d\n",pp);
printf("(*pp):%d\n",*pp);
printf("(&p):%d\n",&p);
printf("(p):%d\n",p);
printf("(*p):%d\n",*p);
printf("(&a):%d\n",&a);
printf("(a):%d\n",a);


char *grt2[] = {"bcdef","ghijk","a"};

if (*(grt2+1) == grt2[1])
{
    printf("true\n");
}

printf("sizeof(grt2):%d\n",sizeof(grt2));
printf("sizeof(grt2[0]:%d\n",sizeof(grt2[0]));
printf("sizeof(*(grt2+1)):%d\n",sizeof(*(grt2+1)));
printf("sizeof(grt2[0][0])%d\n",sizeof(grt2[0][0]));
printf("sizeof(*(grt2+1)):%d\n",sizeof(*(*(grt2+1))));
// printf("%d\n",grt2+1);

// printf("%d\n",*grt2+1);

printf("&grt2 %d\n",&grt2);
printf("grt2) %d\n",grt2);
printf("*grt2 %d\n",*grt2);
printf("&grt2[0] %d\n",&grt2[0]);
printf("grt2[0] %d\n",grt2[0]);
printf("*grt2[0] %d\n",*grt2[0]);
printf("&grt2[0][0] %d\n",&grt2[0][0]);
printf("grt2[0][0] %d\n",grt2[0][0]);
// printf("%c\n",*(*grt2+1));
printf("*(grt2+1) %d\n",*(grt2+1));
// printf("%c\n",*(*grt2));
// printf("%d\n\n",**grt2);


printf("%s\n",grt2);
printf("%s\n",grt2[0]);
printf("%s\n\n",&grt2[0][0]);

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 6; j++)
    {
        printf("&grt2[%d][%d]:%d\n",i,j,&grt2[i][j]);
        printf("%s\n",&grt2[i][j]);
    }
    printf("\n\n");
}


// printf("%s\n",*grt2);
// printf("%s\n",*grt2+1);
// printf("%d\n",grt2);
// printf("%d\n\n",grt2+1);

// printf("%s\n",grt2[0]);
// printf("%s\n",*grt2+1);
// printf("%d\n",grt2);
// printf("%d\n\n",grt2+1);

// printf("%s\n",grt2[1]);
// printf("%s\n",*grt2+1);
// printf("%d\n",grt2);
// printf("%d\n\n",grt2+1);


// printf("\n\n");

// int a = 1;
// const int b =2;
// int const c = 3;
// int *pa = &a;
// int *pb = &b;
// int *pc = &c;

// printf("a=%d\n*pa=%d\npa=%d\n",a,*pa,pa);
// *pa = 11;
// printf("a=%d\n*pa=%d\npa=%d\n",a,*pa,pa);

// printf("b=%d\n*pb=%d\npb=%d\n",b,*pb,pb);
// pb = 22;
// printf("b=%d\n*pb=%d\npb=%d\n",b,*pb,pb);

// printf("c=%d\n*pc=%d\npc=%d\n",c,*pc,pc);
// *pc = 33;
// printf("c=%d\n*pc=%d\npc=%d\n",c,*pc,pc);
// printf("a=%d\n*pa=%d\npa=5d\n",a,*pa,pa);
// printf("a=%d\n*pa=%d\npa=5d\n",a,*pa,pa);


// char a = 'a';

// printf("%d\n",a);
// printf("%c\n",a);
// printf("%s\n",a);
    return 0;
}