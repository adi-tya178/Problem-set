class Solution {
public:
    bool ispalindrome(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])return false;
           else
           {
               i++;
               j--;
           }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int i=0;
        int j=n-1;
        
      
        
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                return ispalindrome(s,i,j-1) || ispalindrome(s,i+1,j);
            }
            
        }
        return true;
    }
};