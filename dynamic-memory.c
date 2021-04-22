#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = malloc(sizeof(int));
    
    if (ptr == NULL)
    {
        printf("memory management failed!\n");
        exit(1);
    }
    
    printf("input a int num:\n");
    scanf("%d", ptr);

    printf("the numbers you input: %d\n" ,  *ptr);
    
    free (ptr);
    printf("the numbers you input: %d\n" ,  *ptr);

    int num;
    printf("input the quantity of numbers that you want to input:");
    scanf("%d",&num);
    int *ptr2;
    ptr2 = (int *)malloc(num * sizeof(int));



    for (int i = 0; i < num; i++)
    {

        printf("the number input:");

        scanf("%d",(ptr2+i));
        //scanf("%d",ptr[i]);
        printf("ptr2[%d]=%d\n",i,ptr2[i]);
        printf("ptr2+%d=%d\n",i,ptr2+i);
    }

    printf("the number you input:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\n",*(ptr2 +i));
        //printf("%d\n",*ptr2[i]);
    }
    
    printf("\n");

    printf("ptr2首地址=%d\n",ptr2);
    printf("ptr2+1=%d\n",ptr2+1);
    printf("&ptr2=%d\n",&ptr2);
    
    printf("*ptr2=%d\n",*ptr2);
    printf("*ptr2+1=%d\n",*ptr2+1);
    printf("*(ptr2+1)=%d\n",*(ptr2+1));
    printf("ptr2[0]=%d\n",ptr2[0]);
    printf("ptr2[1]=%d\n",ptr2[1]);
    printf("ptr2[2]=%d\n",ptr2[2]);

    free(ptr2);
    





    return 0;
}