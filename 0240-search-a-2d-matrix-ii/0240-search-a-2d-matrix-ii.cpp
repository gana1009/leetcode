class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int r=0;
        int s=m-1;
        bool flag=false;
        while(r<n && s>=0)
        {
            if(matrix[r][s]==target)
            {
                flag=true;
            }
            if(matrix[r][s]>target)
            {
                s--;
            }
            else
            {
                r++;
            }
        }
        return flag;
    }
};