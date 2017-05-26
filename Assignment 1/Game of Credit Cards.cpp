#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], b[n], lb, cmax=0, cmin=0;
    vector <int> copy;
    char ch;
    for(int i=0; i<n; i++)
    {
        cin>>ch;
        a[i]=ch-'0';
    }
    for(int i=0; i<n; i++)
    {
        cin>>ch;
        b[i]=ch-'0';
    }
    sort(b,b+n);
    for(int i=0; i<n; i++)
        copy.push_back(b[i]);
    for(int i=0; i<n; i++)
    {
        lb=(int)(upper_bound(copy.begin(), copy.end(),a[i])-copy.begin());
        if(lb==copy.size()){
            copy.erase(copy.begin()+0);
            continue;
        }
        cmax++;
        copy.erase(copy.begin()+lb);
    }
    copy.clear();
    for(int i=0; i<n; i++)
        copy.push_back(b[i]);
    for(int i=0; i<n; i++)
    {
        lb=(int)(lower_bound(copy.begin(), copy.end(),a[i])-copy.begin());
        if(lb==copy.size()){
            copy.erase(copy.begin()+0);
            cmin++;
            continue;
        }
        copy.erase(copy.begin()+lb);
    }
    cout<<cmin<<endl<<cmax<<endl;
    return 0;
}


