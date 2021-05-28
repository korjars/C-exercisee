# include <stdio.h>
# include<math.h>

int main(void)
{
    int a;
    scanf( "%d", &a);
    int i;
    while (a!=1)
    {   i++;
        if (a%2==0)
        {a = a/2;
        }
        else
        {
            a = (3*a +1)/2;
        }
    }
    printf("times:%d\n",i);
    return 0;
}