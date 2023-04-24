#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int find_solution(vector<ll> arr1, vector<ll> arr2, ll target){
    int n = arr1.size();
    int solution = -1;
    int i = 0;
    while (i < n){
        if (arr1[i] <= target - i){
            if (solution == -1 || arr2[i] > arr2[solution - 1]){
                solution = i + 1;
            }
        }
        i++;
    }
    return solution;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testop = 1;
    cin >> testop;
    while (testop--)
    {
        ll n, t;
        cin >> n >> t;
        vector<ll> arr1(n), arr2(n);
        for (auto &x : arr1)
            cin >> x;
        for (auto &x : arr2)
            cin >> x;

        int solution = find_solution(arr1, arr2, t);
        cout << solution << endl;
    }
    return 0;
}
