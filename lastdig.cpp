#include <iostream>
using namespace std;
 
int powrem(int a, int b){
    if(b==0) return 1;
    int ret = powrem(a,b/2);
    ret *= ret;
    if(b&1) ret *= a;
    return ret%10;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
      int a,b;
      cin>>a;
      cin>>b;
      cout<<(int)powrem(a%10,b)<<"\n";
  }
}
 