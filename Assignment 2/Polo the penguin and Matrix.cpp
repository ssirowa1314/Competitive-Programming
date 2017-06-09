#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	int n, m, d;
	cin>>n>>m>>d;
	int a[n*m], c=1, eq=1, ans=0;
	for(int i=0; i<n*m; i++){
		cin>>a[i];
		if(abs((a[0]-a[i])%d))
			c=0;
		if(a[i]!=a[0])
			eq=0;
	}
	sort(a,a+n*m);
	if(eq==1)
		cout<<"0\n";
	else if(c==0)
		cout<<"-1\n";
	else{
		for(int i=0; i<n*m; i++)
			ans+=abs(a[(n*m)/2]-a[i])/d;
		cout<<ans<<endl;
	}

}