#include<stdio.h>
#include<math.h>

int main()
{
    int Tn = 0;
    int count;
    scanf("%d",&count);
    //printf("%d\n",count);
    for (int i = 1; i < count; i=i*2)
        for (int k = 0; k <= i; k++)
        {
            Tn++;
        }
    printf("%d\n",Tn);
    return 0;
}