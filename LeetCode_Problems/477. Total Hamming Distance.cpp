//https://leetcode.com/problems/total-hamming-distance/submissions/


class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        
        /* Time Limit Exceeded:
        
        int result = 0;
        for ( int i = 0; i<nums.size(); i++ )
        {
            for ( int j = i; j<nums.size(); j++ )
            {
                if ( i == j )
                    continue;
                
                int res = nums[i] ^ nums[j];
                int c = 0;
                while (res != 0)
                {
                    if (res & 1)
                        c++;
                    res = res>>1;
                }
                result += c;
            }
            
        }
        return result;*/
        
        int n1 = 0, res = 0;
        
        for ( int i = 0; i<32; i++ )
        {
            for ( int j = 0; j<nums.size(); j++ )
            {
               if ( ( nums[j] >> i ) & 1 )
               {
                   n1++;
               }
            }
            
            res += (n1 * (nums.size() - n1));
            n1 = 0;
        }
        return res;

        //Time Complexity: O (32*n)
        
    }
};