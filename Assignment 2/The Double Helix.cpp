#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n, m;
	while(1){
		vector <int> ai, bi;
		cin>>n;
		if(!n)
			break;
		int a[n], temp, adp[n], ans=0;
		for(int i=0; i<n; i++)
			cin>>a[i];
		adp[0]=a[0];
		for(int i=1; i<n; i++)
			adp[i]=a[i]+adp[i-1];

		cin>>m;
		int b[m], bdp[m];
		for(int i=0; i<m; i++){
			cin>>b[i];
			temp=(int)(lower_bound(a,a+n,b[i])-a);
			if(temp!=n&&a[temp]==b[i]){
				ai.push_back(temp);
				bi.push_back(i);
			}
		}
		bdp[0]=b[0];
		for(int i=1; i<m; i++)
			bdp[i]=bdp[i-1]+b[i];
		ai.push_back(n-1);
		bi.push_back(m-1);
		/*if(ai.size())
			ans=max(adp[ai[0]],bdp[bi[0]])+max(adp[n-1]-adp[ai[ai.size()-1]],bdp[m-1]-bdp[bi[bi.size()-1]]);
		else
			ans=max(adp[n-1],bdp[m-1]);*/
		ans=max(adp[ai[0]],bdp[bi[0]]);
		for(int i=1; i<ai.size(); i++)
			ans+=max(adp[ai[i]]-adp[ai[i-1]],bdp[bi[i]]-bdp[bi[i-1]]);
		cout<<ans<<endl;
	}
}