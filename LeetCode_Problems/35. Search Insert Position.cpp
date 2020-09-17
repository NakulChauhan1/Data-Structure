//https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for ( i = 0; i<nums.size(); i++ ){
            if ( nums[i] == target ){
                return i;
            }
            if ( nums[i] > target )
                return i;
        }
        return i;
        
    }
};