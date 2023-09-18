//        --------------------------------------------------_Not Good approach ----------------------------------------
// class Solution
// {
//     public:
//     //Function to find position of first set bit in the given number.
//     unsigned int getFirstSetBit(int n)
//     {
//         string ans = "";
//         int t;
        
//         while(n>0){
        
//         if(n%2==0){
//             ans = ans + "0";
//         }
//         else{
//             ans = ans + "1";
//         }
//         n = n/2;
//     }
//     int s = ans.size();
//     int te=0;
//     for(int i=0;i<s;i++){
//         if(ans[i]=='0' || ans[i]=='1'){
//             for(int j=i+1;j<s;j++){
//                 if(ans[j]=='1' && ans[i]=='0'){
//                     te = j+1;
//                     break;
//                 }
//                 else if(ans[j]=='0' && ans[i]=='1'){
//                     te = j+1;
//                     break;
//                 }
//                 // else{
//                 //     te=0;
//                 //     break;
//                 // }
//             }
//         }
//         break;
//         // else if(s[i]==1){
//         //     for(int j=0;j<s;j++){
//         //         if(s[j]==0){
//         //             te = j+1;
//         //             break;
//         //         }
//         //     }
//         // }
//     }
    
//     // reverse(ans.begin(),ans.end());
//     // int a = stoi(ans);
    
//     return te;
    
        
//     }
// };


// --------------------------- GOOD APPROACH -----------------

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        unsigned int pos = 1;
        while(n>0){
            if(n & 1){
                return pos;
            }
            n >>= 1;
            pos++;
        }
        return 0;
    }
};
