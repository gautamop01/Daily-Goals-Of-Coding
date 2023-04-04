// class Solution {
// public:
//     vector<int> countBits(int num) {
//         vector<int> ret(num+1, 0);
//         for (int i = 1; i <= num; i++)
//             ret[i] = ret[i&(i-1)] + 1;
//         return ret;
//     }
// };

// tle -- coming 
// class Solution {

// public:

// vector<int> countBits(int num) {
//     vector<int> result(num+1);
//     result[0]=0;
//     int i;
//     for(i=1;i<=2;i++)
//         result[i]=1;
//     for(i=3;i<=num;i++){
//         result[i] = result[i/2]+result[i%2];
//     }
//     return result;
// }
// };



class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        ans.push_back(0);
        int temp;
       
        for(int i=1;i<=num;i++){
            if(i%2==0)
            {
                temp = ans[i/2];
            }
            else{
                temp = ans[i/2]+1;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

/*
0 0000 = 0
1 0001 = 1
2 0010 = 1
3 0011 = 2
4 0100 = 1
5 0101 = 2
6 0110 = 2
7 0111 = 3

Here we can observe that if the number is even then the number of ones is same as that when we right shift that number.
*/
