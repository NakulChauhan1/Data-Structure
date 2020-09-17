// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int beg = 1, end = n;
        int mid = beg  + ( end - beg )/2;
        
        int pos = n;
        while (end>=beg){
            
            mid = beg  + ( end - beg )/2;
            
            if ( isBadVersion(mid) == false ){                          //version is not bad
                beg = mid + 1;
            }
            else{
                pos = mid;
                end = mid-1;
            }
        }
        return pos;
        
        /*Brute Force:
        for ( int i = n; i>0; i-- ){
            if ( isBadVersion(i) == 0 ){
                return i+1;
            }
        }
        return 1;*/
    }
};