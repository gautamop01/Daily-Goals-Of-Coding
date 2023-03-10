#include <iostream>
using namespace std;

int main() {
    // Declare variables for test cases, array size, and k
    int t,n,k;
    
    // Take input for number of test cases
    cin>>t;
    
    // Loop through each test case
    while(t--){
        // Take input for array size and k
        cin>>n>>k;
        
        // Declare an integer array of size n
        int arr[n];
        
        // Take input for the array elements
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        
        // Declare variables for tracking extra time and sum of elements
        int ex = 0, sum = 0;
        
        // Loop through each element of the array
        for(int i = 0; i < n; i++){
            // Add the current element to the sum
            sum += arr[i];
            
            // If the sum is less than k, set the extra time to the index of the next element
            if(k>sum){
                ex = i+1;
                break;
            }
            
            // If the sum is greater than or equal to k, subtract k from the sum
            sum -= k;
        }
        
        // If there is no extra time, output "YES", otherwise output "NO" and the extra time
        if(ex==0){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO "<<ex<<endl;
        }
    }
    
    return 0;
}
