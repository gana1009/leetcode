class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>>ans(n+1,{0,0});
        for(int i=0;i<trust.size();i++)
        {
            int person = trust[i][0];
            int toTrust= trust[i][1];
            
            ans[person].first +=1;
            ans[toTrust].second +=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(ans[i].first==0 && ans[i].second==n-1)
                return i;
        }
        return -1;
    }
};