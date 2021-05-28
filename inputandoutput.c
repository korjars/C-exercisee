#include<stdio.h>

int main(void)
 { 
     char a[10];
    int b = 0;
    char c[10];
    scanf("%s %s %d",a,c,&b);
    printf("%s %d %s\n",a,b,c);


    char str[20];  /*定义一个最大长度为19, 末尾是'\0'的字符数组来存储字符串*/
    printf("请输入一个字符串:");
    fgets(str, 19, stdin);  /*从输入流stdin中读取19个字符到字符数组str中*/
    fputs(str, stdout);  //将字符数组的内容输出到输出流stdout中
    return 0;
}
