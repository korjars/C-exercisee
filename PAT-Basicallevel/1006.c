#include<stdio.h>


int main()
{
    int n;int B=0,S=0,g=0;
    scanf("%d",&n);
    if (n < 1000)
    {
    g = n%10;
  //  printf("%d",g);
    S = n%100/10;
  //  printf("%d",S);
    B = n / 100;
  //  printf("%d",B);
    }
    for (int i = 0; i < B; i++)
    {
        printf("B");
    }
    for (int i = 0; i < S; i++)
    {
        printf("S");
    }
    for (int i = 1; i < g+1; i++)
    {
        printf("%d", i);
    }
    return 0;
}