//https://leetcode.com/problems/hamming-distance/
class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int res = x ^ y;
        int c = 0;
        while (res != 0)
        {
            if (res & 1)
                 c++;
            res = res>>1;
        }

        return c;
        
    }
};