#include<stdio.h>
#include<math.h>
int main(void)
{
    struct test
    {
        int date;
        char b[100];
        struct test *next;
    };

    struct test *header; //= malloc(sizeof(struct test));
    struct test a;

    printf("%d\n",sizeof(header));
    printf("%d\n",sizeof(a));

    a.date = 100;
    ///printf("%d",header->date);
    long long abc;
    printf("%d\n",sizeof(abc));
    
    
    
    return 0;
}