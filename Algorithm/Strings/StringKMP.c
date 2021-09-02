#include "SequeueString.h"

void Get_next(SString T, int next[])
{


}
int KMP(SString S,SString T,int next[])
{


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

    KMP(S,T,next);
    return 0;
}