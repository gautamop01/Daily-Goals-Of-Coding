/*DOnaia Drumpr nas Spent the enure summer loDDying to 8auner votes Tor the upcomin8 Student
government election. At his University, there are a total of N students. Each student in the university
casts a vote. The size of student government is determined by the number of students that get at least
K votes.
Each person that receives at least K votes is given a post in the student government. The Dean noticed
that every year, there are a few students who vote for themselves. He decided to add a rule to
disqualify any such individuals who vote for themselves i.e they cannot be part of the student
government.
You are given an array A, where A; denotes the person who the i-th person voted for. Can you compute
the size of the student government?
Input
The first line of the input contains an integer T denoting the number of test cases. The description ofT
test cases follows.
For each test case, first line consists of two space separated integers N, K.
Second line consists of N space separated integers denoting the array A, where i-th integer denotes A
Output
For each test case, output a single line containing an integer corresponding to the size of the student*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n; cin>>n;
	   int a[n];
	   for(int i = 0; i<n; i++) cin>>a[i];
	   
        int C = 0;
        for(int i = 0; i<n; i++){
            if(a[i]>= 1 && a[i] <= 7){
                C = i;
            }
        }
        cout<<C+1<<endl;
	}
	return 0;
}
