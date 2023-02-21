/*
Problem
Read problems statements in Mandarin Chinese and Russian.
Chef is judging a game called "Broken telephone". There are total N players taking part in the game. They are all sitting in a line. In the start of the game, first player is given a secret message written on a sheet of paper. Then they keep sending the message by whispering it to the player sitting immediate right to one and so on until it reaches the last person.

Finally, the message received by the last player is compared with the message said by first player. If these messages aren't equal, there is someone who has misheard the message or whispered it wrongly to the next player. If messages is equal, then the players win and receive a tasty chocolate.

Note that first player receives the message on a sheet of paper, thus he cannot mishear it.

As Chef wants to be sure that every player has fulfilled his/ her role in the game, so he asks everyone to state their received messages after the end of the game. You are given an array A of N integers denoting messages received by each person.

Please help Chef to find the number of players that could mishear the message or whisper it wrongly.

Input
The first line of the input contains an integer T denoting the number of test cases.
The first line of each test case contains a single integer N denoting the number of players
The second line contains N space-separated integers A1, A2, ..., AN denoting the messages of players.
Output
For each test case, output a single line containing an integer corresponding to the number of players that could mishear the message or whisper it wrongly.
Constraints and Subtasks
1 ≤ T ≤ 5
1 ≤ Ai ≤ 109
Subtask 1: 40 points

2 ≤ N ≤ 103
Subtask 2: 60 points

2 ≤ N ≤ 105
*/

#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(i>0 && i<n-1){
	            if(a[i] != a[i-1] || a[i] != a[i+1]){
	                count++;
	            }
	        }
	    }
	    
	    if(a[n-1] != a[n-2]){
	        count++;
	    }
	    if(a[0]!=a[1]){
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
