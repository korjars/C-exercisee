#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void)
{
    //自己写的垃圾玩意
/*    int num;
    printf("input your number:");

    scanf("%d",&num);
    if (num > pow(10,100))
    {
        printf("the num is too large to carculate.!!!!!!!!!!!!!!!!!!");

        return 0;
    }


    int remainder;
    int rsum = 0;
    int n= 0;
    for (int i = num; i > 0; i = i/10)
    {
        remainder = i % 10;
        rsum = rsum + remainder;
        n ++;
    }

    char pc[90];



    for (int i = rsum;i > 0 ; i = i /10)
    {
        int w;
        w = i % (10*(--n));
        char pc2[] = "ling";
        char *p = pc2;
        printf("%s",p);
        
        switch (w)
    {
    case 1:*p = "yi";
        break;
    case 2:*p = "er";
        break;
    case 3:*p = "san";
        break;
    case 4:*p = "si";
        break;
    case 5:*p = "wu";
        break;
    case 6:*p = "liu";
        break;
    case 7:*p = "qi";
        break;
    case 8:*p = "ba";
        break;
    case 9:*p = "jiu";
        break;
    
    default:
        break;
    }

    strcat(*p
    
    }    

printf("%s", pc);
*/

//


    char zidian[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int num;
    printf("input your number:");

    scanf("%d",&num);
    if (num > pow(10,100))
    {
        printf("the num is too large to carculate.!!!!!!!!!!!!!!!!!!");

        return 0;
    }


    int remainder;
    int rsum = 0;
    int n= 0;
    for (int i = num; i > 0; i = i/10)
    {
        remainder = i % 10;
        rsum = rsum + remainder;
        n ++;
    }
    //chu cun mei yi wei
    //printf("%d\n",rsum);
if (rsum/100 != 0)
{
    printf("%s %s %s\n",zidian[rsum/100],zidian[(rsum%100)/10],zidian[rsum%10]);
}
else if (rsum/10 != 0)
{
    printf("%s %s\n",zidian[rsum/10],zidian[rsum%10]);
}
else
{
    printf("%s",zidian[rsum%10]);
}



    return 0;
}