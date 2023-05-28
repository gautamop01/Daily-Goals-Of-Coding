class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;  // Create a 2D vector to store the grouped anagrams
        
        if(strs.size() == 0) return ans;  // If the input vector is empty, return an empty result
        
        map<string,vector<string>> dict;  // Create a map to store the sorted string as key and corresponding anagrams as values
        for(string s: strs)
        {
            string sorted = s;
            sort(sorted.begin(),sorted.end());  // Sort the current string to obtain a key for grouping
            dict[sorted].push_back(s);  // Add the current string to the vector of anagrams corresponding to its sorted form
        }
        map<string,vector<string>>::iterator o = dict.begin();  // Iterator to iterate over the map
        while(o != dict.end())
        {
            ans.push_back(o->second);  // Add the vector of anagrams to the result
            o++;
        }
    
        return ans;  // Return the grouped anagrams
    }
};
