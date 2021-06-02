#include<stdio.h>
#include<math.h>
int main()
{   int num[1000] = {0};
    int ia = 0;
    scanf("%d",&ia);
    int sort[ia];
    for(int i = 0;i < ia; i++)
    {
    int n;
    scanf("%d",&n);
    sort[i] = n;
    while(n != 1)
    {if (n%2 != 0)
    n = 3*n + 1;
    n = n/2;
    printf("%d\n",n);
    num[n] = 1;        
    }
    }
    //从大到小排序输入的数字
    int temp = 0 ;
    for (int i = 0; i < ia; i++)
    {
        for (int k = i +1; k < ia; k++)
        {
            if (sort[k] > sort[i])
            {
            temp = sort[k];
            sort[k] = sort[i];
            sort[i] = temp;
            } 
        }    
    }
    //print teh number we need.
    int something = 0;
    for (int i = 0; i < ia; i++)
    {
        if (num[sort[i]] == 0)
        {
            if (something == 1)
            {
                printf(" ");
            }
        
            printf("%d",sort[i]);
            something = 1;
        }   
    }
    return 0;
}