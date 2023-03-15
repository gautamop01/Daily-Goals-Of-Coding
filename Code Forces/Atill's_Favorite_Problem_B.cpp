// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         char largest = s[0];
//         for(int i=1;i<n;i++){
//             if(s[i] > largest){
//                 largest = s[i];
//             }
//         }
//         if(largest=='z'){
//             cout<<26<<endl;
//         }
//         else if(largest=='y'){
//             cout<<25<<endl;
//         }
//         else if(largest=='x'){
//             cout<<24<<endl;
//         }
//         else if(largest=='w'){
//             cout<<23<<endl;
//         }
//         else if(largest=='v'){
//             cout<<22<<endl;
//         }
//         else if(largest=='u'){
//             cout<<21<<endl;
//         }
//         else if(largest=='t'){
//             cout<<20<<endl;
//         }
//         else if(largest=='s'){
//             cout<<19<<endl;
//         }
//         else if(largest=='r'){
//             cout<<18<<endl;
//         }
//         else if(largest=='q'){
//             cout<<17<<endl;
//         }
//         else if(largest=='p'){
//             cout<<16<<endl;
//         }
//         else if(largest=='o'){
//             cout<<15<<endl;
//         }
//         else if(largest=='n'){
//             cout<<14<<endl;
//         }
//         else if(largest=='m'){
//             cout<<13<<endl;
//         }
//         else if(largest=='l'){
//             cout<<12<<endl;
//         }
//         else if(largest=='k'){
//             cout<<11<<endl;
//         }
//         else if(largest=='j'){
//             cout<<10<<endl;
//         }
//         else if(largest=='i'){
//             cout<<9<<endl;
//         }
//         else if(largest=='h'){
//             cout<<8<<endl;
//         }
//         else if(largest=='g'){
//             cout<<7<<endl;
//         }
//         else if(largest=='f'){
//             cout<<6<<endl;
//         }
//         else if(largest=='e'){
//             cout<<5<<endl;
//         }
//         else if(largest=='d'){
//             cout<<4<<endl;
//         }
//         else if(largest=='c'){
//             cout<<3<<endl;
//         }
//         else if(largest=='b'){
//             cout<<2<<endl;
//         }
//         else if(largest=='a'){
//             cout<<1<<endl;
//         }

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
        string s;
        cin>>s;
        char largest = s[0];
        for(int i=1;i<n;i++){
            if(s[i] > largest){
                largest = s[i];
            }
        }
        cout << (largest - 'a' + 1) << endl;
    }
    return 0;
}
