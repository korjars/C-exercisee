#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<stdbool.h>

#define Maxlen 255

typedef struct 
{
    char ch[Maxlen];
    int length;
}SString;

typedef struct 
{
    char *ch;
    int length;
}HString;

SString S;
SString T;

void InitTS()
{
    strcpy(S.ch,"15279287199");
    S.length = strlen(S.ch);
    printf("S.ch = %s\n",S.ch);
    printf("S.length = %d\n",S.length);
    strcpy(T.ch,"287");
    T.length = strlen(T.ch);
    printf("T.ch = %s\n",T.ch);
    printf("T.length = %d\n",T.length);
}