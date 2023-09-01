#include "sorting_algorithms.h"

void selection_sort(vector<int>& nums){
    int n = nums.size();

    for(int i=0; i<n; i++){
        int minIndex = i;
        for(int j=i; j<n; j++){
            if(nums[j] < nums[minIndex])
            minIndex = j;
        }

        swap(nums[i], nums[minIndex]);
    }
}