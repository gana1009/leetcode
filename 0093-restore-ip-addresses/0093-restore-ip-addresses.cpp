class Solution {
public:
    bool valid(string temp) {
        if(temp.size() > 3 or temp.size() == 0) return false;
        if(temp.size() > 1 and temp[0] == '0')   return false;
        if(temp.size() && stoi(temp) > 255) return false;
        return true;
    }

    void solve(vector<string>& ans, string output, string s, int id, int dots) {
        if(dots == 3){
            if(valid(s.substr(id))) ans.push_back(output + s.substr(id));
            return;
        }
        for(int i=id; i<s.size(); i++) {
            if(valid(s.substr(id, i - id + 1))) {
                output.push_back(s[i]);
                output.push_back('.');
                solve(ans, output, s, i + 1, dots + 1);
                output.pop_back();
            }
        }
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        solve(ans, "", s, 0, 0);
        return ans;
    }
};