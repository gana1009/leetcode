class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int> a;
        int row_start=0,column_start=0,row_end=m-1,column_end=n-1;
        
        while(row_start<=row_end && column_start<=column_end)
        {
            
            for(int col=column_start;col<=column_end;col++)
            {
                a.push_back(matrix[row_start][col]);
            }
            row_start++;
            if(row_start>row_end)
            {
              break;
            }
            
            for(int row=row_start;row<=row_end;row++)
            {
                a.push_back(matrix[row][column_end]);
            }
            column_end--;
            if(column_end<column_start)
            {
              break;
            }
            for(int col=column_end;col>=column_start;col--)
            {
                a.push_back(matrix[row_end][col]);
            }
            row_end--;
            if(row_start>row_end)
            {
              break;
            }
            for(int row=row_end;row>=row_start;row--)
            {
                a.push_back(matrix[row][column_start]);
            }
            column_start++;
            if(column_end<column_start)
            {
              break;
            }
        }
        return a;
    }
};