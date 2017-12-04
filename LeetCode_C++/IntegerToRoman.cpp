/*
 *Given an integer, convert it to a roman numeral.
 *Input is guaranteed to be within the range from 1 to 3999.
 */
 


class Solution {
public:
    string intToRoman(int num) {
        
    int no,no_new;
    string roman="";
        
    no_new=num;
        
    while (num/1000 !=0 && num!=0)
    {
        no_new=num/1000;
        
        while(no_new>0)
        {
            roman=roman+"M";    
            no_new=no_new-1;
        }
        
        num=num%1000;
    }
    
    if (num/1000==0 && num>=900 && num<1000)
    {
        num=num-900;
        roman=roman+"CM";
    }
        
    while (num/500!=0 && num!=0)
    {
        no_new=num/500;
        
        while(no_new>0)
        {
            roman=roman+"D";    
            no_new=no_new-1;
        }
        
        num=num%500;
    }
    
    if (num/500==0 && num>=400 && num<500)
    {
        num=num-400;
        roman=roman+"CD";
    }
    
    while (num/100!=0 && num!=0)
    {
        no_new=num/100;
        
        while(no_new>0)
        {
            roman=roman+"C";    
            no_new=no_new-1;
        }
        
        num=num%100;
    }
    
    if (num/100==0 && num>=90 && num<100)
    {
        num=num-90;
        roman=roman+"XC";
    }
    
    while (num/50!= 0 && num!=0)
    {
        no_new=num/50;
        
        while(no_new>0)
        {
            roman=roman+"L";    
            no_new=no_new-1;
        }
        
        num=num%50;
    }
    
    if (num/50==0 && num>=40 && num<50)
    {
        num=num-40;
        roman=roman+"XL";
    }
    
    while (num/10!=0 && num!=0)
    {
        no_new=num/10;
        
        while(no_new>0)
        {
            roman=roman+"X";    
            no_new=no_new-1;
        }
        
        num=num%10;
    }
    
    if (num/10==0 && num==9)
    {
        num=num-9;
        roman=roman+"IX";
    }
    
    while (num/5!=0 && num!=0)
    {
        no_new=num/5;
        
        while(no_new>0)
        {
            roman=roman+"V";    
            no_new=no_new-1;
        }
        
        num=num%5;
    }
    
    if (num/5==0 && num==4)
    {
        num=num-9;
        roman=roman+"IV";
    }
    
    while (num>0)
    {
            roman=roman+"I";
            num--;
    }
    
    return roman;    
        
    }
};