//注意输出格式，如0023，输出也是0023，而不是23
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(long n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int L, K;
    scanf("%d %d", &L, &K);
    char str[L];
    scanf("%s", str);
    int len = strlen(str);
//    注意边界范围，不要写成 i < len - K
    for (int i = 0; i <= len - K; i++) {
        char curStr[K];
        strncpy(curStr, str + i, K);
        curStr[K] = '\0';
        int curNum = atol(curStr);
//打印curStr，而不是curNum
        if (isPrime(curNum)) {
            printf("%s", curStr);
            return 0;
        }
    }
    printf("404");
    return 0;
}