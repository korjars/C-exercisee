#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void TestFouction(int *x1 , int x2)
{
	*x1 = x2;
}
void TestFouction2(int x1 , int x2)
{
	x1 = x2;
}

int main ()
{
	int VinMain = 0;
	int TestDate[5] = {0,1,2,3,4} ;
	for (int i = 0; i < 5; i++)
	{
	TestFouction( &VinMain, TestDate[i]);
	printf("VinMain = %d\n",VinMain);
	}
	
	for (int i = 0; i < 5; i++)
	{
	TestFouction2( VinMain, TestDate[i]);
	printf("VinMain = %d\n",VinMain);
	}

}