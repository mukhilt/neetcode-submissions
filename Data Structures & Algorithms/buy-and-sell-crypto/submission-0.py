class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxProfit = 0
        for buy in range(len(prices)):
            current = prices[buy]
            currentProfit = 0
            for sell in range(buy + 1, len(prices)):
                if current < prices[sell]:
                    currentProfit = prices[sell] - current
                    if currentProfit > maxProfit:
                        maxProfit = currentProfit
                else:
                    continue
        return maxProfit