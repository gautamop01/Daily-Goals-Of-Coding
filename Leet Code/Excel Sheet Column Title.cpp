// Long but diffirent logic 
class Solution {
public:
    string convertToTitle(int columnNumber) {
        if(columnNumber==0) return "";
        int a[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
        string b[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        string answer;
       
        for(int i=0;i<26;i++){
            if(columnNumber == a[i]){
                answer = b[i];
                break;
            } else if(columnNumber > 26){
                int pec = (columnNumber-1)/26;
                int rem=(columnNumber-1)%26;
                answer = convertToTitle(pec)+b[rem];
                break;
            }
        }
        return answer;
    }
};

