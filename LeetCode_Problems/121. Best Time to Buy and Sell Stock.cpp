class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if ( prices.size() == 0 )
            return 0;
        
        int i, j, p = 0;
        for ( i = 0; i<prices.size()-1; i++ ){
            for ( j = i+1; j<prices.size(); j++ ){
                if ( prices[j] > prices[i] )
                if ( prices[j] - prices[i] > p )
                    p = prices[j] - prices[i];
            }            
        }
        return p;
    }
};




/* this approach is beautiful in a way that we are not finding profit with every number as we were doing above, instead we are finding profit with one of the element min and other element is elements after this min.

So instead of reaching to each element and finding profit ie with two loops, we are traversing array only once and finding profit only when one of the element is min.
We are doing same thing as we were doing with two loops, only difference is we are finding profit for only only when one of the element is min. when one element is minimum then we can achieve same functionality in one pass only instead of two pass in through this way. 

public class Solution {
    public int maxProfit(int prices[]) {
        int minprice = Integer.MAX_VALUE;
        int maxprofit = 0;
        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }
}
*/