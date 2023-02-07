class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int idx=d.size()-1;
        while(idx>=0)
        {
            if(d[idx]==9)
            {
                d[idx]=0;
            }
            else
            {
                d[idx]+=1;
                return d;
            }
            idx--;
        }
        d.insert(d.begin(),1); // d.insert is for add 1 in begin 
        return d;  // return d is complete array
    }
};
