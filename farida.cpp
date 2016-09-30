#include <iostream>
using namespace std;
long long max(long long a, long long b){
    return a>b?a:b;
}

int main()
{
  long long t;
  long long m[10001],c[10001];
  cin>>t;
  long long count=0;
  while(t--){
     count++;
     long long n;
     cin>>n;
     for(int i=0;i<n;i++){
         cin>>m[i];
         c[i]=-1;
     }
     c[0]=m[0];
     if(n>1)
        c[1]=max(m[0],m[1]);
      for(int i=2;i<n;i++){
        c[i]=max(m[i]+c[i-2],c[i-1]);
      
     }
     cout<<"Case "<<count<<": "<<c[n-1]<<"\n";
  }
}