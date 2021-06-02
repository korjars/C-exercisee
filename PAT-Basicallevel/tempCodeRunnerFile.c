#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d",&d);
    int num[1000];
    int A[5] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        if (num[i])
        {
            printf("input false");
            return 0;
        }
    }
    int a1 = 0, a3 = 0;
    for (int i = 0; i < n; i ++)
    {
        switch (num[i] % 5)
        {
        case 0: if (num[i] %2 ==0) A[0] = A[0] + num[i];
        case 1: A[1] = A[1] + (-1)^a*num[i];a++;
        case 2: A[2]++;
        case 3: A[3] = A[3] + num[i];a3++;
        case 4: if (num[i] > A[4]) A[4] = num[i];
        default:break;
        }
    }
    printf("%d %d %d %.1f %d",A[0],A[1],A[2],A[3]/a3,A[4])
    return 0;
}
