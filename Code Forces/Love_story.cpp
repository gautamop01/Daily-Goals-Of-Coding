#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int testop;
    cin >> testop;
    while (testop--)
    {
        string input_str, target_str = "codeforces";
        int answer = 0;
        cin >> input_str;
        int i = 0;
        while (i < 10)
        {
            if (target_str[i] != input_str[i])
            {
                answer++;
            }
            i++;
        }
        cout << answer << endl;
    }
    return 0;
}
