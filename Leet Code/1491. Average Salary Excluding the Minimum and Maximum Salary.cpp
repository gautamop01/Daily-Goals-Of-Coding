class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        // sort(salary.begin(),salary.end());
        double sum=0; 
        double max = salary[0];
        double min = salary[0];
        for(int i=0;i<n;i++){
            sum+=salary[i];
            if(salary[i]>max){
                max = salary[i];
            }
            if(salary[i]<min){
                min = salary[i];
            }
        }
        double ans = sum-(max+min);
        n = n-2;
        return ans/n;

        
    }
};
