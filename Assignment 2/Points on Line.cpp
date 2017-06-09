#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, d, ub;
    cin>>n>>d;
    int a[n];
    long long ans=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n-2; i++){
        ub=(int)(upper_bound(a+i,a+n,(a[i]+d))-a)-1;
        //cout<<ub<<" "<<a[ub]<<" "<<a[i]+d<<endl;
        if(ub-i>=2)
            ans+=((ub-i)*(ub-i-1))/2;
    }
    cout<<ans;
}
  
