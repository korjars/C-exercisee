#include<stdio.h>
#include<math.h>
int main (void)
{   
    int n;
    scanf("%d",&n);
    long a[n],b[n],c[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for (int i = 0; i < n; i++)
    {   if (a[i] + b[i] > c[i])
        print("Case #%d: true",i);
        else
        print("Case #%d: false",i);
    }
    return 0;
}