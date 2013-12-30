#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,A[105],B[105],C[105],n,m,q,l,r,f;
    scanf("%d",&t);
    while(t--)
    {
        for(int i=0;i<105;i++)
            C[i]=-1;
        scanf("%d%d",&n,&m);
        for(int i=0;i<m;i++)
        {
                scanf("%d%d",&A[i],&B[i]);
        }
        for(int i=0;i<m;i++)
        {
            if(A[i]>B[i])
            {
                C[B[i]]=A[i];
            }
            else
            {
                C[A[i]]=B[i];
            }
        }
        for(int i=0;i<105;i++)
            cout<<C[i]<<" ";
        scanf("%d",&q);
        for(int i=0;i<q;i++)
        {
            f=1;
            scanf("%d%d",&l,&r);
            if(l>r)
            {
                l=l+r;
                r=l-r;
                l=l-r;
            }
            int k=l;
            int m=C[l];
            int count=0;
            while(count<=n)
            {
                if(m==r)
                {
                    printf("YO\n");
                    f=0;break;
                }
                k=m;
                if(C[k]==-1)
                {
                    f=1;break;
                }
                m=C[k];
                count++;
                continue;

            }
            if(f==1)
                printf("NO\n");
        }

    }
}
