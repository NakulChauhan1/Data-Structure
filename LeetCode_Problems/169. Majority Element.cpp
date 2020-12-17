//https://leetcode.com/problems/majority-element/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        /* Using bitmasking */
        int res=0, place=1, m=nums.size()/2;
        for ( int i=0; i<32; i++ )
        {
            int c = 0;
            for ( int j=0; j<nums.size(); j++ )
            {
                if ( (nums[j]>>i) & 1 ) 
                    c++;
            }
            if ( c > m )
                res += (place<<i);
        }
        return res;

        
         /* Using extra space:
        int n = nums.size();
        int m = n/2;
        
        map<int, int> temp;
    
        for ( int i = 0; i<n; i++ )
        {
            temp[nums[i]]++;
            if ( temp[nums[i]] > m )
                return nums[i];
        }
        return 0;  */      
    }
};