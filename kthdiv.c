/* educational contest on code forces
 * this code still need optimization for number greater than 10000000000
 *time out problem for ver very large number only
 * code prints k th divisor of a number n
 * input   n k
 * output  kth divisor of number n
 */


#include <stdio.h>
#include <math.h>
int prin(long long int n);
int sit=0,kar;
long long int count=0,coun=0,k,sol;
int main()
{
    long long int n;
    scanf("%I64d %I64d",&n,&k);
    prin(n);
    if(count+coun<k)
    {printf("-1");return 0;}
    if(k<=count)
    {sit=1;return 0;}
    else if(k<count+coun)
    sit=2;
    sol=coun-k+count+1;
    
    count=0;coun=0;
    prin(n);
}
int prin(long long int n)
{
    
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
           
            if (n/i == i)
                {count++;if(k==count)
                    printf("%d",i);
                    return 0;
                }
 
            else 
            {
                count++;
                if(k==count)
                {    printf("%d",i);
                    return 0;
                    
                }
                coun++;
                if(sit=2&&sol==coun)
                {
                    printf("%I64d",n/i);return 0;
                }
                        
            }
        
        }
    }
}