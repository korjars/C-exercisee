#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef char TElemType;

typedef struct BiTNode
{
    TElemType data;
    struct BiTNode *lchild,*rchild;
    int ltag,rtag;
} BiTNode, * BiTree;

void CreateBitreeByscanf(BiTNode *T){
    char ch;
    scanf("%c",&ch);
    if (ch == ' ') T == NULL;
    else{
        T = (BiTNode *)malloc(sizeof(BiTNode));
        T->data = ch;
        CreateBitreeByscanf(T->lchild);
        CreateBitreeByscanf(T->rchild);
    }
    
}

char A[100]="-+a  *b  -c  d   /e  f   ";
int Temp =0;
void CreateBitree(BiTNode *T,char A[]){
    //char ch;
    //scanf("%c",&ch);
    
    if (A[Temp] == ' ') T == NULL;
    else{
        if (!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(OVERFLOW);
        T->data = A[Temp];
        T->ltag=0;T->rtag=0;
        CreateBitree(T->lchild,A);
        CreateBitree(T->rchild,A);
    }
    Temp++;
}

BiTNode *T;
int InitTree(){
    CreateBitree(T,A);
    return 1;
}

int main(){
    CreateBitree(T,A);
    printf("%c",T->data);
    return 0;
}