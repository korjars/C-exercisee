#include"TheListA.h"

typedef SqList HeapType;

void HeapAdjust(HeapType *L,int point,int length)//point*2 <=length 不然没意义意味着point没有子树 point子树2*point && point*2+1
{
    L->r[0] = L->r[point];
    for ( int j = 2*point; j <= length ; j=j*2)
    {
        if (j<length && L->r[j].key < L->r[j+1].key)  j++;//j<length  意味着j+1存在
        if (L->r[0].key >= L->r[j].key) break;//不用下沉 break兼具了else的功能。
        L->r[point] = L->r[j];//j值上浮循环后为point子树和子树的子树中最大值上浮至point
        point = j;//这里point已经没用了，用作储存j值得临时变量
    }
    L->r[point] = L->r[0];//将原point成功与其子树最大值交换，既将point沉底。
}

void HeapSort(HeapType *L)
{
    printf("\nHeapSort要传入&L，HeapSort里面调用HeapAdjust只用把L传入 HeapAdjust即可。不理解这里的HeapAdjust调用为什么直接调用L就行所以尝试吧L的值输入：%d\n",L);
    for (int i = L->length/2; i>0; i--)//r[0]不参加
        HeapAdjust(L,i,L->length);     //二叉树的性质 length/2 就是倒数第二层的节点。小于此值节点全部调整得到大顶堆。不用从length也就是叶子结点开始，叶子结点无子树所以没必要。
    for (int i = L->length; i > 1; i--)
    {
        L->r[0] = L->r[i];
        L->r[i] = L->r[1];
        L->r[1] = L->r[0];//调换堆顶 1号 和 最后一位也就是i 此时最后一位元素为原堆顶元素也就是最大值，此时i=最后一位为最大值i排序完毕。
        HeapAdjust(L,1,i-1); //1号到最后一号 i-1重新调整为大根堆；
    }
}

int main()
{   
    printf("sizeof(L):%d",sizeof(L));
    test(HeapSort);
    return 0;
}