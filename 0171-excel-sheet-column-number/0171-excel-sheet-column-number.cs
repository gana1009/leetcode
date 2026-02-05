public class Solution {
    public int TitleToNumber(string columnTitle) {
        double column = 0;
        char[] col = columnTitle.ToCharArray();
        int colLen = col.Length -1;
        foreach (char i in col)
        {
            column += ((i - 'A') +1) * Math.Pow((double)26,colLen);
            colLen--;
        }
        return (int)column;
    }
}