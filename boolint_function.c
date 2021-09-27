#include<stdbool.h>
#include<stdio.h>

int IntAB(int a, int b)
{
    if(a>b)
        return 999;
    else
        return 0;
}

int IntABwithbool(int a, int b)
{
    if(a>b)
        return true;
    else
        return false;
}

bool BoolAB(int a, int b)
{
    if(a>b)
        return true;
    else
        return false;
}

bool BoolABwithInt(int a, int b)
{
    if(a>b)
        return -1;
    else
        return 0;
}

int main(){
    int a =100;

    int b =99;

    int c =333;

    c= IntAB(a,b);
    printf("return IntAb() C = %d\n",c);
    c= IntABwithbool(a,b);
    printf("return IntAb() C = %d\n",c);
    c= BoolAB(a,b);
    printf("return IntAb() C = %d\n",c);
    c= BoolABwithInt(a,b);
    printf("return IntAb() C = %d\n",c);

}