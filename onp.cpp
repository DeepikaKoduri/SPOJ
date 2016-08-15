#include <iostream>
#include<stack>
#include<cstring>
using namespace std;
 
int main() {
int n;
char input[1000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>input;
    stack <char> s;
    int cnt=0;
    for(int j=0;j<strlen(input);j++){
        if(isalpha(input[j])){
            cout<<input[j];
    }
    else{
        if(input[j]!=')'){
            s.push(input[j]);
        }
        else{
            char ch=s.top();
            while(ch!='('){
                cout<<ch;
                s.pop();
                ch=s.top();
            }
            s.pop();
            }
        }
    }
    cout<<"\n";