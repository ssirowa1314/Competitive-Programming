#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void reduce(int *p, int *q)
{
    while(1){
        int t=gcd(max(*p,*q),min(*p,*q));
        if(t==1)
            break;
        *p/=t;
        *q/=t;
    }
}

int main()
{
    long double a, b, c, d;
    cin>>a>>b>>c>>d;
    if(ceil(c/d*b)<=a){
        int a1n=d*a-b*c, a1d=d*a;
        reduce(&a1n,&a1d);
        cout<<a1n<<"/"<<a1d<<endl;
    }
    else{
        int b1n=c*b-a*d, b1d=c*b;
        reduce(&b1n,&b1d);
        cout<<b1n<<"/"<<b1d<<endl;
    }
    return 0;
}



