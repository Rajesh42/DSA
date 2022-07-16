#Number of Islands
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){findislands(i,j,grid);count++;}
            }
        }
        return count;
    }
    void findislands(int i, int j ,vector<vector<char>>& grid){
        if(i>=0&&j>=0&&i<grid.size()&&j<grid[i].size()&&grid[i][j]=='1'){
            grid[i][j]='0';
            findislands(i,j-1,grid);
            findislands(i+1,j,grid);
            findislands(i,j+1,grid);
            findislands(i-1,j,grid);
        }
    }
};
