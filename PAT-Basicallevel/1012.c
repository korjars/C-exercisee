#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int num[1000];
    int A[5] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        // if (num[i] == 0)
        // {
        //     printf("input false");
        //     return 0;
        // }
    }
    int a[5] = {0}, a3 = 0,a1 =0;
    for (int i = 0; i < n; i ++)
    {
        switch (num[i] % 5)
        {
        case 0: if (num[i] %2 ==0) A[0] = A[0] + num[i];a[0]++;break;
        case 1: A[1] = A[1] + pow(-1,a1)*num[i];a1++;a[1]++;break;
        case 2: A[2]++;a[2]++;break;
        case 3: a3++;A[3] = A[3] + num[i];a[3]++;break;
        case 4: if (num[i] > A[4]) A[4] = num[i];a[4]++;break;
        default:break;
        }
    }
    int temp = 0;
    float sm = A[3];
    for (int i = 0; i < 5; i++)
    {   if (temp == 1) printf(" ");
        if (a[i] == 0)
        {printf("N");
        temp =1;}
        else
        {if (i == 3)
        {printf("%.1f",sm/a3);
        temp =1;}
        else
        {printf("%d",A[i]);
        temp =1;}}
    }
//    printf("\n%d %d %d %.1f %d",A[0],A[1],A[2],A[3],A[4]);
    return 0;
}
