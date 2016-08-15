#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    unsigned long long n;
    cin>>n;
    unsigned long long result=(n*(n+2)*(2*n+1))/8;
    cout<<result<<"\n";
  }
}