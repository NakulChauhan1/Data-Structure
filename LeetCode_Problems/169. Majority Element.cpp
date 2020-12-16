//https://leetcode.com/problems/majority-element/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int m = n/2;
        
        map<int, int> temp;
    
        for ( int i = 0; i<n; i++ )
        {
            temp[nums[i]]++;
            if ( temp[nums[i]] > m )
                return nums[i];
        }
        return 0;        
    }
};