class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        int m=strs.size();
        int n=strs[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(strs[j-1][i]>strs[j][i])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};