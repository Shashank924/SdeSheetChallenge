#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    int profit = 0;
    int minVal=prices[0];
    for(int i=1;i<n;i++) {
        profit = max(profit,prices[i]-minVal);
        minVal = min(minVal,prices[i]);
    }
    return profit;
}
