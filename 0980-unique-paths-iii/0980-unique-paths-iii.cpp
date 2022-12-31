class Solution {
public:
    vector<vector<pair<int, int>>> paths;
    int non_empty = 0;

    bool visitable(int i, int j, vector<vector<int>>& grid, vector<vector<int>> visited)
    {
        if(i >= grid.size() || i < 0) return false;
        if(j >= grid[0].size() || j < 0) return false;
        if(visited[i][j] == 1 || grid[i][j] == -1) return false;

        return true;
    }

    void pathFind(pair<int, int> start, pair<int, int> end, vector<vector<int>>& grid, vector<pair<int, int>> path, vector<vector<int>> visited)
    {
        path.push_back(start);
        visited[start.first][start.second] = 1;

        if(start == end && path.size() == non_empty)
        {
            paths.push_back(path);
        }

        else
        {
            if(visitable(start.first, start.second + 1, grid, visited))
            {
                pathFind({start.first, start.second + 1}, end, grid, path, visited);
            }
            if(visitable(start.first, start.second - 1, grid, visited))
            {
                pathFind({start.first, start.second - 1}, end, grid, path, visited);
            }
            if(visitable(start.first + 1, start.second, grid, visited))
            {
                pathFind({start.first + 1, start.second}, end, grid, path, visited);
            }
            if(visitable(start.first - 1, start.second, grid, visited))
            {
                pathFind({start.first - 1, start.second}, end, grid, path, visited);
            }
        }
        path.pop_back();
        
        visited[start.first][start.second] = 0;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> visited;
        pair<int, int> start;
        pair<int, int> end;

        non_empty = m*n;

        vector<pair<int, int>> path;

        for(int i = 0; i<m; i++)
        {
            vector<int> temp;

            for(int j = 0; j<n; j++)
            {
                
                if(grid[i][j] == 1) start = {i, j};
                if(grid[i][j] == 2) end = {i, j};
                if(grid[i][j] == -1) non_empty--;

                temp.push_back(0);
            }

            visited.push_back(temp);
        }

        pathFind(start, end, grid, path, visited);

        return paths.size();
    }
};
