class Solution {
public:
   
        void dfs(vector<vector<int>>& rooms, vector<bool>& vis, int node) {
        vis[node] = 1;
        for(auto it : rooms[node]){
            if(!vis[it]) {
                dfs(rooms, vis, it);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n, 0);
        dfs(rooms, vis, 0);
        
        for(auto x: vis){
            if(!x) return false;
        }
        
        return true;
    }
};