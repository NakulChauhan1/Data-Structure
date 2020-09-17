https://www.geeksforgeeks.org/minimum-index-sum-common-elements-two-lists/#:~:text=Using%20Hash%3A&text=Find%20out%20the%20sum%20of,list2%20in%20the%20resultant%20list.

//could be done with map.

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        vector<string> result;
        int sum = INT_MAX;
        for ( int i = 0; i<list1.size(); i++ ){
            for ( int j = 0; j<list2.size(); j++ ){
                if ( list1[i] == list2[j] ){
                    if ( i+j < sum ){
                        sum = i+j;
                        result.clear();
                        result.push_back( list1[i] );
                        }
                    else if ( i + j == sum )
                        result.push_back( list1[i] );
                    }
                }
            }
        return result;
        }
};