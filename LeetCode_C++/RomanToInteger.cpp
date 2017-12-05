/*Given a roman numeral, convert it to an integer.
 *Input is guaranteed to be within the range from 1 to 3999.
 */

class Solution {
public:
    int romanToInt(string s) {
        
        
        int no=0,temp=0;
    unsigned int i=0;
    
    
    while (i<s.length())
    {
    
    while (i<s.length())
    {
        
        if(s[i]=='I')
        {
            if(s[i+1]=='V')
            {
                no=no+4;
                temp=1;
                break;
            }
        }
        
        if(s[i]=='I')
        {
            if(s[i+1]=='X')
            {
                no=no+9;
                temp=1;
                break;
            }
        }
        
        if(s[i]=='X')
        {
            if(s[i+1]=='L')
            {
                no=no+40;
                temp=1;
                break;
            }
        }
        
        if(s[i]=='X')
        {
            if(s[i+1]=='C')
            {
                no=no+90;
                temp=1;
                break;
            }
        }
        
        if(s[i]=='C')
        {
            if(s[i+1]=='D')
            {
                no=no+400;
                temp=1;
                break;
            }
        }
        
        if(s[i]=='C')
        {
            if(s[i+1]=='M')
            {
                no=no+900;
                temp=1;
                break;
            }
        }
        
        if(s[i]=='M')
        {
            no=no+1000;
            temp=2;
            break;
        }
        
        if(s[i]=='D')
        {
            no=no+500;
            temp=2;
            break;
        }
        
        if(s[i]=='C')
        {
            no=no+100;
            temp=2;
            break;
        }
        
        if(s[i]=='L')
        {
            no=no+50;
            temp=2;
            break;
        }
        
        if(s[i]=='X')
        {
            no=no+10;
            temp=2;
            break;
        }
        
        if(s[i]=='V')
        {
            no=no+5;
            temp=2;
            break;
        }
        
        if(s[i]=='I')
        {
            no=no+1;
            temp=2;
            break;
        }
            
        
    }
    
    if (temp==1)
            {i=i+2;
            temp=0;
            }
            
        if (temp==2)
            {i++;
            temp=0;
            }
    
    }
            
    
    
    return no;}
};