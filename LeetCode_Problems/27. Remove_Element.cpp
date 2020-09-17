// https://leetcode.com/problems/remove-element/submissions/

/* Good submission:

class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int n=nums.size(),i,j=0,k=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                swap(nums[k],nums[i]);
                k++;
            }
        }
        return k;
    }
};
*/
void removee(vector<int>& nums, int val)
{
    for ( int i = 0; i<nums.size(); i++ )
        {
            if ( nums[i] == val )
            {
                if ( i == nums.size()-1 )
                {
                    nums.resize(nums.size()-1);
                    continue;
                }
                for ( int j = i; j<nums.size()-1; j++ )
                {
                    nums[j] = nums[j+1];            //shifting one by one
                }
                nums.resize(nums.size()-1);
                break;
            }
        }
}


//My submission:

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int t = 0;
        for ( int i = 0; i<nums.size(); i++ )
        {
            if ( nums[i] == val )
                t++;
        }
        
        while(t--)
            removee(nums, val);
        
        /* Here i was thinking to delete all elements at one go (ie with one loop)

        for ( int i = 0; i<nums.size(); i++ )
        {
            if ( nums[i] == val )
            {
                if ( i == nums.size()-1 )
                {
                    nums.resize(nums.size()-1);
                    continue;
                }
                for ( int j = i; j<nums.size()-1; j++ )
                {
                    
                    if ( nums[j] == nums[j+1])
                    {
                        nums[j] = nums[j+2];
                        // flag = 1;
                    }
                    else
                        nums[j] = nums[j+1];
                }
                nums.resize(nums.size()-1);
            }
            //if ( flag == 1 )    
                i--;///
        }*/
        
        return nums.size();
    }
};