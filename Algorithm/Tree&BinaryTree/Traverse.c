#include"Tree.h"

int visit(BiTree T)
{
	if(printf("%c",T->data))
		return 1;
	return 0;
}

int ProOrder(BiTNode * T)
{
	if (T){
		if(visit(T))
			if(ProOrder(T))
				if(ProOrder(T)) return 1;
		return 0;
	}
	else
		return 1;
}

int main(){
	for (int i = 0; i < 10; i++)
	{
		printf("%c",A[i]);
	}
	
	if(InitTree()){
		printf("%c",T->data);
		ProOrder(T);
	}
	return 0;
}