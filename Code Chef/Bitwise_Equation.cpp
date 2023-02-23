// Problem -
// Given an integer N, find four positive distinct integers a, b, cand dsuch that:
// 1sa,b, c, d< 10
// (a & b) |c) ed=N
// Here &, , and e represent bitwise AND, OR and xOR, respectively.
// if there are multiple answers, print any of them. If no answer exists, print -1.
// Input Format
// The first line of input will contain a single integer 1, denoting the number of test cases.
// Each test case consists of one line of input, contalning a single integer N.
// Output Format
// For each test case, output -1 if there is no way to find four distinct integers to satisfy the equation.
// Otherwise, print on a new line any four space-separated integers a, b, cand dthat satisfy the conditions.



#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() {
    int testOp;
    cin >> testOp;

    for (int i = 0; i < testOp; i++) {
        ll num;
        cin >> num;

        if (num == 0) {
            cout << "1 3 4 5\n";
        } else {
            ll p = 8589934592;
            vector<ll> ans = {1, 2, p, p + num};
            for (auto x : ans) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
