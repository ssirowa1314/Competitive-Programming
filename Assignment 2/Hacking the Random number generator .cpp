#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n], lb, ub, ans=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++){
        lb=(int)(lower_bound(a+i,a+n,a[i]+k)-(a+i));
        ub=(int)(upper_bound(a+i,a+n,a[i]+k)-(a+i));
        ans+=ub-lb;
        //cout<<lb<<" "<<ub<<endl;
    }
    cout<<ans;
}
