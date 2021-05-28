#include<stdio.h>
int main(){
	int k, i, t, count = 0;
	float c[1010] = {0};
	float num;
    //input
	scanf("%d", &k);
	for(i = 0; i < k; i++){
		scanf("%d %f", &t, &num);
		c[t] += num;
	}
    //input
	scanf("%d", &k);
	for(i = 0; i < k; i++){
		scanf("%d %f", &t, &num);
		c[t] += num;
	}
    //the number of K
	for(i = 0; i < 1010; i++){
		if(c[i] != 0)
			count++;
	}

    //output
	printf("%d", count);
	for(i = 1009; i >=0; i--){
		if(c[i] != 0){
			printf(" %d %.1f", i, c[i]);
		}
	}
	return 0;
}
