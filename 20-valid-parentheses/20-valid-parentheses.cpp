class Solution {
public:
    bool isValid(string s) {
 stack <int> stack;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]== '(' || s[i]== '[' || s[i]== '{')
        {
            stack.push(s[i]);
        }
        else
        {
            if(stack.empty()) return 0;
            
          else if( s[i]==')' && stack.top() == '(' ) 
            {
             
                stack.pop(); 
            }
            
            else if(s[i]=='}' && stack.top() == '{' ) 
            {
             
                stack.pop(); 
            }
            
            else if(s[i]==']' && stack.top() == '[' ) 
            {
                
                stack.pop(); 
            }
            else return 0;
                
        }
    }
    
    if(stack.empty()) return 1;
    
    return 0;}
};