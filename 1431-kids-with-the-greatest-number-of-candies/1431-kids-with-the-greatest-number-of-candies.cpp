class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> a;
       int n=candies.size();
       int max_no=0;
       for(int i=0;i<n;i++)
       {
           max_no=max(max_no,candies[i]);
           
       }
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=max_no)
            {
                a.push_back(true);
            }
            else 
                a.push_back(false);
        }
        return a;
    }
};