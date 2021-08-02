#include "SequeueString.h"
//字符串第一个不存字符所以从 1 开始
int BruteForce(SString S, SString T)
{
    int k = 1;
    int i = 0 , j = 0;
    while (i < S.length && j < T.length)
    {
        if (S.ch[i] == T.ch[j])
        {
            i++;
            j++;
        }
        else
        {
            k++;
            i = k;
            j = 1;
        }
        
    }
    if ( j >= T.length)
        {
            printf("匹配成功 第k位 k = %d", k);
            return k;
        }
        else
        {
            printf("匹配失败");
            return 0;
        }
}
int main()
{
    printf("开始匹配。\n");
    SString S;
    strcpy(S.ch,"15279287199");
    S.length = strlen(S.ch);
    printf("S.ch = %s\n",S.ch);
    printf("S.length = %d\n",S.length);
    SString T;
    strcpy(T.ch,"719");
    T.length = strlen(T.ch);
    printf("T.ch = %s\n",T.ch);
    printf("T.length = %d\n",T.length);
    BruteForce(S,T);
    return 0;
}