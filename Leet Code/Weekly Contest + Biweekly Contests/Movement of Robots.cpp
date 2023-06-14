

class Solution {
public:
    int mod = (1e9 + 7);
    int sumDistance(vector<int>& array, string s, int d) {
        int i = 0;
        while (i < s.size()) {
            if (s[i] == 'L') {
                array[i] -= d;
            } else if (s[i] == 'R') {
                array[i] += d;
            }
            i++;
        }

        sort(array.begin(), array.end());
        long long jod = 0;
        long long solution = 0;
        i = 0;
        while (i < array.size()) {
            solution += 1LL * array[i] * i - jod;
            solution %= mod;
            jod += array[i];
            jod %= mod;
            i++;
        }

        return solution % mod;
    }
};
