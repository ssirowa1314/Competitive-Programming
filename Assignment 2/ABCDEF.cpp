#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n], index=0, index1=0, lb, ans=0, ub, size;
	for(int i=0; i<n; i++)
		cin>>a[i];
	size=n*n*n;
	long long lhs[size], rhs[size];
	for(int i=0; i<n; i++){
		if(a[i]){
			for(int j=0; j<n; j++){
				for(int k=0; k<n; k++){
					rhs[index++]=a[i]*(a[j]+a[k]);
				}
			}
		}
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				lhs[index1++]=a[i]+a[j]*a[k];
			}
		}
	}
	sort(lhs,lhs+index1);
	sort(rhs,rhs+index);
	for(long long i=0; i<index; i++){
		lb=(long long)(lower_bound(lhs,lhs+size,rhs[i])-lhs);
		ub=(long long)(upper_bound(lhs,lhs+size,rhs[i])-lhs);
		ans+=ub-lb;
	}
	cout<<ans;

}