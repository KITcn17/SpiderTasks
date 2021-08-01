#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {int size,c=0,n;
            string k;
            cin>>k;
            while(1)
            {size= k.length();
             if(size>1)
             {c++;
              n=0;
             for(int i=0;i<size;i++)
              n+=int(k.at(i))-48;}
             else
             break;
             k= to_string(n);
             }
            cout<<c;
         return 0;
}