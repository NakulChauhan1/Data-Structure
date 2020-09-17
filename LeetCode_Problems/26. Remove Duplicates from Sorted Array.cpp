/*
https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if ( nums.size() == 0 )
            return 0;
        if ( nums.size() == 1 )
            return 1;
        int j = 0;
        for ( int i = 1; i<nums.size(); i++ )
        {
            if ( nums[i-1] != nums[i] )
            {
                nums[j++] = nums[i-1];
            }
        }
        nums[j++] = nums[nums.size() - 1];
        
        nums.resize(j);
        return j;
    }
};