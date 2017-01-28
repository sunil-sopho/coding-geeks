/*coding contest harvard cs50
 *roman numerals
 *question link https://www.hackerrank.com/contests/cs50x-2017/challenges/cs50-2016-9
 * sucessfully submited
 */

#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    char s[10000],max;
    scanf("%s",s);
    int i,len=strlen(s),val,old=0,va=0;
     long long int sum=0;
    for(i=0;i<len;i++)
    {
        if(s[i]=='I')
            val=1;
        else if(s[i]=='V')
            val=5;
        else if(s[i]=='X')
            val=10;
        else if(s[i]=='L')
            val=50;
        else if(s[i]=='C')
            val=100;
        else if(s[i]=='D')
            val=500;
        else if(s[i]=='M')
            val=1000;
           if(val>old&&i>0)
          {
                for(int j=1;j<=i;j++)
                    {
                    if(s[i-j]=='I')
            va=1;
        else if(s[i-j]=='V')
            va=5;
        else if(s[i-j]=='X')
            va=10;
        else if(s[i-j]=='L')
            va=50;
        else if(s[i-j]=='C')
            va=100;
        else if(s[i-j]=='D')
            va=500;
        else if(s[i-j]=='M')
            va=1000;
            if(val>va)
            {sum=sum-va;
             val=val-va;}
             else
             break;
                }
            sum=sum+val;
                }
            else
            sum=sum+val;
            old=val;
            
   }
   printf("%lld\n",sum);
}
