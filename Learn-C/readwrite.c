#include<stdio.h>
#include<stdlib.h>

int main(void)\
{
    FILE *fp1;
    FILE *fp2;
    int ch;

    if ((fp1 = fopen("test.md","r")) == NULL)
    {
        printf("failed open\n");
        exit(EXIT_FAILURE);
    }

    if ((fp2 = fopen("test2.md","w  ")) == NULL)
    {
        printf("failed open\n");
        exit(EXIT_FAILURE);
    }
    
    while ((ch = fgetc(fp1)) !=EOF )
    {
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp1);

    int abc[] = {1,2,3,4,5,6,7};
    int (*ptest)[] = &abc;
    printf("%d\n",ptest);
  //  *ptest = "yingcaadk";
    printf("%d\n",*(*ptest+1));

    printf("%d\n",abc);
    printf("%d",&abc);
    return 0;
    
}