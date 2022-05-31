class Solution {
public:
    string intToRoman(int num) {
        string str="";
        while(num!=0)
        {
            if(num>=1000)
            {
                str=str+'M';
                num=num-1000;
            }
            else if(num>=900)
            {
                str=str+"CM";
                num=num-900;
            }
            else if(num>=500)
            {
                str=str+'D';
                num=num-500;
            }
            else if(num>=400)
            {
                str=str+"CD";
                num=num-400;
            }
             else if(num>=100)
            {
                str=str+'C';
                 num=num-100;
            }
            else if(num>=90)
            {
                str=str+"XC";
                num=num-90;
            } 
            else if(num>=50)
            {
                str=str+'L';
                num=num-50;
            }
            else if(num>=40)
            {
                str=str+"XL";
                num=num-40;
            }
             else if(num>=10)
            {
                str=str+'X';
                 num=num-10;
            }
            else if(num>=9)
            {
                str=str+"IX";
                num=num-9;
            }
             else if(num>=5)
            {
                str=str+'V';
                 num=num-5;
            }
            else if(num>=4)
            {
                str=str+"IV";
                num=num-4;
            } 
            else if(num>=1)
            {
                str=str+'I';
                num=num-1;
            }
            
        }
        return str;
    }
};