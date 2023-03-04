/*
DOnaia Drumpr nas Spent the enure summer loDDying to 8auner votes Tor the upcomin8 Student
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


*/
  
  #include <iostream>
using namespace std;

int main() {
    int T, N, K, i, j, cnt, k;
    cin >> T;
    while(T--){
        cnt = 0;
        cin >> N >> K;
        int A[N], C[N];
        for(j = 0; j < N; j++) {
            C[j] = 0;
        }
        for(j = 0; j < N; j++) {
            cin >> A[j];
        }
        for(j = 0; j < N; j++) {
            k = A[j] - 1;
            C[k] = C[k] + 1;
        }
        for(j = 0; j < N; j++) {
            if(C[j] >= K && A[j] != j+1) {
                cnt = cnt + 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
