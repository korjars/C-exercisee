#include<stdio.h>
char *grtWard(char);
char *grtWard(char c)
{
    switch (c)
    {
    case 'A': return "Apple";
    case 'B': return "Banana"; 
    case 'C': return "Cat";
    default: break;
    }
    return 0;
}

int main()
{
char input;
scanf("%s", &input);
printf("%s\n",grtWard(input));
printf("%d\n\n",grtWard);


}