#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int prime(int k)
{bool t=true;
vector<int> p;
p.push_back(2);
for(int c=3;c<=k;c+=2)
{for (auto i=0;p.at(i)<=sqrt(c);i++)
{if(c%p.at(i)==0)
{t=false; 
break;}}
if(t)
p.push_back(c);}
return p.size();}
int main() 
{int n,c;
cin>>n;
c=prime(n);
cout<<(c*(c+1))/2;    
return 0;
}