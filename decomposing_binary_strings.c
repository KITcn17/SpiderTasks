#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {int n;
            scanf("%d",&n);
            int k=n;
            char a[n+1];
            for(int i=0;i<n;i++)
                scanf(" %c",a+i);
            char a1[n+1];
            strcpy(a1,a);
            if(a[n-1]=='1')
            {a[n-1]='0';
             while(a1[n-1]=='1' && n>1)
             {a1[n-1]='0';
              n--;}
             if(n>1)
             a1[n-1]='1';
             else
             {printf("-1");
              return 0;}}
            else
            {a1[n-1]='1';
            while(a[n-1]=='0' && n>1)
            {a[n-1]='1';
             n--;}
            if(n>1) 
                a[n-1]='0';
             else
             {printf("-1");
              return 0;}}
            for(int i=0;i<k;i++)
              printf("%c",a[i]);
            printf(" ");
            for(int i=0;i<k;i++)
              printf("%c",a1[i]);
            return 0;
}
