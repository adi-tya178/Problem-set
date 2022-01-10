class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.length()-1;
        int m = b.length()-1;
        int carry = 0;
        string ans;
        while(n>=0 || m>=0 || carry==1)
        {
            int sum = carry;
            if(n>=0)
            {
                sum += a[n]-'0';
                n--;
            }
            if(m>=0)
            {
                sum += b[m]-'0';
                m--;
            }
            carry=sum>>1;
            sum = sum & 1;
            ans.append(sum == 0 ? "0" : "1");
        }
        if(carry>0)
        {
            ans.append("1");
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};