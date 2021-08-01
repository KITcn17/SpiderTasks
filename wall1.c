#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int fn(int *a,int n,int sum)
{vector<int> g;
g.push_back(0);
int t,r=(sum+1)/2,u=sum,l=0;
for(int i=0;i<n;i++)
{for (auto& it : g)
{t=a[i]+it;
if(t>r)
{if(u>t)
u=t;}
if(t<r)
{g.push_back(t);
if(t>l);
l=t;}
if(sum%2==0)
{if(t==r)
 return r;}
else
{if(t==r)
    return r-1;
if(t==r-1)
 return r;}}}
if(u-t>t-l)
 return l;
else
 return sum-u;}
int main()
{int n,k,sum=0;
 cin>>n>>k;
int a[k];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
sum+=a[i];
if(n==1)
    cout<<sum;
 else
    cout<<fn(a,n,sum);
return 0;}