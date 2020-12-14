//https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/
//can be done with constant space

class Solution {
public:
    bool isValid(string s) {
        
        if ( s.size() == 1 || s.size() == 0 )
            return 0;
        
        stack<char> temp;
        int i, j = 0;
        for ( i = 0; i<s.size(); i++ )
        {
            if ( s[i] == '(' || s[i] == '{' || s[i] == '[' )
            {
                temp.push(s[i]);
                //cout<<temp.top()<<endl;
            }
            else if ( s[i] == ')' || s[i] == '}' || s[i] == ']' )
            {
                if ( temp.empty() == 1 )
                        return 0;
                
                if ( ( s[i] == ')' && temp.top() == '(' ) || ( s[i] == '}' && temp.top() == '{' ) || ( s[i] == ']' && temp.top() == '[' ) )
                {
                    temp.pop();
                }
                else
                {
                    return 0;
                }
            }
        }
    
        if ( temp.empty() == 0 )
            return 0;
        return 1;    
        
        
    }
};