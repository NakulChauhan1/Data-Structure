class Solution {
public:
    
    //all power of 2 has only 1 set bit
        
    
    
    /* Using recursion:
    int m4 ( long long int res, int n )
    {
        if ( res == n || n == 1 )
            return 1;
        
        if ( res > n  )
            return 0;
        
         return m4 ( res*4, n);  
        
    }
    
    bool isPowerOfFour(int n) {
        
        long long int res = 1;
        return m4 ( res*4, n );
        */
        
    /* Using loop:
        bool isPowerOfFour(int n) {
    
        if ( n == 1 )
            return true;
        
        long long int res = 1;
        for ( int i=0;; i++ )
        {
            res *= 4;
            if ( res > n )
                break;
            else if ( res == n )
                return true;
        }
        return false;
        */
        
    }
};