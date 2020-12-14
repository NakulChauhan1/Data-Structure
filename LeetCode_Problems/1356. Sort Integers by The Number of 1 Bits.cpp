//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/

class Solution {
public:
    
    int setbits ( int x )
    {
        int c = 0;
        while (x)
        {
            c += (x & 1);
            x >>= 1;
        }
        return c;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        for ( int i = 0; i<arr.size()-1; i++ )
        {
            for ( int j = 0; j<arr.size()-i-1; j++ )
            {   
                int a = setbits ( arr[j] );
                int b = setbits ( arr[j+1] );
                if ( a > b )
                {
                    int t = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = t;
                }
                else if ( a == b )
                {
                    if ( arr[j] > arr[j+1] )
                    {
                        int t = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = t;
                    }
                }
            }   
        }
        return arr;
        
    }
};