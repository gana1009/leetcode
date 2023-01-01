class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a;
        int flag=0;
        a=heights;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++)
        {
            if(a[i]!=heights[i])
            {
                flag++;
            }
        }
        return flag;
    }
};