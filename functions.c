#include<stdio.h>

void printC();
void printC()
{
    printf(" ######  \n");
    printf("##     ##\n");
    printf("##       \n");
    printf("##       \n");
    printf("##       \n");
    printf("##     ##\n");
    printf(" ######  \n");
}


// void SUM();
int SUM(int n)
{
    int add=0;
for (int i = 0; i < n+1; i++)
{
    add +=i;
}

return add;

}
int main(void)
{

printC();
int a=100;
int b;
b = SUM(a);
printf("%d", SUM(a));
    return 0;
}