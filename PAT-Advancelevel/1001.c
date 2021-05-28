#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
    int a ,b ;
    scanf("%d%d",&a,&b);
    int sum=0;
    sum = a + b;

    char csum[7]= {0};
    itoa(sum,csum,10);
    // printf("%d %d\n",a,b);
    // printf("%d\n",sum);


    // printf("%s\n",csum);
    int c = strlen(csum);
    for (int i = 0; i < c; i++)
    {
        printf("%c",csum[i]);        
        if (sum > 0 && ((c-1-i)%3 == 0)&& ((c-i-1) != 0))
        {
            printf(",");
        }
        else if (sum < 0 &&((c-1-i)%3 == 0) && ((c-i-1) != 0) && i > 1)
        {
            printf(",");
        }
        
        {

        }
        
    }
    
    return 0;
}