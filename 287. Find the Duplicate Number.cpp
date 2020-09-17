//can be done in less then O(n^2)
//Hashmap can be used to do this problem, but we have use O(1) space,
//so we cannot allocate extra space for HashMap but we can make already
//allocated space as Hashmap, ie we can use our original array as HashMap
//so for storing information of array, we are using that array only but as
//a HashMap. Keys of the HashMap can be act as index of array.
 //HashMap in Java is map (unordered map/ ordered map) in C++

 //https://www.youtube.com/watch?v=iiYc32-4ZJY

 //geeksforgeeks.org/duplicates-array-using-o1-extra-space-set-2/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //O(n) time, using same array for storing its counts, ie using same array as HashMap
        int n = nums.size();        
        for ( int i = 0; i<nums.size(); i++ ){
            if ( nums[i] > n-1 ){
                nums[ nums[i] % n ] = nums[ nums[i] % n ] + n;
                continue;
            }
            nums[nums[i]] = nums[nums[i]] + n; 
        }
        for ( int i = 0; i<nums.size(); i++ ){
            if ( nums[i]/n > 1 )
                return i;
        }        
        return 0;
        
        //O(n log n ) + n
        /*sort(nums.begin(), nums.end());
        for ( int i = 1; i<nums.size(); i++ ){
            if ( nums[i-1] == nums[i] )
                return nums[i];
        }
        return 0;*/
        
        //O(n^2)
        /*for ( int i = 0; i<nums.size(); i++ ){
            for ( int j = 0; j<nums.size(); j++ ){
                if ( i == j )   continue;
                if ( nums[i] == nums[j] ){
                    return nums[i];
                }
        }  
    }
        return 0;*/
    }
};