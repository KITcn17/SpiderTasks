#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,r,x,y;
            scanf ("%d %d %d %d",&n,&r,&x,&y);
            int a[n],b[n],s=r;
            for (int i=0;i<n;i++)
                scanf("%d ",a+i);
            for (int i=0;i<n;i++)
                scanf("%d ",b+i);
            for (int i=0;i<n;i++)
            if(a[i]){
                if(b[i])
                    s+=x;
                else
                    s-=y;}
            if(r<s)
                printf("promoted");
            else if(r==s)
                printf("no change");
            else
                printf("demoted");
            
            return 0;
}
