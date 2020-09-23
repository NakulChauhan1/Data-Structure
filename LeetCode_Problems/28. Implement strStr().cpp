class Solution {
public:
    int strStr(string haystack, string needle) {
        
        
        if ( haystack == "" && needle == "" || haystack != "" && needle == "" )
            return 0;
        
        if ( haystack == "" && needle != "" )
            return -1;
        
        if ( haystack.size() < needle.size() )
            return -1;
        
        long long int i = 0, j = 0;
        
        long long  int pos = -1;
        for ( i = 0; i<haystack.size(); i++ ){
            long long  int t = i;
            for ( j = 0; j<needle.size(); j++ ){
                if ( haystack[i] != needle[j] )
                {
                    i = t;
                    pos = -1;
                    break;
                }
                else 
                {
                    if ( pos == -1 )
                        pos = i;
                    i++;
                    continue;
                }
            }
            if ( j == needle.size() ){
                return pos;
            }
        }
        return pos;
        
        
        /* Other solution
        
        class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();
        for (int i = 0; i <= m - n; i++) {
            int j = 0;
            for (; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == n) {
                return i;
            }
        }
        return -1;
    }
};*/
    }
};