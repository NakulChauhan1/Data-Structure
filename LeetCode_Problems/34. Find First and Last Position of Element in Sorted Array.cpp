//see this for better solution
//https://www.geeksforgeeks.org/count-number-of-occurrences-or-frequency-in-a-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> result;
        int n = nums.size();
        int beg = 0;
        int end = n-1;
        
        while( beg<=end ){
            int mid = beg + (end - beg )/2;
            if ( nums[mid] == target ){
                result.push_back(mid);
                if ( mid-1 >=0 && nums[mid-1] == target ){
                    for ( int i = mid-1; i>=0; i-- )
                    {
                        if ( nums[i] == target ){
                            result.push_back(i);
                        }
                        else break;
                    }
                }
                 if ( mid+1 <n && nums[mid+1] == target ){
                    for ( int i = mid+1; i<n; i++ )
                    {
                        if ( nums[i] == target )
                            result.push_back(i);
                        else break;
                    }
                }
                if ( result.size() == 1 )
                    result.push_back(result[0]);
                break;
            }
            else if ( nums[mid] < target )
                beg = mid+1;
            else
                end = mid-1;
        }
        if ( beg>end )
        {
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        
        sort(result.begin(), result.end());
        int a = result[0];
        int b = result[result.size()-1];
        result.clear();
        result.push_back(a);
        result.push_back(b);
        return result;
        
    }
};