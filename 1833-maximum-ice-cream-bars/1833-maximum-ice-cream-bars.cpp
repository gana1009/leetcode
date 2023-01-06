class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        int a=0;
        
        while(a<n && costs[a]<=coins)
        {
            coins -= costs[a];
            a +=1;
        }
        return a;
    }
};