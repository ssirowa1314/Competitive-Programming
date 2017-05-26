#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    long long ans=0, temp, ub, lb;
    for(int i=0; i<n-1; i++){
        temp=a[i]^x;
        lb=(int)(lower_bound(a+i+1,a+n,temp)-a);
        ub=(int)(upper_bound(a+i+1,a+n,temp)-a);
        ans+=ub-lb;
    }
    cout<<ans<<endl;
}
