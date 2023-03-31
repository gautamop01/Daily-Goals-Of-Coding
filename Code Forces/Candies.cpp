#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num_tests;
    cin >> num_tests;

    for (int i = 0; i < num_tests; i++) {
        int target_candies;
        cin >> target_candies;

        if (target_candies % 2 == 0) {
            cout << -1 << endl;
        } else {
            int remaining_spells = 40;
            vector<int> spell_sequence;

            for (; target_candies != 1 && remaining_spells > 0; remaining_spells--) {
                if (((target_candies + 1) / 2) % 2 == 1) {
                    target_candies = (target_candies + 1) / 2;
                    spell_sequence.push_back(1);
                } else {
                    target_candies = (target_candies - 1) / 2;
                    spell_sequence.push_back(2);
                }
            }

            if (target_candies == 1) {
                cout << spell_sequence.size() << endl;
                reverse(spell_sequence.begin(), spell_sequence.end());
                for (auto spell : spell_sequence) {
                    cout << spell << " ";
                }
                cout << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
