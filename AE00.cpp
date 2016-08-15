// RECTANGLES
#include <iostream>
#include <string>
using namespace std;
int main()
{
 int n;
 cin>> n;
 if(n==0){
     cout<<0;
     return 1 ;
 }
 int count=1;
 for(int i=2;i<=n;i++){
     for(int j=1;j<=i/2;j++){
         if(i%j==0&&j<=i/j){
             count++;
         }
 }
}
cout<<count;
}
