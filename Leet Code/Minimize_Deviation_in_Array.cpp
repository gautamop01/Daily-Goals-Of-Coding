class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq; // max heap to store even numbers
        
        int m = INT_MAX; // initialize minimum value to a large number
        
        // loop through the input vector and add each number to the heap
        // if it is even, add it as is and update the minimum value if needed
        // if it is odd, multiply by 2 and add to the heap, then update the minimum value
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                pq.push(nums[i]);
                m = min(m, nums[i]);
            }
            else{
                pq.push(nums[i] * 2);
                m = min(m, nums[i] * 2);
            }
        }
        
        int ans = INT_MAX; // initialize answer to a large number
        
        // continue until the heap is empty
        while(!pq.empty()){
            int top = pq.top(); // get the largest number in the heap
            pq.pop(); // remove it from the heap
            ans = min(ans, top - m); // update answer with the difference between the largest number and the minimum value
            
            // if the largest number is odd, we can't divide it by 2
            // so we break out of the loop
            if(top % 2 != 0){
                break;
            }
            
            // divide the largest number by 2, update the minimum value, and add it to the heap
            m = min(m, top / 2);
            pq.push(top / 2);
        }
        
        return ans; // return the minimum deviation
    }
};
