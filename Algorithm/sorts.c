#include<stdio.h>
#include<math.h>


void BubbleSort(int *a, int n);//
void InsertionSort(int *a, int n);
void ShellSort(int *a , int n);
void SelectSort(int *a, int n);
void QuickSort(int *a, int n);
void HeapSort(int *a, int n);
void MergeSort(int *a, int n);
void CountSort(int *a, int n);

void PRINTF(int *a, int n)
{
	//int n = sizeof(a)/sizeof(*a);
	for (int i = 0; i < n; i++)
	{
		printf("%d | ",a[i]);
	}
	//return 0;
}

void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap(int *px, int *py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
    //printf("*px = %d, *py = %d\n", *px, *py);
}
// int main(void)
// {
//     int a=10;
//     int b=20;
//     Swap(&a, &b);
//     printf("a = %d, b = %d\n", a, b);
//     return 0;
// }

int main(void)
{
	int arrage[] = {12,34,3132,5,64532,56,575,432,75,8,75,463542,24,56,78,675,6454,567,879,0,9,87,653,2,1,34253,46,32,67,67,3,8,589,78,94678,65,26,536,78,6,9,54678,67,4,6565786,980,589865,2,3139,725687,1,842469,875};
	int b[] = {1,2};
	Swap(b[0],b[1]);
	printf("%d  %d\n",b[0],b[1]);
	swap(&b[0],&b[1]);
	printf("%d  %d\n",b[0],b[1]);
	printf("%d\n",sizeof(arrage));
	printf("%d\n",sizeof(*arrage));
	
	int n = sizeof(arrage)/sizeof(*arrage);
	printf("%d\n",n);
	BubbleSort(arrage, n);
	PRINTF(arrage, n);
	return 0;
}


void BubbleSort(int *a, int n)
{
	int end = 0;
	for (int end = n; end >= 0; end--)
	{	int exchange = 0;//记录有没有产生交换要是没有不必进行下一操作 
		for (int i = 0 ; i <= end-1; i++)
		{	if (a[i] >= a[i + 1])
			{			
				swap(&a[i],&a[i+1]);
				exchange = 1;
			}
		}
		if (exchange = 0)
		{
			break;
		}
	}
	
}