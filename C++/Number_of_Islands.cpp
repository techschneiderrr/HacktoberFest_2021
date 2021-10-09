//Number of Islands (Leetcode)
//Link: https://leetcode.com/problems/number-of-islands/
//Mayank Jain

//Depth First Search (Graphs Problem)

class Solution {
public:
    int arr[4][2] = {{0,-1},{0,1},{-1,0},{1,0}};
    void dfs(vector<vector<char>>& grid,int i,int j){
        grid[i][j] = '0';
        for(int k=0;k<4;k++){
            int x = i + arr[k][0]; int y = j + arr[k][1];
            if(x>=0 && y>=0 && x<grid.size() && y<grid[0].size() && grid[x][y]=='1'){
                dfs(grid,x,y);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(grid,i,j);
                }
            }
        }
        return ans;
    }
};
