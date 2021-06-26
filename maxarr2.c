#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,q;
            scanf("%d",&n);
            int r[n+1];
            for(int i=0;i<=n;i++)
            r[i]=1;
            scanf("%d",&q);
            for(int i=0;i<q;i++)
            {int l,m,v;
             scanf("%d %d %d",&l,&m,&v);
             r[l-1]+=v;
             r[m]-=v;}
            int max=r[0],sum=r[0];
            for(int i=1;i<=n;i++)
            {sum+=r[i];
             if(max<sum)
                 max=sum;}
            printf("%d",max);
            return 0;
}
