/* coding contest codeforces round 392 div2
 * link to original question http://codeforces.com/contest/758/problem/B
 */
 
 
#include <stdio.h>
#include <string.h>

int main()
{
    char s[110];
    scanf("%s",s);
    int len,i,a[4],r,y,b,g;
    a[0]=0;a[1]=0;a[2]=0;a[3]=0;
    len =strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='!')
        {
            a[i%4]++;
        }
        else if(s[i]=='R')
        r=i%4;
        else if(s[i]=='B')
        b=i%4;
        else if(s[i]=='Y')
        y=i%4;
        else if(s[i]=='G')
        g=i%4;
        
    }
    printf("%d %d %d %d\n",a[r],a[b],a[y],a[g]);
}