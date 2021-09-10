#include "SequeueString.h"
//字符串下标从0  匹配位数从 1 开始 采用length储存字符串长度而不是0号元素
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
            //k++;
            i = k;
            j = 0;
            k++;
        }
    }
    if ( j = T.length)
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
    InitTS();
    BruteForce(S,T);
    return 0;
}