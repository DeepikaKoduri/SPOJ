// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
      long long int n;
      cin>>n;
      long long int sum=0;
      for(long long int i=0;i<n;i++){
          long long int j;
          cin>>j;
          sum=(sum+j)%n;
      }
      sum=sum%n;
      if(sum)       
        cout<<"NO"<<"\n";
      else
        cout<<"YES"<<"\n";
  }
  
}
