#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
  while(n){
    stack <int> temp;
    vector <int> check;
    int a[n], c=1;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(temp.empty()==0)
        {
            while(temp.size())
            {
                if(temp.top()<a[i]){
                    check.push_back(temp.top());
                    temp.pop();
                }
                else
                    break;
            }
            temp.push(a[i]);
        }
        else
            temp.push(a[i]);
    }
    while(temp.size())
    {
        check.push_back(temp.top());
        temp.pop();

    }
    for(int i=1; i<check.size(); i++){
        if(check[i]<check[i-1]){
            c=0;
            break;
        }
    }
    if(c)
        cout<<"yes\n";
    else
        cout<<"no\n";
    cin>>n;
  }
  return 0;
}
