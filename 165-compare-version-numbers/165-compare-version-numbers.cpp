class Solution {
public:
    int compareVersion(string v1, string v2) {
        int a=0;
        int b=0;
        vector<int> v;
        vector<int> arr;
        for(int i=0;i<v1.length();i++)
        {
            if(v1[i]=='.')
            {
                v.push_back(a);
                a=0;
             }
            else{a=a*10+v1[i]-'0';}
            
        }
        v.push_back(a);
         for(int i=0;i<v2.length();i++)
        {
            if(v2[i]=='.')
            {
                arr.push_back(b);
                b=0;
             }
           else{ b=b*10+v2[i]-'0'; }
            
        }
        arr.push_back(b);
        for(auto x:arr)
        {
            cout<<x<<endl;
        }
         int k=0,j=0;
        while(k<v.size() && j<arr.size())
        {
            if(v[k]>arr[j])
            {
                cout<<"t"<<endl;
                return 1;
            }
            else if(v[k]<arr[j])
            {
                cout<<"q"<<endl;
                return -1;
            }
            k++;
            j++;
        }
        
        if(arr.size()>v.size())
        {
            for(int i=v.size();i<arr.size();i++)
            {
                if(arr[i]>0)
                {
                    cout<<"n"<<endl;
                    return -1;
                }
            }
        }
        if(v.size()>arr.size())
        {
             for(int i=arr.size();i<v.size();i++)
            {
                if(v[i]>0)
                {
                    cout<<v[i]<<i<<endl;
                    cout<<"m"<<endl;
                    return 1;
                }
            }
        }
     
        return 0;
    }
};