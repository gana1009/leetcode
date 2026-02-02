public class Solution {
    public int MaxArea(int[] height) {
        int maxArea = 0;
        int i=0, j= height.Length -1;
        
        while(i<j)
        {
            int currWidth =  j -i;
            int currHeight = Math.Min(height[i],height[j]);

            maxArea = Math.Max(maxArea, currWidth * currHeight);

            if(height[i] <= height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxArea;
    }
}