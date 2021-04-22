# include <stdio.h>
int main()
{
int a[5][5] = {0};
printf("\n%d\n",sizeof(a));
printf("%d\n",sizeof(a[0]));
printf("%d\n",sizeof(a[0][0]));
printf("%d\n",&a);
printf("%d\n",a);
printf("%d\n",&(a[0]));
printf("%d\n",a[0]);
printf("%d\n\n",&(a[0][0]));
printf("%d\n",a[0][0]);
printf("%d\n",*a);
printf("%d\n",**a);

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        printf("%d\n",&a[i][j]);
        printf("%d\n",a[i][j]);
    }
    printf("\n\n");
}

    return 0;
}