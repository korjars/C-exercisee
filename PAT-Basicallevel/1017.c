#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void)
{
    char A[1001];
    int B;
    scanf("%s",A);
    scanf("%d",&B);
    int len,remain,quotion;
    len = strlen(A);
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        temp = A[i]-'0' + 10*remain;
        //printf("%d\n",temp);
        A[i] = temp/B+'0';
        remain = temp%B;
    }
    if (A[0]-'0' > 0)
    {printf("%s",A);}
    else 
    {for (int i = 1; i < len; i++)
    {
        printf("%s",A[i]);
    }
    }
    printf(" %d",B);
    return 0;
}