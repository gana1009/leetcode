class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0;
        int w=0;
        int b=0;
        vector<int> a;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)r++; 
            else if(nums[i]==1)w++; 
            else b++; 
        }
        while(r!=0)
        {
            a.push_back(0);
            r--;
        }
        while(w!=0)
        {
            a.push_back(1);
            w--;
        }
        while(b!=0)
        {
            a.push_back(2);
            b--;
        }
        nums =a;
        
    }
};