#include "SequeueString.h"

int next[10]={-1};
int nextval[10]={-1};

void Get_next(SString T, int next[])//由于设定这里的子串从下标0开始
{
    //printf("%d\n",T.ch[0]);
    int i = 0;
    next[0] = -1;
    int j = -1;
    while (i < T.length-1)
    {
        if (j==-1 || T.ch[i]==T.ch[j])
        {
            ++i;
            ++j;
            next[i]=j;
        }
        else
            j = next[j];
    }
}

void Get_nextval(SString T,int nextval[])
{
    int i=0,j=-1;
    next[0] = -1;
    while (i < T.length-1)
    {
        if (j==-1 || T.ch[i]==T.ch[j])
        {
            ++i;
            ++j;
            if (T.ch[i] != T.ch[j]) nextval[i] = j;
            else nextval[i] =nextval[j];
        }
        else j = nextval[j];
    }
}

int KMP(SString S,SString T,int Thenext[])
{
    int i=-1,j=-1;
    while (i <= S.length && j < T.length)
    {
        if (j == -1 || S.ch[i] == T.ch[j])
        {
            ++i;
            ++j;
        }
        else j = Thenext[j];
    }
    if ( j = T.length)
    {
        printf("匹配成功 第%d位",i- T.length+1);
        return i-T.length+1;
    }
    else
    {
        printf("匹配失败");
        return 0;
    }
}

int main()//只做测试算法用，实际应用修改T与S S改为手动输入。
{
    printf("开始匹配。\n");
    InitTS();
    Get_next(T,next);
    for (int i = 0; i < 10; i++)
    {
        printf("%d - ",next[i]);
    }
    KMP(S,T,next);
    return 0;
}