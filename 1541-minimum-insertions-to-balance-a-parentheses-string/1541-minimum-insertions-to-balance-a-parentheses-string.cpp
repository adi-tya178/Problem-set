class Solution {
public:
    int minInsertions(string s) {
        int lone_add=0;
        int req_close=0;
        for(auto x:s)
        {
            if(x=='(')
            {
                req_close+=2;
                if(req_close%2!=0)
                {
                    lone_add++;
                    req_close--;
                    
                }
            }
            else
            {
                if(req_close==0)
                {
                    lone_add++;
                    req_close++;
                }
                else
                {
                    req_close--;
                }

             }
        }
        return lone_add + req_close;
    }
};