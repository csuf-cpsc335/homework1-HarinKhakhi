#include <iostream>
#include "sorting_algorithms.h"

using namespace std;

/*  
partition function will partition a array in two pieces
by choosing one element as pivot.
left to the pivot element will be all smaller elements than pivot
right to the pivot element will be all bigger elements than pivot
e.g.
    5 4 6 8    10 15 11
          ^
          pivot
@Parameters:
    nums: a reference to the vector of numbers
    low: start point of array
    high: end point of array

@Returns:
    the index of pivot element.
*/
int partition(vector<int>& nums, int low, int high){
    // TODO
    return 0;
}

/*
quick_sort function will sort the array in-place in the given bounds
@Parameters:
    nums: a reference to the vector of integers to be sorted
    low: start index of the array to be sorted
    high: end index of the array to be sorted
@Returns:
    void. 
    the algorithm sorts the vector in-place. so, it does not return anything.
*/
void _quick_sort(vector<int>& nums, int low, int high){
    // TODO
}

/*
quick_sort function sorts the array in-place
@Parameters:
    nums: a reference to the vector of integers to be sorted
@Returns:
    void.
    the algorithm sorts the vector in-place. so, it does not return anything. 
*/
void quick_sort(vector<int>& nums){
    _quick_sort(nums, 0, nums.size()-1);
}