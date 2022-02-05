class Solution {
public:
    int minSwaps(string s) {
        int balance = 0,swap1=0,j=s.length()-1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==']')balance--;
            else
            {
                balance++;
            }
            
            if(balance<0)
            {
                while(i<j && s[j]!='[')j--;
                swap(s[i],s[j]);
                swap1++;
                balance=1;
            }
        }
        return swap1;
    }
};