class Solution {
public:
    bool isPalindrome(int x) {
    
        long rev_x=0;
        long temp=x;
        if(x>=0 && x<10)
        {
            return true;
        }
        else if(x<0)
        {
            return false;
        }
        else
        {
            while(x)
            {
                rev_x=(rev_x*10)+(x%10);
                x=x/10;
            }
        }    
        
        if(temp==rev_x)
        {
            return true;
        }
        else
        {
            return false;
        }
    
    }
};