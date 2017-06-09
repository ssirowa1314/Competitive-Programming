# include <iostream>
# include <math.h>
# include <limits>
# include <stdio.h>

using namespace std;
struct point{
	double x;
	double y;
};
point temp;

double dist(point p1, point p2){
	//cout<<a<<" "<<b<<" "<<" "<<x<<" "<<y<<endl;
	return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}
void foot(point a, point b, point c){
	temp.x=(c.x*(b.y-a.y)-c.y*(b.x-a.x)+a.y*b.x-a.x*b.y)/(pow(b.y-a.y,2)+pow(b.x-a.x,2))*(b.y-a.y)*(-1)+c.x;
	temp.y=(c.x*(b.y-a.y)-c.y*(b.x-a.x)+a.y*b.x-a.x*b.y)/(pow(b.y-a.y,2)+pow(b.x-a.x,2))*(a.x-b.x)*(-1)+c.y;
	//cout<<"temp "<<temp.x<<" "<<temp.y<<endl;
}

double ldist(point a, point b, point c){
	return fabs(c.x*(b.y-a.y)-c.y*(b.x-a.x)+a.y*b.x-a.x*b.y)/sqrt(pow(b.y-a.y,2)+pow(b.x-a.x,2));
}
int main(){
	 double n, min1, max1, temp2, ans, pi=3.14159265358979;
	 point p;
	//cout<<numeric_limits<float>::digits10<<endl;
	cin>>n>>p.x>>p.y; 
	point poly[(int)n+1];
	for(int i=0; i<n; i++)
		cin>>poly[i].x>>poly[i].y;
	poly[(int)n].x=poly[0].x;
	poly[(int)n].y=poly[0].y;
	max1=dist(p,poly[0]);
	foot(poly[0],poly[1],p);
	if(max(dist(temp,poly[0]),dist(temp,poly[1]))<=dist(poly[0],poly[1]))
			min1=ldist(poly[0],poly[1],p);
	else
		min1=dist(p,poly[0]);
	//cout<<max(dist(temp,poly[0]),dist(temp,poly[1]))<<" "<<dist(poly[0],poly[1])<<endl;
	//cout<<"min "<<min1<<endl;
	for(int i=1; i<n; i++){
		max1=max(max1,dist(p,poly[i]));
		foot(poly[i],poly[i+1],p);
		//cout<<max(dist(temp,poly[i]),dist(temp,poly[i+1]))<<" "<<dist(poly[i],poly[i+1])<<endl;
		if(max(dist(temp,poly[i]),dist(temp,poly[i+1]))<=dist(poly[i],poly[i+1])){
			min1=min(min1,ldist(poly[i],poly[i+1],p));
			//cout<<poly[i].x<<" "<<poly[i].y<<" "<<poly[i+1].x<<" "<<poly[i+1].y<<" "<<" "<<p.x<<" "<<p.y<<endl;;
		}
		else
			min1=min(min1,dist(p,poly[i]));
		//cout<<"min "<<min1<<endl;
	}
	//cout<<min<<endl<<max<<endl;
	ans=pi*(pow(max1,2)-pow(min1,2));
	printf("%.15lf",ans);
}