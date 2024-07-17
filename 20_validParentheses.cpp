class Solution {
public:
    bool isValid(string s) {
       if(s.size()%2!=0)
         return 0;
         stack<int> st;
       for(int i=0;i<s.size();i++){
          if(s[i]=='(' || s[i]=='{' || s[i]=='[')
             st.push(s[i]);
          else if(s[i]==')' || s[i]==']' || s[i]=='}')
              if(st.empty()==false){
                  if(st.top()=='{' && s[i]=='}')
                     st.pop();
                  else if(st.top()=='(' && s[i]==')')   
                     st.pop();
                  else if(st.top()=='[' && s[i]==']')
                     st.pop();
                  else
                     return 0;    
              }
          else
             return 0;                 
       }
       if(st.empty())
          return 1;
       else
          return 0;   
    }
};