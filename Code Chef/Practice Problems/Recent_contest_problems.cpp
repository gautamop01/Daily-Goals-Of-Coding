// #include <iostream>
// using namespace std;

// int main() { int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//      cin>>a[i];
//     }
//     int cnt=1;
//     int START38;
//     int LTIME108;
//     int cnt2=1;
//     for(int i=0;i<n;i++){
//       if(a[i]==START38){
//           cnt++;
//       }
//       if(a[i]==LTIME108){
//           cnt2++;
//       }
//     }
//     cout<<cnt<<" "<<cnt2<<endl;
// }
// 	// your code goes here
// 	return 0;
// }


#include <iostream>
using namespace std;

int main() { int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
     cin>>str[i];
    }
    int cnt=0;
    // int START38;
    // int LTIME108;
    int cnt2=0;
    for(int i=0;i<n;i++){
      if(str[i]=="START38"){
          cnt++;
      }
      if(str[i]=="LTIME108"){
          cnt2++;
      }
    }
    cout<<cnt<<" "<<cnt2<<endl;
}
	// your code goes here
	return 0;
}
