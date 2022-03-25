class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<int> ans;
        int count=0;
        int temp=0;
        map<char,int> tempi;
        for(int i=0;i<s.length();i++){
            
            if(count==0 && mp[s[i]]==1){
                temp++;
                ans.push_back(temp);
                tempi.clear();
                temp=0;
            }
            else{
                if(mp[s[i]]>1 && tempi[s[i]]==0){
                    count+=mp[s[i]]-1;
                    tempi[s[i]]=1;
                }
                else if(mp[s[i]]>0 && tempi[s[i]]!=0){
                    count--;
                }
                
                temp++;
                if(count==0 && mp[s[i]]==1){
                    // temp++;
                ans.push_back(temp);
                tempi.clear();
                temp=0;
                }
                mp[s[i]]--;
            }
            cout<<count<<" ";
        }
        return ans;
    }
};