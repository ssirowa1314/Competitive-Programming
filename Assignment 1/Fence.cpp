#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, min, index=0;
    cin>>n>>k;
    int a[n], temp;
    vector <int> dp;
    for(int i=0; i<n; i++)
        cin>>a[i];
    dp.push_back(0);
    for(int i=0; i<k; i++)
        dp[0]+=a[i];
    min=dp[0];
    for(int i=k; i<n; i++)
    {
        temp=dp[i-k]-a[i-k]+a[i];
        dp.push_back(temp);
        //cout<<temp<<" "<<min<<endl;
        if(temp<min){
            min=temp;
            index=i-k+1;
        }
    }
    cout<<index+1<<endl;
    return 0;
}
