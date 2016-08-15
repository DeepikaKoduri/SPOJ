#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
 
int main(){
    int b,g;
    cin>>b>>g;
    while(b!=-1&&g!=-1){
        int result=0;
        if(b>g){
            result=ceil((double)b/(g+1));
        }
        else{
            result=ceil((double)g/(b+1));
        }
        cout<<result<<"\n";
        cin>>b>>g;
    }
}
 