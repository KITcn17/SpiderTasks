#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int t;
            scanf("%d",&t);
            for(int i=0;i<t;i++)
            {int n;
             scanf("%d",&n);
             for(int m=0;m<n;m++)
                 printf("*");
             printf("\n");
             for(int m=-n/2+1;m<n/2;m++)
             {int k=abs(m);
              for(int i=0;i<k+1;i++)
                 printf("*");
              for(int i=0;i<2*(n/2-k)-1;i++)
                  printf(" ");
              for(int i=0;i<k+1;i++)
                 printf("*");
              printf("\n");}
             for(int m=0;m<n;m++)
                 printf("*");
             printf("\n");
            }    
            return 0;
}
