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
      int key;
      char message[100000];
      cin>>key>>message;
      int len=strlen(message);
      string result="";
      for(int i=0;i<len;i++){
          if(message[i]=='.'){
             result+=" ";
          }
          else{
              result+=((message[i] - (isupper(message[i])?'A':'a')) + key) % 26 +
                    ((((bool)isupper(message[i])) == (key <= 25))?'A':'a');
          }
      }
      
      cout<<result<<"\n";
  }
}
 