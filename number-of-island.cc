class Solution {
public:
    bool is_safe(int x, int y, int m, int n){
        if(x < 0 || y < 0 || x >=m || y>=n)
            return false;
        return true;
    }
    void dfs(vector<vector<char>>& grid, int x, int y){
        if(!is_safe(x,y,grid.size(), grid[0].size()))
            return;
        if(grid[x][y] == '1'){
            grid[x][y]=0;
            dfs(grid, x-1,y);
            dfs(grid, x, y-1);
            dfs(grid, x+1,y);
            dfs(grid, x, y+1);
        }
        else
            return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int counter = 0;
        for(int i = 0; i < grid.size();i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    counter++;
                    dfs(grid, i, j);
                }
            }
        }
        return counter;
    }
};
