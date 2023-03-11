/*
Problem
Read problems statements in Mandarin chinese, Russian and Vietnamese as well.
Chef has a sequence A containing N integers A1, A2, ..., AN.

Chef is playing a game with this sequence. In this game, he may perform the following operation any number of times (including zero): Choose an arbitrary pair of elements from the sequence such that their sum is even, delete these two elements from the sequence and insert their sum into the sequence instead.

The goal of the game is to minimise the number of elements in the sequence.

Help Chef to play the game and find the minimum possible size of the sequence at the end of the game!

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1, A2, ..., AN.
Output
For each test case, print a single line containing one integer — the minimum possible final size of the sequence.

Constraints
1 ≤ T ≤ 100
1 ≤ N ≤ 100
1 ≤ Ai ≤ 1,000 for each valid i
*/
#include <iostream>
using namespace std;

int main() { int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n]; int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
        if(a[i]%2!=0){
            cnt++;
        }
    }
        if(cnt%2!=0 && n>=2){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }

}
	// your code goes here
	return 0;
}
