// #include string;
class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int ans=0;
        for(auto k:derived){
            anss=anss^k;
        }
        if(ans==0) return true;
        return false;
    }
};
