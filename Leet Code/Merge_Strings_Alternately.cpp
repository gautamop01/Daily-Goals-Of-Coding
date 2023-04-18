#include <bits/stdc++.h>
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    
	int i=0;
    int j=0;
    int s1 = word1.size();
    int s2 = word2.size();
    string res="";
    
    for( int k=0 ; k<s1+s2 ; ++k )
    {
        if( i < s1 )
        {
            res+=word1[i];
            ++i;
        }
        
        if( j< s2 )
        {
            res+=word2[j];
            ++j;
        }    
    }
    
    return res;
}
};
