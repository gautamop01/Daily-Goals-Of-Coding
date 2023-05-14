class Solution {
public:
    vector<int> circularGameLosers(int num_friends, int jump_size) {
        
        vector<int> losers(num_friends, 0); 
        
        int current_friend = 0; 
        int num_jumps = 0; 
 
        for (int i = 0; i < num_friends; i++) {
            // Find the next friend to jump to
            int next_friend = (current_friend + num_jumps * jump_size) % num_friends; 
   
            if (losers[next_friend] == 1) { 
                break;
            }

            losers[next_friend] = 1; 

            current_friend = next_friend; 
            num_jumps++; 
        }

        vector<int> remaining_friends; 
        for (int i = 0; i < num_friends; i++) {
            if (losers[i] == 0) {
                remaining_friends.push_back(i + 1); 
            }
        }
        
        return remaining_friends;
    }
};
