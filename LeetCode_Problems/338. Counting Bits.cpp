//https://leetcode.com/problems/counting-bits/


//https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/

class Solution {
public:
    vector<int> countBits(int num) {
    
        
        // Using Dynamic Programming:
        vector<int> mem;
        if ( num == 0 ){
            mem.push_back(0);
            return mem;
        }
    
        mem.push_back (0);
        mem.push_back (1);
        
        
        for ( int i=2; i<=num; i++ )
        {
            if ( i&1 )
            {
                mem.push_back(mem[i>>1]+1);
            } else{
                mem.push_back(mem[i>>1]);
            }
        }
        
        return mem;
        
        /*
        //Naive Approach: Complexity: O(n * 32)
        vector<int> res;
        res.push_back(0);           //number of set bits in 0
        
        for ( int i=1; i<=num; i++ )
        {
            int c = 0;
            int j = i;
            while (j)
            {
                c += j&1;
                j >>= 1;
            }
            res.push_back(c);
        }
        return res;*/
        
    }
};