//https://www.geeksforgeeks.org/adding-one-to-number-represented-as-array-of-digits/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        //cout<<digits[n-1]<<endl;
        int c = 0;
        for ( int i = n-1; i>=0; i-- ){
            int s;
            if ( i == n-1 )
                s = digits[i]+1+c;
            else
                s = digits[i]+c;
            digits[i] = s%10;
            
            if ( s <= 9 ){
                break;
            }
            c = 1;
            
            if ( i == 0 && n == 1 ){
                digits.push_back(c);
                digits[1] = digits[0];
                digits[0] = 1;
                break;
            }
            if ( i == 0 ){
                digits.push_back(c);
                for ( int ii = n-1+1; ii>0; ii-- ){
    
                    digits[ii] = digits[ii-1];
                }
                digits[0] = 1;
            }
        }
        return digits;
    }
};