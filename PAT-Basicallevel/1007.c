#include<stdio.h>
#include<math.h>
int main(void)
{
    int n = 0;
    int k;
    scanf("%d",&k);
    int v[100000] = {0};

    for (int i = 2; i <= k; i++)
    {
            v[i] = 1 ;
        for (int j = 2; j < i; j++)
        {
            if (i % j ==  0)
            {    v[i] = 0;
                break;
            }
        }
    }
    v[2] = 1;
    for (int i = 0; i < k; i++)
    {  // printf("%d\n",v[i]);
        if (v[i] == 1  && v[i+2] == 1)
        {
            n++;       
        }
        
    }
    printf("%d",n);
    return 0;
}

//采用hash把范围内质数标记出来，然后判断是否相邻2