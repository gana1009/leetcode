class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int flag=0;
        
        for(int i=0;i<rungs.size()-1;i++)
        {
            flag +=(rungs[i+1]-rungs[i]-1)/dist;  
            
        }
        flag +=((rungs[0]-1)/dist);
        return flag;
    }
};