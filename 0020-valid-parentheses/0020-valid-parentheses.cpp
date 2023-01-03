class Solution {
public:
    bool isValid(string s) {
        stack <char> a;

            for(int i=0; i< s.length() ; i++)
        {
            if(!a.empty())
            {
                if(a.top()=='(' && s[i]==')' || a.top()=='[' && s[i]==']' || a.top()=='{' && s[i]=='}')
                {
                    a.pop();
                    continue;
                }
            }
            a.push(s[i]);
        }
        return a.empty();
    }
};