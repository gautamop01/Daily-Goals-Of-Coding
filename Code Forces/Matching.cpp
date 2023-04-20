#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testop = 1;
    cin >> testop;
    
    int count = 1;
    while (count <= testop)
    {
        string str;
        cin >> str;

        if (str[0] == '0')
        {
            cout << 0 << endl;
            count++;
            continue;
        }

        int question_marks = std::count(str.begin(), str.end(), '?');
        int result = 1;

        if (str[0] == '?')
        {
            result *= 9;
            question_marks--;
        }

        result *= pow(10, question_marks);
        cout << result << endl;

        count++;
    }

    return 0;
}
