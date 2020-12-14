
//https://leetcode.com/problems/single-number-iii/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> aux ( nums.size(), 0);           //will store indexes (not value of array) of values                                                         which are more then one in array
        vector<int> res;
        
        for ( int i = 0; i<nums.size(); i++ )
        {
            for ( int j = i+1; j<nums.size(); j++ )
            {
                if ( nums[i] == nums[j] )
                {
                    aux[i] = 1;
                    aux[j] = 1;
                }
            }   
        }
        
        for ( int i = 0; i<nums.size(); i++ )
        {
            if ( aux[i] == 0 )
                res.push_back(nums[i]);
        }
        return res;
    }
};