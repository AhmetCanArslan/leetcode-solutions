class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int dif = money;
        int counter = 0;
        for(int i = 0 ;i<prices.size();i++)
        {
            for(int j = i+1;j<prices.size();j++)
            {
                int sum = prices[i]+prices[j];
                if(sum<=dif)
                {
                    dif = min(sum,dif);
                    counter++;
                }
            }
        }
        return (counter>=1) ?  money-dif :  money;
    }
};
