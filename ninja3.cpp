#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
 
long long int gcd(long long int a,long long int b){
    return b == 0 ? a : gcd(b, a % b);
}
 
int main(){
        int t;
        cin>>t;
        while(t--){
            long long int n, a,b;
            cin>>n>>a>>b;
            long long int g;
            if(a>b)
            	g=gcd(a,b);
            else 
            	g=gcd(b,a);
            for(int i=0;i<g;i++){
                cout<<n;
            }
            cout<<"\n";
        }
    }