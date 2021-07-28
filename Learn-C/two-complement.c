#include<stdio.h>
#include<math.h>
int main(void)
{
	long long a = 0x7FFFFFFFFFFFFFFF;
	printf("%d\n",sizeof(a));
	printf("%llx\n",a);
	printf("%o\n",a);
	printf("%lld\n",a);
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a));
	
	
	
	return 0;

}