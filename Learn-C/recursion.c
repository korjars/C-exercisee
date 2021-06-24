#include<stdio.h>
void hanoi(int,char,char,char);
void hanoi(int n,char x,char y,char z)
{
    if (n ==1)
    {
        printf("%c=======>%c\n",x,z);
    }
    else
    {
        hanoi(n-1,x,z,y);
        printf("%c=======>%c\n",x,z);
        hanoi(n-1,y,x,z);
    }
}
int main()
{
    int n;
    printf("input the layers of hanoi:");
    scanf("%d",&n);
    hanoi( n , 'x' , 'y' , 'z');

return 0;
}