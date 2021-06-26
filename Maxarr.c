#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,q;
            scanf("%d",&n);
            int r[n];
            for(int i=0;i<n;i++)
            r[i]=i+1;
            scanf("%d",&q);
            int minl=n-1, maxm=0;
            for(int i=0;i<q;i++)
            {int l,m,v;
            scanf("%d %d %d",&l,&m,&v);
            for(int i=l-1;i<m;i++)
                r[i]+=v;
             if(minl>l)
                 minl=l;
             if(maxm<m)
                 maxm=m;
             }
            int max=r[minl-1];
            for(int i=minl;i<maxm;i++)
            {if(r[i]>max)
                    max=r[i];}
            if(max<n)
                printf("%d",n);
            else
                printf("%d",max);
                
            return 0;
}
