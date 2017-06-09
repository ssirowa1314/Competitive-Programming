#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long double n, m;
	cin>>n>>m;
	if(n<=m)
		cout<<(long long)n;
	else
		cout<<(long long)(m+ceil((-1+sqrt(1+8*n-8*m))/2));
}