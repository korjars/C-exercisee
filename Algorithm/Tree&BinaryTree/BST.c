#include"Tree.h"

int BST_Insert(BiTree *T,int K){
    if(*T == NULL){
        *T = (BiTree)malloc(sizeof(BiTNode));
        (*T)->num = K;
        (*T)->lchild = (*T)->rchild = NULL;
        return 1;
    }
    else if(K == (*T)->num){
        printf("K is extant");
        return 0;
    }
    else if(K < (*T)->num){
        BST_Insert(&(*T)->lchild,K);
        return 1;
    }
    else{
        BST_Insert(&(*T)->rchild,K);
        return 1;
    }
}

int Init_BST(BiTree *T,int A[],int n){
    //T = NULL;
    int i=0;
    while (i < n)
    {
        BST_Insert(T,A[i]);
        i++;
    }
    return 1;
}

int visit(BiTree T)
{
	if(printf("%d\n",T->num))
		return 1;
	return 0;
}

int PreOrder(BiTree T)
{
	if (T){
		if(visit(T))
			if(PreOrder(T->lchild))
				if(PreOrder(T->rchild)) return 1;
		return 0;
	}
	else
		return 1;
}

int InOrder(BiTree T){
    if(T){
        if(InOrder(T->lchild))
            if(visit(T))
                if(InOrder(T->rchild)) return 1;//正确执行相当于跳出。
        return 0;
    }
    else
        return 1;
}

int PostOrder(BiTree T){
    if(T){
        if(PostOrder(T->lchild))
            if(PostOrder(T->rchild))
                if(visit(T)) return 1;
        return 0;
    }
    else
        return 1;
}
BiTree BT=NULL;
int main(){
    if (T == NULL)
        printf("T is correct !");
    int A[] = {45,24,53,45,12,24};
    Init_BST(&BT,A,6);
    printf("%d",BT->num);
    PreOrder(BT);
    InOrder(BT);
    PostOrder(BT);
}
