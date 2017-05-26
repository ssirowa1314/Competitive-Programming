#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        if(k==0){
            for(int i=1; i<=n; i++)
                cout<<i<<" ";
            cout<<endl;
            continue;
        }
        if(n%(2*k)){
            cout<<"-1\n";
            continue;
        }
        for(int i=2*k; i<=n; i+=2*k)
        {
            //cout<<i<<endl;
            for(int j=i-k+1; j<=i; j++)
                cout<<j<<" ";
            for(int j=i-2*k+1; j<i-k+1; j++)
                cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

