#include <iostream>
using namespace std;

int main()
{
    int t;    // variable to store the number of test cases
    cin >> t; // takes input of the number of test cases
    while (t--)
    {              // loop through all the test cases
        int n;     // variable to store the length of the string
        cin >> n;  // takes input of the length of the string
        string s;  // string to store the input string
        cin >> s;  // takes input of the string
        int c = 0; // variable to store the count of occurrences of "01" substring
        for (int i = 0; i < n - 2; i++)
        { // loop through the string till second last character
            if (s.at(i) == '0' && s.at(i + 1) == '1')
            {        // checks if the current character is '0' and next character is '1'
                c++; // increments the count of occurrences of "01" substring
            }
        }
        if (s.at(0) == '1')
        {        // checks if the first character is '1'
            c++; // increments the count if the first character is '1'
        }
        if (s.at(n - 2) == '0')
        {        // checks if the second last character is '0'
            c++; // increments the count if the second last character is '0'
        }
        cout << c << endl; // prints the count of occurrences of "01" substring in the given string s
    }
    return 0; // returns 0 to indicate successful execution of the program
}
