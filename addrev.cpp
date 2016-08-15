// ADDREV.cpp
#include <iostream>
#include <string>
using namespace std;

long long int reverse(long long int a){
    long long int b=0;
    while(a){
        b=(b*10)+(a%10);
        a=a/10;
    }
    return b;
}

int main()
{
 int t;
 cin>>t;
 while(t--){
     long long int m,n;
     cin>>m>>n;
     cout<<reverse(reverse(m)+reverse(n))<<"\n";
     
 }
}
