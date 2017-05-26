#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    long long n,q1, a[5]={0,0,0,0,0}, q, a1, a2;
    char ch[]="oooeoee";
    cin>>n>>q1;
    for(long long i=1; i<=n; i++){
        for(long long j=1; j<=n; j++){
            //cout<<(i*i*j*j+1)<<" "<<ch[(i*i*j*j+1)%7]<<" "<<(j*j*(n+1-i)*(n+1-i)+1)<<" "<<ch[(j*j*(n+1-i)*(n+1-i)+1)%7]<<" "<<endl;
           a1=i*i*j*j+1;
           a2=j*j*(n+1-i)*(n+1-i)+1;
            if(ch[a1%7]!=ch[a2%7])
               a[1]++;
        }
    }
    for(long long i=1; i<=n; i++){
        for(long long j=1; j<=n; j++){
            a1=i*i*j*j+1;
            a2=(n+1-i)*(n+1-i)*(n+1-j)*(n+1-j)+1;
            if(ch[a1%7]!=ch[a2%7])
               a[2]++;
        }
    }
    for(long long i=1; i<=n; i++){
        for(long long j=1; j<=n; j++){
            a1=i*i*j*j+1;
            a2=i*i*(n+1-j)*(n+1-j)+1;
            if(ch[a1%7]!=ch[a2%7])
               a[3]++;
        }
    }
    while(q1--){
        cin>>q;
        q=q%360;
        q=q/90;
        cout<<a[q]<<endl;
    }
    return 0;
}




