#include <iostream>
#include <math.h>
using namespace std;
 
double area (double a, double b, double c)
{
	double t=(a+b+c)/2.0;
    double out=sqrt(t*(t-a)*(t-b)*(t-c));
    return out;
}
 
int main()
{
    long long int t = 0;
    cin>>t;
	while(t--)
	{
		double u,v,w,U,V,W;
		cin>>u>>v>>w>>W>>V>>U;
		double volume;
		double sa=0;
		sa=area(u,V,w)+area(W,u,v)+area(W,V,U)+area(U,v,w);
		volume=sqrt(4*u*u*v*v*w*w- u*u*(v*v+w*w - U*U)*(v*v+w*w-U*U) - v*v*(w*w+u*u - V*V)*(w*w+u*u-V*V) - w*w*(u*u + v*v - W*W)*(u*u+v*v-W*W) + (v*v +w*w - U*U)*(w*w+u*u- V*V)*(u*u+v*v - W*W))/12;
        printf("%.4lf\n",volume*3.0/sa);
	}
}