//https://leetcode.com/problems/longest-common-prefix/submissions/

//https://www.geeksforgeeks.org/longest-common-prefix-using-word-by-word-matching/   (multiple solutions)
//https://www.geeksforgeeks.org/longest-common-prefix-using-binary-search/

//one way can be to sort all the strings and to find common prefic between first and last element
//other way is to check for all the strings character one by one, and simultanoeusly storing that character, (character by character matching)

// My solution, (my solution is word by word matching, later came to know)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if ( strs.size() == 0 )
            return "";
        
        string longest = strs[0];
        int i, j;
    
        for ( i = 1; i<strs.size(); i++ )
        {
            for ( j = 0; j<strs[i].size(); j++ )
            {
                if ( strs[i][j] == longest[j] )
                    continue;
                
                if ( j == 0 )
                    return "";
                
                longest.resize(j);                    //till now prefix
                break;
            }
            if ( j == strs[i].size() )
                longest = strs[i]; 
            
        }
        return longest;
    }
};