class Solution {
public:
   
    int brokenCalc(int startValue, int target) {
        if(target<startValue)return (startValue-target);
        int cnt=0;
       while(target!=startValue)
       {
           if(target%2==0 && target>startValue)
           {
               target=target/2;
           }
           else
           {
               target+=1;
           }
           cnt++;
       }
        return cnt;
    }
};