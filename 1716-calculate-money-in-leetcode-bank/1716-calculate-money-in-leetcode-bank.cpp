class Solution {
public:
    int totalMoney(int n) {
        int amount=1;
        int sum=0;
       
        
        for(int i=1;i<=n;i++)
        {
            sum=sum+amount;
            amount ++;

            if(i%7==0)
            {
                
                amount=((i/7)+1);
            }
            
            
        }
        return sum;
    }
};