#include<stdio.h>
#include<math.h>
int main(void)
{
    int N,n;
    int M;
    int temp =0;
    scanf("%d",&N);
    scanf("%d",&n);
    int NUM[N];
    for (int i = 0; i < N; i++)
    {
        //int a ;
        scanf("%d",&NUM[i]);
        //NUM[i] = a;
    }
    
    // int num[N];
    // for (int i = 0; i < N-n; i++)
    // {
    //     num[i+n] = NUM[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     num[i] = NUM[N-n+i];
    // }
    for (int i = N-n; i < N; i++)
    {
        if (temp == 1) printf(" ");
        printf("%d",NUM[i]);
        temp = 1;
    }
    
    for (int i = 0; i < N -n; i++)
    {
        if (temp == 1) printf(" ");
        printf("%d",NUM[i]);
        temp = 1;
    }
   return 0;
}