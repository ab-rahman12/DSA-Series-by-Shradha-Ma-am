class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++)
        {
            int tmp=max(prices[i]-mn,0);
            if(tmp>ans)ans=tmp;
            if(prices[i]<mn)mn=prices[i];
        }
        return ans;
    }
};
