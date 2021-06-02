//本例未完成缺少 输入00时判断出 0 0 
#include<stdio.h>
#include<math.h>
int main(void)
{   int a = 1;
    int n = 0;
    int num[1000];
    while(a != 0)
    {
        scanf("%d",&a);
        num[n] = a;
        n++;
    }
    int temp = 0;
    for (int i = 0; i < n; i=i+2)
    {
        if (temp == 1)
        {
            printf(" ");
        }
        if (num[i+1] != 0)
        {printf("%d ",num[i]*num[i+1]);
        printf("%d",num[i+1]-1);}
        temp = 1;
    }
    return 0;
}