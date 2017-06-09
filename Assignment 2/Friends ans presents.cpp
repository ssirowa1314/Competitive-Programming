#include <iostream>
using namespace std;

int main()
{
	long long x, y, c1, c2, ans, c1t, c2t, reqd=1;
	cin>>c1>>c2>>x>>y;
	ans=c1+c2;
	while(reqd>0){
		c1t=c1-(ans/y-ans/(x*y));
		if(c1t<0)
			c1t=0;
		c2t=c2-(ans/x-ans/(x*y));
		if(c2t<0)
			c2t=0;
		reqd=c1t+c2t-(ans-(ans/x+ans/y-ans/(x*y)));
		ans=ans+reqd;
	}
	cout<<ans<<endl;
}