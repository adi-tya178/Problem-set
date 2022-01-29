class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
       int n = a.size();
           vector<long long>nsl;
           int idx1=-1;
           stack<pair<long long,int>>s1;
           for(int i=0;i<n;i++){
               if(s1.size()==0){
                   nsl.push_back(idx1);
               }
               else if(s1.size()>0 && s1.top().first<a[i]){
                   nsl.push_back(s1.top().second);
               }
               else if(s1.size()>0 && s1.top().first>=a[i]){
                   while (s1.size() > 0 && s1.top().first >= a[i]){
                       s1.pop();
                   }
                   if(s1.size()==0){
                       nsl.push_back(idx1);
                   }
                   else{
                       nsl.push_back(s1.top().second);
                   }
               }
               s1.push({a[i],i});
           }
           vector<long long>nsr;
           int idx2=n;
           stack<pair<long long,int>>s2;
           for(int i=n-1;i>=0;i--){
               if(s2.size()==0){
                   nsr.push_back(idx2);
               }
               else if(s2.size()>0 && s2.top().first<a[i]){
                   nsr.push_back(s2.top().second);
               }
               else if(s2.size()>0 && s2.top().first>=a[i]){
                   while (s2.size() > 0 && s2.top().first >= a[i]){
                       s2.pop();
                   }
                   if(s2.size()==0){
                       nsr.push_back(idx2);
                   }
                   else{
                       nsr.push_back(s2.top().second);
                   }
               }
               s2.push({a[i],i});
           }
           reverse(nsr.begin(),nsr.end());
           vector<long long>width(n);
           for(int i=0;i<n;i++){
               width[i]=nsr[i]-nsl[i]-1;
           }
           long long area=0;
           for(int i=0;i<n;i++){
               long long val=width[i]*a[i];
               area=max(area,val);
           }
           return area;
    }
};