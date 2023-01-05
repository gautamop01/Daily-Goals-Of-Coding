/*
Find a pair with the given sum in an array ->

Given an unsorted integer array, find a pair with the given sum in it.
For Example -

Input : 
nums = [8, 7, 2, 5, 3, 2]
target = 10

Outuput :
Pair Found (8,2)
or 
Pair Found (7,3)

Second Example ------------

Input :
nums = [5, 2, 6, 8, 1, 9]
target = 12

Output :
Pair not found

*/

/* SOULUTION USING BRUTE FORCE -
A naive solution is to consider every pair in the given array and return if the desired sum is found.
*/
#include <iostream>
#include <bits/stdc++.h>

void findPair(int nums[], int n, int target)
{
    for(int i;i<n-1;i++){ // Consider each element except the last
        for(int j=i+1; j<n; j++){ // start from the i'th element until the last element 
            if (nums[i] + nums[j] == target) // If the desired sum is found print it 
            {
                printf("Pair found (%d, %d)\n", nums[i], nums[j]);
                return;
            }
        }
    }
    printf("Pair not found"); // We reach here if the pair is not found
}
int main(void){
    int nums[] = {8,7,2,5,3,1};
    int target = 10;
    int n = sizeof(nums)/sizeof(nums[0]);
    findPair(nums, n, target);
    return 0;
}

// I tried to solve this like ask input but it is not give output --->
// int main(void){
//     int n,i;
//     cin>>n;
//     int *nums;
//     for(i=0; i<n; i++){
//         cin>>nums[i];
//     }
//     int target;
//     cout << "What is Target ?"<< endl;
//     cin >> target ;
//     n = sizeof(nums)/sizeof(nums[0]);
//     findPair(nums, n, target);
//     return 0;
// }