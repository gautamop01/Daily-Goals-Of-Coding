#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findFirstMismatch(int arr1[], int arr2[], int n) {
    int i = 0;
    while (i < n && arr1[i] == arr2[i]) {
        i++;
    }
    return i == n ? -1 : i;
}

int findlastone_toMismatch(int arr1[], int arr2[], int n) {
    int i = n - 1;
    while (i >= 0 && arr1[i] == arr2[i]) {
        i--;
    }
    return i;
}

pair<int, int> findSubarray(int arr1[], int arr2[], int n) {
    int first_to = findFirstMismatch(arr1, arr2, n);
    int lastone_to = findlastone_toMismatch(arr1, arr2, n);
    if (first_to == -1 || lastone_to == -1) {
        return {1, n};
    }
    int mn = INT_MAX, mx = -1;
    for (int i = first_to; i <= lastone_to; i++) {
        mx = max(mx, arr1[i]);
        mn = min(mn, arr1[i]);
    }
    if (first_to > 0) {
        int i = first_to - 1;
        while (i >= 0 && arr1[i] <= mn) {
            first_to--;
            mn = arr1[i];
            i--;
        }
    }
    if (lastone_to < n - 1) {
        int i = lastone_to + 1;
        while (i < n && arr1[i] >= mx) {
            lastone_to++;
            mx = arr1[i];
            i++;
        }
    }
    return {first_to + 1, lastone_to + 1};
}

int main() {
    int testop;
    cin >> testop;
    while (testop--) {
        int n;
        cin >> n;
        int arr1[n], arr2[n];
        int i = 0;
        while (i < n) {
            cin >> arr1[i];
            i++;
        }
        i = 0;
        while (i < n) {
            cin >> arr2[i];
            i++;
        }
        pair<int, int> subarray = findSubarray(arr1, arr2, n);
        cout << subarray.first << ' ' << subarray.second << '\n';
    }
    return 0;
}
