#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
  while(n)
  {
    stack <int> temp;
    int a[n], c=1;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++){
        if(a[i]!=c){
            temp.push(a[i]);
        }
        else{
            c++;
            while(temp.empty()==0){
                if(temp.top()==c){
                    temp.pop();
                    c++;
                }
                else
                    break;
            }
        }
    }
    if(temp.empty())
        cout<<"yes\n";
    else
        cout<<"no\n";
    cin>>n;
  }

}

