class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
         vector<int> v;
        if(arr.size()==0)
        {
            v.push_back(-1);
            v.push_back(-1);
        }
        else if(arr.size()==1)
        {
            if(arr[0]==x)
            {
                v.push_back(0);
                v.push_back(0);
            }
            else
            {
                v.push_back(-1);
            v.push_back(-1);
            }
        }
        else{
   int i=0;
   int ptr2=arr.size()-1;
    //vector<int> v;
  while(arr[i]<x && i<ptr2)
  {
      i++;
  }
  while(arr[ptr2]>x && i<ptr2)
  {
      ptr2--;
  }
  if(arr[i]==x)
  {
      v.push_back(i);
  }
  if(arr[ptr2]==x)
  {
      v.push_back(ptr2);
  }
  else
  {
      v.push_back(-1);
      v.push_back(-1);
  }}
    return v;
    }
};