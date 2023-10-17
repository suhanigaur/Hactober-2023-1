/*Find target indices after sorting array-(LEETCODE-2089)
Problem Statement-
You are given a 0-indexed integer array nums and a target element target.
A target index is an index i such that nums[i] == target.
Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.
 
Time Complexity-
O(nlogn)
Space Complexity-
O(n)
Approach-
1)First we sort the given vector in increasing order by using sort function(time complexity:O(nlogn)).
2)Then we apply a for loop in the sorted vector until the index is equal to vector size.
3)If at any index we find the target so we push that index in another vector named 'array' (which is initialised in the starting of the function).
4)Then finally we return the 'array' vector which stores the indices that contain target element.
Code-*/
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i;
        vector<int>array;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            if(nums[i]==target)
            array.push_back(i);
        }return array;
    }
};
