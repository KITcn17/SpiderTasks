#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int symmetry(int n,char* a)
{int r=0;
    while(n>1)
    {for(int i=0;i<n/2;i++)
            {if(a[i]!=a[i+n/2])
            return r;}
     r++;
     n/=2;
    }
   return r;}

int main() {int n;
            scanf("%d",&n);
            char a[n];
            for(int i=0;i<n;i++)
            scanf(" %c",a+i);
            int k=symmetry(n,a);
            printf("%d",k);
         return 0;
}