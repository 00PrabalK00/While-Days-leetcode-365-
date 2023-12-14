/*2482. Difference Between Ones and Zeros in Row and Column*/
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>>ans(grid.size() , vector<int>(grid[0].size(),0));

        vector<pair<int,int>>store;
        for(int i=0; i< grid.size() ; i++){
            int zeroCount=0,oneCount=0;
            for(int j=0; j< grid[0].size() ; j++){
                if(grid[i][j]==0){
                    zeroCount+=1;
                }
                else{
                oneCount+=1;
            }}

            store.push_back(make_pair(zeroCount,oneCount));

        }
        vector<pair<int,int>>store1;
         for(int i=0; i< grid[0].size() ; i++){
            int zeroCount=0,oneCount=0;
            for(int j=0; j< grid.size() ; j++){
                if(grid[j][i]==0){
                    zeroCount+=1;
                }
                else{
                oneCount+=1;
            }}
            store1.push_back(make_pair(zeroCount,oneCount));

        }
        for(int i=0; i< grid.size() ; i++){
            for(int j=0; j< grid[0].size() ; j++){
                int x=store[i].first;
                int y= store[i].second;
                int a= store1[j].first;
                int b= store1[j].second;
                ans[i][j]= y+b-x-a;
            }
        }

        return ans;
    }
};

/*Runtime
Details
207ms
Beats 35.67%of users with C++
Memory
Details
124.31MB
Beats 29.26%of users with C++*/