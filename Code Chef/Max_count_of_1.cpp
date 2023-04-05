// Starters 84 Division 2 (Rated

#include <iostream>
using namespace std;

int main() {
    int testop; 
    cin >> testop;
    while(testop--) {
        int str_len; 
        cin >> str_len;
        string input_str; 
        cin >> input_str;
        
        int cnt_zeros = 0, cnt_ones = 1;
        char prev_char_1 = '1', prev_char_0 = '0';
        int i = 1;
        while(i < str_len) {
            if(prev_char_1 != input_str[i-1]){
                prev_char_1 = '1'; 
                cnt_ones++;
            }
            else prev_char_1 = '0';
            
            if(prev_char_0 != input_str[i-1]){
                prev_char_0 = '1';
                cnt_zeros++;
            }
            else prev_char_0 = '0';
            
            i++;
        }
        int max_cnt = max(cnt_zeros, cnt_ones);
        cout << max_cnt << endl;
    }
    return 0;
}
