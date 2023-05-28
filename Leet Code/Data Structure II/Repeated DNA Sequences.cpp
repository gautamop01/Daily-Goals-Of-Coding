#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        int size = 10;
        unordered_map<string, int> sequenceFreq;
        
        for (int i = 0; i <= n - size; i++) {
            string sequence = s.substr(i, size);
            sequenceFreq[sequence]++;
        }
        
        vector<string> repeatedSequences;
        for (auto it = sequenceFreq.begin(); it != sequenceFreq.end(); it++) {
            if (it->second > 1) {
                repeatedSequences.push_back(it->first);
            }
        }
        
        return repeatedSequences;
    }
};

/*
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        int size = 10;
        unordered_map<string, int> sequenceFreq; // Map to store frequency of DNA sequences
        
        // Iterate over substrings of length 10
        for (int i = 0; i <= n - size; i++) {
            string sequence = s.substr(i, size); // Extract the current DNA sequence
            sequenceFreq[sequence]++; // Increment its frequency in the map
        }
        
        vector<string> repeatedSequences; // Vector to store repeated DNA sequences
        // Iterate over the map and collect repeated sequences
        for (auto it = sequenceFreq.begin(); it != sequenceFreq.end(); it++) {
            if (it->second > 1) {
                repeatedSequences.push_back(it->first); // Add repeated sequence to the result
            }
        }
        
        return repeatedSequences; // Return the repeated DNA sequences
    }
};

*/
