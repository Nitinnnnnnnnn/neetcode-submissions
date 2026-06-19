class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //  int ans=0;
    //  for(int i=0;i<prices.size();i++){
    //     for(int j=i+1;j<prices.size();j++){
    //         ans=max(ans,prices[j]-prices[i]);
    //     }
    //  }   
    //  return ans;
    int profit=0;
    int minprice=INT_MAX;
    for(int i=0;i<prices.size();i++){
        minprice=min(minprice,prices[i]);
        profit=max(profit,prices[i]-minprice);
    }
    return profit;
    }
};
