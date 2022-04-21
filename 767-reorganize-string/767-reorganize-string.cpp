class Solution {
public:
    string reorganizeString(string s) {
      map<int,int> m;
        for(auto x:s)
        {
            m[x]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x:m)
        {
           pq.push({x.second,x.first});
        }
        
        string res;
        while(!pq.empty())
        {
            if(res.back()==pq.top().second)return "";
            auto e1 = pq.top();
            pq.pop();
            res+=e1.second;
            if(!pq.empty()){auto e2 = pq.top();
            pq.pop();
            res+=e2.second;
            e2.first--;
            if(e2.first>0)pq.push(e2);
            }
            e1.first--;
            if(e1.first>0)pq.push(e1);
            
            
        }
        return res;
        
    }
};