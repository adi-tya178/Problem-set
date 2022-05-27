class Solution {
public:
    int numberOfSteps(int num) {
        int n = num, c =0;
        while(n)
        {
            n =  (n%2==0)?n/2:n-1;
            c++;
           
        }
        return c;
    }
};