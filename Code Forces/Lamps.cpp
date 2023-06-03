#include <bits/stdc++.h>

typedef struct {
    int one;
    int two;
} Pair;
 
int main() {
    int Testop;
    scanf("%d", &Testop);
 
    for (int testCase = 0; testCase < Testop; testCase++) {
        int npairs;
        scanf("%d", &npairs);
 
        Pair *pairArr = (Pair *)malloc(npairs * sizeof(Pair));
        for (int i = 0; i < npairs; i++) {
            scanf("%d %d", &pairArr[i].one, &pairArr[i].two);
        }
 
        qsort(pairArr, npairs, sizeof(Pair), [](const void *a, const void *b) {
            Pair *pairA = (Pair *)a;
            Pair *pairB = (Pair *)b;
 
            if (pairA->one < pairB->one)
                return -1;
            else if (pairA->one > pairB->one)
                return 1;
            else {
                if (pairA->two > pairB->two)
                    return -1;
                else if (pairA->two < pairB->two)
                    return 1;
                else
                    return 0;
            }
        });
 
        long long result = 0;
        int current = 0, j = 0, remainder;
        for (int k = 0; k < npairs; k++) {
            remainder = 0;
            result += pairArr[k].two;
            current++;
            for (; j < npairs && pairArr[j].one <= current; j++, remainder++);
            if (k < j - 1) {
                k = j - 1;
                current = 0;
            }
            else
                current -= remainder;
        }
        printf("%lld\n", result);
        free(pairArr);
    }
 
    return 0;
}
