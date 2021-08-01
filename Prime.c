#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isprime(int k)
{for(int c=3;c<=sqrt(k);c+=2)
{if(k%c==0)
return false;
}
return true;}
int prime(int k)
{int g=1;
for(int c=3;c<=k;c+=2)
{if(isprime(c))
g++;}
return g;}
int main() 
{int n,c;
cin>>n;
c=prime(n);
cout<<c*(c+1)/2;    
return 0;
}
