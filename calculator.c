#include<stdio.h>
#include<math.h>

int main()
{   
    float score;
    float basic;
    float advance;
    printf("Input your score:");
    scanf("%f",&score);
    printf("Input the bassic score:");
    scanf("%f",&basic);
    printf("Input the lower score:");
    scanf("%f",&advance);
    float final;
    final = 500 - (500-score)*(500-basic)/(500 - advance);

    printf("the final score is %f",final);
}