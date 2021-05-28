#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
//    解的数量
    int solveCount = 0;
    int input[N];
//   狼人 100 选2 最大组合 = 100*99/2 = 4950
//    int lang[4950][3];
    int lang[2] = {101, 101};
    for (int i = 1; i <= N; i++) {
        scanf("%d", &input[i]);
    }

    //    说真话的狼人
    int langTrue;
    //    说假话的狼人
    int langFalse;
    //    说假话的平民
    int pFalse;
    int isSolve;
//    遍历3个特殊角色，寻找解
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if (i == j || j == k || i == k) {
                    continue;
                }

                langTrue = i;
                langFalse = j;
                pFalse = k;
                isSolve = 1;
//                两人说假话，把他们说的话反过来
                input[langFalse] *= -1;
                input[pFalse] *= -1;

                for (int l = 1; l <= N; l++) {
                    if (input[l] < 0 && (-input[l] != langTrue && -input[l] != langFalse)) {
//                        若说有其他狼，则无解
                        isSolve = 0;
                        break;
                    } else if (input[l] > 0 && (input[l] == langTrue || input[l] == langFalse)) {
//                        若说这两个不是狼，则无解
                        isSolve = 0;
                        break;
                    }
                }

                if (isSolve) {
                    int min = langTrue > langFalse ? langFalse : langTrue;
                    int max = langTrue > langFalse ? langTrue : langFalse;
                    if (min < lang[0] || (min == lang[0] && max < lang[1])) {
                        lang[0] = min;
                        lang[1] = max;
                    }
                    solveCount = 1;
                }

//                把原来真假值改回去,进行下一轮
                input[langFalse] *= -1;
                input[pFalse] *= -1;

            }
        }
    }

    if (solveCount) {
//        printf("langTrue = %d ,langFalse = %d, pFalse = %d", lang[0][0], lang[0][1], lang[0][2]);
        printf("%d %d", lang[0], lang[1]);
    } else {
        printf("No Solution");
    }
    return 0;
}