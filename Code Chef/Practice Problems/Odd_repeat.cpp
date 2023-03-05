/*
Problem
Chef has an array consisting of N+ K-1l integers. The array contains only the first N positive odd
numbers. Each number appears exactly once, except for one number which appears exactly K
times. The sum of integers in Chef's array Is equal to S.
For example, for N = 3, K = 2, the possible arrays could be [1, 1, 3, 5, |3, 1, 3, 5, 15, 3, 5, 1]. For
N = 1, K=3, there is only one possible array: [1, 1, 1].
Chef gives you three integers N, K and S and asks you to find the only element which appears K
times in his array.
It is guaranteed that for the given input, there exists a valid array consisting of N + K-1 elements
with a sum exactly equal to S.
Input Format
The first line of the input contains a single integer T denoting the number of test cases. The
description of T test cases follows.
The first and only line of each test case contains three space-separated integers N, K, S.
Output Format
For each test case, print a single line containing the integer which appearedK times in Chefs array.
*/

#include <iostream>
using namespace std;

int main() { int t;
cin>>t;
while(t--){
    int n,k,s;
    cin>>n>>k>>s;
    int removeOdd= (s-(n*n));
    int totalk=k-1;
    int ans=removeOdd/totalk;
    cout<<ans<<endl;
    
    
    
}
	// your code goes here
	return 0;
}
