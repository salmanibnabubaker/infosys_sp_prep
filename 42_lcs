class Solution {
  public:
    int longest(int i,string &x,int j,string &y,vector<vector<int>>&memo){
        if(i==x.length()||j==y.length()){
            return 0;
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        if(x[i]==y[j]){
            return memo[i][j]=longest(i+1,x,j+1,y,memo)+1;
        }
        return memo[i][j]=max(longest(i,x,j+1,y,memo),longest(i+1,x,j,y,memo));
    }
    int lcs(string &s1, string &s2) {
        // code here
        vector<vector<int>>memo(s1.length(),vector<int>(s2.length(),-1));
        return longest(0,s1,0,s2,memo);
    }
};
