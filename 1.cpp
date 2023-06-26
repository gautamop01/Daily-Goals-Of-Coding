#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<string> getInputStrings() {
    int testop;
    cin >> testop;

    vector<string> strings(testop);
    int i = 0;
    while (i < testop) {
        cin >> strings[i];
        i++;
    }

    return strings;
}

string processStrings(const vector<string>& strings) {
    unordered_map<string, int> stringOccurrences;
    string result = "";
    int i = strings.size() - 1;
    while (i >= 0) {
        string currentString = strings[i];
        if (stringOccurrences.find(currentString) == stringOccurrences.end()) {
            result += currentString[currentString.size() - 2];
            result += currentString[currentString.size() - 1];
            stringOccurrences[currentString]++;
        }
        i--;
    }

    return result;
}

int main() {
    vector<string> strings = getInputStrings();
    string result = processStrings(strings);
    cout << result;

    return 0;
}
