public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        Array.Sort(strs);
        string str = "";
        int i =0;
        int len = strs.Length;

        while(i< strs[0].Length)
        {
            if(strs[0][i] == strs[len - 1][i])
                str += strs[0][i];
            else
                break;
            i++;
        }   
        return str;
    }
}