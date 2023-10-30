public class Solution {
    
   public static int maxProfit(int[] prices) {
    int n = prices.length;
    int[] buy = new int[n];
    int[] sell = new int[n];

    buy[0] = -prices[0];
    sell[0] = 0;

    for (int i = 1; i < n; i++) {
        buy[i] = Math.max(buy[i - 1], sell[i - 1] - prices[i]);
        sell[i] = Math.max(sell[i - 1], buy[i - 1] + prices[i]);
    }

    return sell[n - 1];
    }

        public static void main(String[] args) {
        int[] arr={7,1,5,3,6,4};
        System.out.println(maxProfit(arr));
        
    
    
    }
}
