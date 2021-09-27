#include "Test.h"
#include<stdio.h>
//void PrintTestFile();

//字符和指针都为真。

int main()
{
    //PrintTestFile();
    int a =100;
    int *p = &a;

    char ch = 'z';
    if(ch) printf("%d",*p);
    else printf("false");
    if(!NULL) return printf("%d",*p);
    else return printf("false");

    return 0;
}