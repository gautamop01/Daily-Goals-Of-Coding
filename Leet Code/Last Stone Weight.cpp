class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++)
            pq.push(stones[i]);
        while(pq.size()>1)
        {
            int x=pq.top();
            pq.pop();
            x=abs(pq.top()-x);
            pq.pop();
            if(x>0)
                pq.push(x);
        }
        if(!pq.empty())
            return pq.top();
        return 0;
    }
};
