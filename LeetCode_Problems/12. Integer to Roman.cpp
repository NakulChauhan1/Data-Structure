//https://leetcode.com/problems/integer-to-roman/


//enum R{I=1, V=5, X=10, L=50, C=100, D=500, M=1000};

//can be solved using two array, one for storing number and other for storing roman equivalent of that number
class Solution {
public:
    string intToRoman(int num) {
        string roman;
        
        
        
        while(num)
        {
            if ( num == 5-1 )
            {
                roman += 'I';
                roman += 'V';
                num -= 4;
                continue;
            }
            else if ( num == 10-1 )
            {
                roman += 'I';
                roman += 'X';
                num -= 9;
                continue;
            }
            else if ( num == 40 || ( num>=41 && num<=49) )
            {
                roman += 'X';
                roman += 'L';
                num -= 40;
                continue;
            }
            else if ( num == 90 || ( num>=91 && num<=99))
            {
                roman += 'X';
                roman += 'C';
                num -= 90;
                continue;
            }
            else if ( num == 400 || ( num>=401 && num<=499) )
            {
                roman += 'C';
                roman += 'D';
                num -= 400;
                continue;
            }
            else if ( num == 900 || ( num>=901 && num<=999))
            {
                roman += 'C';
                roman += 'M';
                num -= 900;
                continue;
            }
            else if ( num < 5-1 )
            {
                roman += 'I';
                num--;
            }
            else if ( num < 10-1 )
            {
                roman += 'V';
                num -= 5;
                continue;
            }
            else if ( num < 50-10 )
            {
                roman += 'X';
                num -= 10;
                continue;
            }
            else if ( num < 100-10 )
            {
                roman += 'L';
                num -= 50;
                continue;
            }
            else if ( num < 500-100 )
            {
                roman += 'C';
                num -= 100;
                continue;
            }
            else if ( num < 1000-100 )
            {
                roman += 'D';
                num -= 500;
                continue;
            }
            else 
            {
                roman += 'M';
                num -= 1000;
                continue;
            }
        }
       // roman = roman.substr(1);            //to exclude 0th index ie to remove space
        return roman;
        
        
    }
};