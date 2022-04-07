class Solution {
public:
    char nextGreatestLetter(vector<char>& s, char target) {
        char res=SCHAR_MAX;
        if(s.back()<=target)return s[0];
        int n = s.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int mid = i + (j-i)/2;
            if(s[mid]>target)j=mid;
            else
            {
                i=mid+1;
            }
        }
        return s[i];
    }
};