#include <iostream>
#include <string>
#include <map>

class Solution {
public:
    int minimizedStringLength(string s) {
        map<char, int> map;
        for (int i = 0; i < s.length(); i++)
            map[s[i]] = 1;
        return map.size();
    }
};
