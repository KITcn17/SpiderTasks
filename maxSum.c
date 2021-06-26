#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int n,r=0;
            scanf("%d",&n);
            int a[n-1];
            for(int i=0;i<n-1;i++)
                scanf("%d",a+i);
            for(int i=0;i<n-2;i++)
            {if(a[i]<=a[i+1])
                r+=a[i];
             else
                r+=a[i+1];
            }
            printf("%d",r+a[0]+a[n-2]);
            
                
            
    return 0;
}