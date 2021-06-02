#include<stdio.h>
#include<string.h>
int main(void)
{
    // char p[80][80];
    // int n = 0;
    // while (scanf("%s",p[n])!= EOF)
    // {
    //     n++;
    // }
    
    // for (int i = n-1; i >= 0; i--)
    // {
    //     printf("%s",p[n]);
    //     if ( i > 0) printf(" ");
    // }
    
    char a[80][80];
    int n,i;//n为单词个数
    while(scanf("%s",a[n]) != EOF){//未到文本末尾，持续计数
        n++;
    }
    for(i=n-1;i>=0;i--){//逆序输出
        printf("%s",a[i]);
        if(i>0) printf(" ");//最后一个单词无空格
    }
    return 0;
}