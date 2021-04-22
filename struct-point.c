#include<stdio.h>

int main(void)
{
    struct fz {int x ;int y; } t1, t2;
    struct anything {int a ; int b ;} *p;
    p = &t1;
    t1.x = 999;
    t1.y = 111;
    printf("t1.x = %d\n",t1.x);
    printf("t2.x = %d\n",t2.x);
    printf("t1.y = %d\n",t1.y);
    printf("p->x = %d\n",p->a);
    printf("(*P).a = %d\n",(*p).a);
    printf("(*P).b = %d\n",(*p).b);
    printf("t1.x = %d\n",t1.x);
    printf("t1.x = %d\n",t1.x);
    printf("t1.x = %d\n",t1.x);

    return 0;
}