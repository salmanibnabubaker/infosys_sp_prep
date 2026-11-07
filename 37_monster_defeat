class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float>time;
        for(int i=0;i<dist.size();i++){
            float t=float(dist[i])/float(speed[i]);
            time.push_back(t);
        }
        sort(time.begin(),time.end());
        int curr_time=0;
        for(int i=0;i<time.size();i++){
            if(time[i]<=curr_time){
                return i;
            }
            curr_time++;
        }
        return dist.size();
    }
};
