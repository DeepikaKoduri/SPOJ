
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--){
      long long int result=1;
      string num;
      cin>>num;
      for(int i=0;i<num.size();i++){
        if(num[i]==num[i-1]){
            result*=2;
        }
      }
      cout<<result<<"\n";
  }
  
}