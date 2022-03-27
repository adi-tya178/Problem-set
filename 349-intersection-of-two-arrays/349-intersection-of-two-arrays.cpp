class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        vector<int> v;
        for(auto x:nums1)
        {
            s1.insert(x);
        }
        for(auto x:nums2)
        {
            if(s1.find(x)!=s1.end())v.push_back(x),s1.erase(x);
        }
        return v;
    }
};