//https://www.geeksforgeeks.org/find-the-missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int actual = n*(n+1)/2;
        int sum = 0;
        for ( int i = 0; i<nums.size(); i++ ){
            sum += nums[i];
        }
        return actual - sum;
    }
};