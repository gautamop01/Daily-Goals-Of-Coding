#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20005;

int n, a[MAXN], b[MAXN], c[MAXN], d[MAXN], e[MAXN];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        b[i] = c[i] = d[i] = e[i] = a[i];
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &b[i]);
        if (b[i] != a[i]) {
            for (int j = i + 1; j <= n; j++) {
                if (a[j] == b[i]) {
                    swap(a[i], a[j]);
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &c[i]);
        if (c[i] != a[i]) {
            for (int j = i + 1; j <= n; j++) {
                if (a[j] == c[i]) {
                    swap(a[i], a[j]);
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &d[i]);
        if (d[i] != a[i]) {
            for (int j = i + 1; j <= n; j++) {
                if (a[j] == d[i]) {
                    swap(a[i], a[j]);
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &e[i]);
        if (e[i] != a[i]) {
            for (int j = i + 1; j <= n; j++) {
                if (a[j] == e[i]) {
                    swap(a[i], a[j]);
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
