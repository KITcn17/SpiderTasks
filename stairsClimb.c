#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count(int n,int* b,int m)
{int tr[n+1];
for(int i=0;i<=n;i++)
    tr[i]=1;
for(int i=0;i<m;i++)
    tr[b[i]]=0;
if(n==1)
    return tr[1];
for(int i=2;i<=n;i++)
{if(tr[i]==0)
continue;
tr[i]=(tr[i-1]+tr[i-2])%1000000007;}
return tr[n];
}
int main() {int n,m;
            scanf("%d %d",&n,&m);
            int b[m];
            for(int i=0;i<m;i++)
            scanf("%d",b+i);
            printf("%d",count(n,b,m));
            return 0;
}
