#include <iostream>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--){
      long long c,k,w;
      cin>>c>>k>>w;
      if(c*w<=k){
          cout<<"yes"<<"\n";
      }
      else{
          cout<<"no"<<"\n";
      }
  }
}