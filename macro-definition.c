# include<stdio.h>
#define MAX(x,y) ((x) > (y) ? (x): (y))
#define SQUARE(x) x*x

int main()
{
    int a,b;
    printf("input numbers:\n");
    scanf("%d%d",&a,&b);

    printf("%d larger\n", MAX(a,b));

    printf("%d square is %d\n",a,SQUARE(a));

    printf("%d square is %d\n",a+1,SQUARE(a+1));
// becuse SQUARE(x) x*x  but SQUARE(x) (x)*(x)
//SQUARE(a+1) == a+1*a+1 == a + a + 1 == 2*a +1
//not (a + 1) * (a + 1)

    return 0;
}
