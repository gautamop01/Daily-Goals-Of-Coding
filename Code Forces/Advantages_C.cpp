// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         int ans1,ans2;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         int largest = a[0];
//         int second_largest = a[0];

//         for(int i=1;i<n;i++){
//             if(a[i] > largest){
//                 second_largest = largest;
//                 largest = a[i];
//             }
//             else if(a[i] > second_largest && a[i] != largest){
//                 second_largest=a[i];        
//             }
//         }

//         for(int i=0;i<n;i++){
//             if(a[i]==largest){
//                 cout << a[i]-second_largest << " ";
//             }else{
//                 cout<< a[i]-largest << " ";
//             }
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> b(a);
        sort(b.begin(),b.end());


        for(int i=0;i<n;i++){
            if(a[i]==b[n-1]){
                cout << a[i]-b[n-2] << " ";
            }else{
                cout<< a[i]-b[n-1]<< " ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}

