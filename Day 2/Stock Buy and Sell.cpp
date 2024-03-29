/*
  Description:
      Say you have an array for which the ith element is the price of a given stock on day i.
      If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), 
      design an algorithm to find the maximum profit.

      Note that you cannot sell a stock before you buy one.

  Example 1:
      Input: [7,1,5,3,6,4]
      Output: 5
      Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
      Not 7-1 = 6, as selling price needs to be larger than buying price.
  
  Example 2:
      Input: [7,6,4,3,1]
      Output: 0
      Explanation: In this case, no transaction is done, i.e. max profit = 0.

*/

// CODE

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(!n) return 0;
        int smallest = prices[0];
        int bigger = 0, big = 0;
        for(int i = 1; i<n; i++){
            if(prices[i]>smallest){
                if(prices[i]>big)
                    big = prices[i];
            }
            else if((big - smallest) < (big - prices[i])){
                smallest = prices[i];
                big = 0;
            }
            if(big-smallest>bigger)
                bigger = abs(big - smallest);
        }
        return bigger;
    }

/*
  We know max profit will only be generated using min value to left, so we keep track of profit using lowest value encountered till now.
  and update profit and lowest value if we find any new.
*/
    int maxProfit(vector<int>& prices) {
        int minn = INT_MAX, maxprofit = 0;
        for(int i = 0; i<prices.size(); i++){
            if(prices[i] < minn)
                minn = prices[i];
            else if(prices[i]-minn > maxprofit)
                maxprofit = prices[i]-minn;
        }
        return maxprofit;
    }
