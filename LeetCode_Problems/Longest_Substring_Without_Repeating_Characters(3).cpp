
/*
    https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int  l = 0;
        if ( s == " " )
            return 1;
        //cout<<s.size()<<endl;
        for ( int i = 0; i<s.size(); i++ )
            for ( int j = 1; j<=s.size()-i; j++ )
            {
                int flag[257] = {0};            //0 - 255 index for 26 characters, and 256th                                                   index for space ( )
                string sub = s.substr(i,j);
                
                //cout<<sub<<" "<<sub.size()<<endl;
                int k;
                for ( k = 0; k<sub.size(); k++ )
                {
                    if ( sub[k] - 'a' == -65 )          //for space ( ), 32 - 97 = -65
                    {
                        flag[256]++;
                        if ( flag[256] >= 2 )
                            break;
                    }
                    else                        
                    {
                        flag[sub[k] - 'a'] ++;
                        if ( flag[sub[k] - 'a'] >= 2 )
                            break;
                    }
                }
                if ( k == sub.size() )
                {
                    if ( sub.size() > l )
                        l = sub.size();
                    //cout<<l<<endl;
                }
            }
        return l;
    }
};