#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int t, c=0;
    cin>>t;
    while(t--)
    {
        c++;
        long long x, y, p, q, mul;
        cin>>x>>y>>p>>q;
        if(q==p){
            if(x==y)
                cout<<"0\n";
            else
                cout<<"-1\n";
            continue;
        }
        if(p==0&&x==0){
            cout<<"0\n";
            continue;
        }
        if(p==0){
            cout<<"-1\n";
            continue;
        }
        mul=max(ceil((long double)(y-x)/(long double)(q-p)),ceil((long double)x/(long double)p));
        cout<<q*mul-y<<endl;
    }
    return 0;
}


