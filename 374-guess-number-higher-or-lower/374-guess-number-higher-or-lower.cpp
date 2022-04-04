/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    
    int guessNumber(int n) {
        int start=1,end=n;
        int ans=0;
       while(start<=end){
           int mid = start + (end-start)/2;
           int m=guess(mid);
           if(m==0)
           {
              return mid;
           }
           else if(m==-1)
           {
               end=mid-1;
           }
           else if(m==1)
           {
              start = mid+1;
           }
       }
    return start;
        /*int low = 1, high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int ret = guess(mid);
            if (ret == 0)
                return mid;
            else if (ret == -1)
                high = mid - 1;
            else if (ret == 1)
                low = mid + 1;
        }
        return low;*/
    }
};