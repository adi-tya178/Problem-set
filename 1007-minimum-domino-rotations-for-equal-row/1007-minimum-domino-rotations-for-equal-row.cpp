class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        unordered_map<int,int> mp3;
        unordered_map<int,int> mp4;
        int ans=INT_MAX;
        for(int i=0;i<tops.size();i++){
            mp1[tops[i]]++;
             if(tops[i]!=bottoms[i])
                 mp3[tops[i]]++;
        }
        for(int i=0;i<bottoms.size();i++){
            mp4[bottoms[i]]++;
            if(tops[i]!=bottoms[i])
                mp2[bottoms[i]]++;
        }
        
        int n=bottoms.size();
        int m;
        for(auto x: mp1){
            m=mp2[x.first];
            if(x.second+mp2[x.first]==bottoms.size()){
                int xy=min(m,n-m);
                ans=min(ans,min(x.second,xy));
            }
        }
        
        for(auto x:mp2){
            if(x.second+mp1[x.first]==bottoms.size()){
                // int xy=min(x.second,bottoms.size()-x.second);
                ans=min(ans,min(x.second,mp1[x.first]));
            }
        }
        for(auto x: mp4){
            m=mp3[x.first];
            if(x.second+mp3[x.first]==bottoms.size()){
                int xy=min(m,n-m);
                ans=min(ans,min(x.second,xy));
            }
        }
        
        for(auto x:mp3){
            if(x.second+mp4[x.first]==bottoms.size()){
                // int xy=min(x.second,bottoms.size()-x.second);
                ans=min(ans,min(x.second,mp4[x.first]));
            }
        }
        
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};