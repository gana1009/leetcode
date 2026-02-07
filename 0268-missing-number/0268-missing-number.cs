public class Solution {
    public int MissingNumber(int[] nums) {
        
        int x = nums.Length;
        for(int i =0; i < nums.Length; i++)
        {
           x ^= i ^ nums[i]; 
        }
        return x;
    }
}