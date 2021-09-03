#include "TheListA.h"
//辅助储存 我犹豫一上午就是想直接通过参数传递造成一个辅助储存而不是
//SR 和 TR 都可以修改传入函数的主函数序列的值。这里直接用创建解决。

//函数测试时出错
/*
排序前序列：
4 < 7 < 2 < 3 < 6 < 5 < 1 < 9 < 8 < 15 < 13 < 17 < 19 < 12 < 20 < 18 < 16 < 14 < 11 < 10 < 
L：6421904

这里函数必须传入L的地址：4229600

排序后序列：
1 < 1 < 1 < 1 < 1 < 1 < 1 < 8 < 8 < 10 < 10 < 10 < 10 < 10 < 10 < 10 < 10 < 10 < 10 < 15 < 
*/

//增加一个测试函数输出相关参数
void correct(RcdType a[])
{
    printf("\n输出函数内序列的内容\n");
    for (int i = 1; i < MAXSIZE+1; i++)
    {
        printf("%d #",a[i].key);
    }
}
//初步分析是递归调用的问题

void Merge(RcdType SR[],RcdType TR[],int first,int m,int last)//这里的SR和TR为RcdType与L.r 类型相同，值传递时，把L.r传递进来。要把L.r想象成独立于Sqlist L 的纯RcdType型数组。
{
    int i,j,k;
    for ( j = m+1,k = first,i =first; i <=m && j <=last; ++k)//i,j分别为合并序列前半和后半的指示旗；k从头到尾表示整个序列
    {
        if(SR[j].key<SR[i].key) TR[k] = SR[j++];
        else TR[k] = SR[i++];
    }//循环结束时i，j序列必有一个走到结束，余下的另一个直接加在总序列末尾即可。
    while(i<=m) TR[k++] = SR[i++];//i未走完i序列长度大于j序列
    while(j<=last) TR[k++] = SR[j++];//j未走完j序列长度大于i序列
}

void Msort(RcdType SR[],RcdType TR[],int first,int last)
{
    //printf("%d\n",TR2);
    //printf("%d\n",TR2);
    RcdType TR2[MAXSIZE+1];
    if(first == last) TR[first] = SR[first];
    else
    {
        int m=(first+last)/2;
        Msort(SR,TR2,first,m);
        Msort(SR,TR2,m+1,last);
        Merge(TR2,TR,first,m,last);
    }
}

void MergeSort(SqList *L)
{
    Msort(L->r,L->r,1,L->length);
}

int main()
{
    //printf("%d\n",TR2);
    //printf("%d\n",L.r);
    test(MergeSort);

    // for (int i = 1; i < 21; i++)
    // {
    //     printf("%d < ",TR2[i].key);
    // }
}

//错误总结将TR2设为全局变量时，Msort递归会出现TR2归并给TR2自己的情况。将TR2移入Msort函数内部，则递归时
//递归时TR2都为局部变量最终归并上一个Msort的局部变量TR2中，结束后回到第一个Msort函数，
//最后将TR2归并到TR 归并结束。TR成功修改。测试成功！！！！！！！！！！！！！！！！！！！！！！！