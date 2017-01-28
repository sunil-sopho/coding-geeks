/*
 * coding contest of harvard cs50
 *question bill gates
 * link to question https://www.hackerrank.com/contests/cs50x-2017/challenges/cs50-2016-8
 */



#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct node
{
    //int val;
    bool num[100];
}node;

int c1,c2,n,k=0;
long long int count=0,min=10000000;
bool nu[100];
check(node ar[],int bu);

int main(void)
{
    node root[100];
    //root=malloc((sizeof(node))*100);
    int a;
    
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j!=n-1)
            {
                scanf("%d ",&a);
                if(a==1)
                {
                    root[i].num[j]=true;
                    root[j].num[i]=true; 
                }
            }
            else
            {
                scanf("%d\n",&a);
                if(a==1)
                {    
                    root[i].num[j]=true;
                    root[j].num[i]=true;
                    
                }
            }
        }
    }
        scanf("%d\n",&c1);
        scanf("%d\n",&c2);  
    if(root[c1].num[c2]==true)
    {
        printf("1");
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(root[c1].num[i]==true)
            {
                for(int j=0;j<n;j++)
                {
                    nu[j]=false;
                }
                nu[c1]=true;
                k=0;
                count=check(root,i);
                if(count<min&&k==1)
                    min=count;
                count=0;
            }    
        }    
    }
    if(min!=10000000)
    printf("%lld",min);
    else
    {    
        printf("-1");
    }
        return 0;
    
}

check(node ar[],int bu)
{
    //count++;
    nu[bu]=true;
    int kal,bal=30000;
    if(ar[bu].num[c2]==true)
    {
        k=1;
        //exit;
        return 2;
    }
    for(int i=0;i<n;i++)
    {
        if(nu[i]!=true&&(ar[bu].num[i]==true))
        {
            
           kal=check(ar,i);
            if(kal<bal)
                bal=kal;
                
        } 
    }
    return bal+1;
    
}
