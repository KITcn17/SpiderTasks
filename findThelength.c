#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int t;
            cin>>t;
            for(int i=0;i<t;i++)
            {string s;
             cin>>s;
             int k=0,c=0;
            for(int j=0;j<s.size();j++)
            {if(s[j]=='<')
             k++;
             else
             k--;
             if(k<0)
             break;
             if(k==0)
                 c=j+1;
            }
            cout<<c<<endl;}
    return 0;
}