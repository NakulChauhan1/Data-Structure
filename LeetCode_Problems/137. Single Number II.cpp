//https://leetcode.com/problems/single-number-ii/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        
        /* using count set bit method 
        
        long long int pos = 1;
        int res = 0;
        for ( int i = 0; i<32; i++ )
        {
            int c = 0;
            for ( int j = 0; j<nums.size(); j++ )
            {
                c += ( nums[j] >> i) & 1;                   //counting number of set bits at i th place
            } 
            if ( c%3 != 0 )
                res += pos;
            pos <<= 1;                                 //weight of i th bit, it is same as pos = pos * 2
        }
        
        return res;
        
        */
        
        /* Using hashing:
        map<int, int> aux;
        
        for ( int i = 0; i<nums.size(); i++ )
        {
            aux[nums[i]]++;                         //default value of map is 0     
        }
        
        for ( int i = 0; i<nums.size(); i++ )
        {
            if ( aux[nums[i]] == 1 )
            {
                return nums[i];
            }
        }
        return 0;
        */
        
        /* Using extra space:
        int n = nums.size();
        
        vector<bool> aux ( n, 0 );                  //will store indexes (not value of array) of values                                                         which are more then one in array
        
        for ( int i = 0; i<nums.size(); i++ )
        {
            if ( aux[i] == 1 )
                continue;
            
            for ( int j = i+1; j<nums.size(); j++ )
            {
                if ( nums[i] == nums[j] )
                {
                    aux[j] = 1;
                    aux[i] = 1;
                }
            }    
        }
        
        for ( int i = 0; i<nums.size(); i++ )
        {
            if ( aux[i] == 0 )
            {
                return nums[i];
            }
        }
        return 0;*/
        
        /* Using sorting:
        sort ( nums.begin(), nums.end() );
        
        int i;
        for ( i = 0; i<nums.size(); i = i+3 )
        {
            if ( i >= nums.size() )
                return 0;
            
            if ( i+1 >= nums.size() )
                return nums[i];
            
            if ( i+2 >= nums.size() )
                return nums[i];
            
            if( nums[i] != nums[i+1] && nums[i] != nums[i+2] )
                break;
        }
       return nums[i];*/
    }
};