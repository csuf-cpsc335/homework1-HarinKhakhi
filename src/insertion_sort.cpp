#include "sorting_algorithms.h"

void insertion_sort(vector<int>& nums){
    int n = nums.size();

    // iterate through all elements, and put them into its correct position
    for(int i=0; i<n; i++){
        int current = nums[i];
        int prev_ind = i-1;
        
        while(prev_ind >= 0 && nums[prev_ind] > current){
            nums[prev_ind+1] = nums[prev_ind];
            prev_ind--;
        }

        nums[prev_ind+1] = current;
    }
}