class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> st;
        int n = s.length();
        int i=0;
        int j =0;
        while(j<n){
            if(j-i+1<k)
            {
                j++;

            }
            else
            {
                string res = s.substr(i,j-i+1);
                st.insert(res);
                i++;
                j++;
            }
        }
        
        return st.size()>=pow(2,k);
    }
};