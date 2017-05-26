#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    long long n, k, c=0, ans=0;
    cin>>n>>k;
    vector <int> a;
    while(n){
        a.push_back(n%10);
        n/=10;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]==0)
            c++;
        else
            ans++;
        if(c==k)
            break;
    }
    if(c!=k){
        if(c)
            ans=a.size()-1;
    }
    cout<<ans<<endl;
    return 0;
}



