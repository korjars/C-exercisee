#include"Tree.h"

int main(){
    if (T == NULL)
    {
        T = (BiTree)malloc(sizeof(BiTNode));
        T->num = 9999;
        T->ltag = 0;
        T->data = "u";
        T->rtag = 1;
    }
    printf("%d\n",T);
    printf("%d\n",T->num);
    printf("%d\n",sizeof(T));
    printf("%d\n",sizeof(BiTNode));
    
}