#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n, m, c=0;
        cin>>m>>n;
        m=max(m,2);
        for(int i=m; i<=n; i++){
            c=0;
            for(int j=2; j<=sqrt(i); j++){
                if(i%j==0){
                    c++;
                    break;
                }
            }
            if(c==0)
                cout<<i<<endl;
        }
        cout<<endl;
    }
}
