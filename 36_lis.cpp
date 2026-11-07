class Solution {
  public:
    int longest(int i,int prev,vector<int>&arr,vector<int>&memo){
        if(arr[i]<=prev){
            return 0;
        }
        if(memo[i]!=-1){
            return memo[i];
        }
        int maxlen=0;
        for(int j=i+1;j<arr.size();j++){
            maxlen=max(maxlen,longest(j,arr[i],arr,memo));
        }
        return memo[i]=maxlen+1;
    }
    int lis(vector<int>& arr) {
        // code here
        vector<int>memo(arr.size(),-1);
        int maxlen=0;
        for(int i=0;i<arr.size();i++){
            maxlen=max(maxlen,longest(i,-1,arr,memo));
        }
        return maxlen;
    }
};
