
class Solution {
public:
    getNumericValue(string s){
        bool allDigits = true;
        for(char c : s){
            if(!isdigit(c)){
                allDigits = false;
                break;
            }
        }
        if (allDigits){
            return stoi(s);
        } else{
            return s.length();
        }
    }
    
    int maximumValue(vector<string>& strs) {
        int maxval = 0;
        for(const string& s : strs){
            int value = getNumericValue(s);
                maxval = max(maxval, value);
        }
        return maxval;
    }
};
