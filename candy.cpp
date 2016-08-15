// CANDY
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int arr[10000];
  int t;
  cin>>t;
  int sum;
  while(t!=-1){
      sum=0;
      for(int i=0;i<t;i++){
          cin>>arr[i];
          sum+=arr[i];
      }
      if(sum%t!=0){
          cout<<-1<<"\n";
      }
      else{
          int count=0;
          int temp=sum/t;
          for(int i =0;i<t;i++){
              if(temp>arr[i]){
                  count+=(temp-arr[i]);
              }
          }
          cout<<count<<"\n";
      }
      cin>>t;
  }
  
}
