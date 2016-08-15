#include <iostream>
#include <math.h>
using namespace std;
 
double cosine (double a, double b, double c)
{
	double temp = ( a*a + b*b - c*c ) / (2.0 * a * b);
	return (temp);
}
 
int main()
{
    long long int t = 0;
    cin>>t;
	while(t--)
	{
		double AB, BC, AC, AD, BD, CD;
		double cos1, cos2, cos3;
		cin>>AB>>AC>>AD>>BC>>BD>>CD;
		cos1 = cosine(AD, BD, AB);
		cos2 = cosine(BD, CD, BC);
		cos3 = cosine(CD, AD, AC);
		double temp = sqrt( 1 + 2 * cos1 * cos2 * cos3 - cos1*cos1 - cos2*cos2 - cos3*cos3);
		double answer = AD * BD * CD * temp / 6;
		printf("%.4lf\n", answer);	
	}
}