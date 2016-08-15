#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
 
int main(){
    int arr[3];
    int t;
    cin>>t;
    arr[0]=arr[1]=arr[2]=0;
    while(t--){
        string input;
        cin>>input;
        if(input[0]=='1'&& input[2]=='4'){
            arr[0]++;
        }
        else if(input[0]=='1'&& input[2]=='2'){
            arr[1]++;
        }
        else if(input[0]=='3'&& input[2]=='4'){
            arr[2]++;
        }
    }
    int count=1;
   
    count+=arr[1]/2;
    arr[1]=arr[1]%2;
    if(arr[1]==1){
        if(arr[0]>=2){
            arr[0]-=2;
            arr[1]=0;
        }
        count+=1;
    }
    count+=arr[2];
    int min;
    if(arr[2]<arr[0]){
        min=arr[2];
    }
    else
        min=arr[0];
    arr[0]-=min;
    count=count+(arr[0]+3)/4;
    
    cout<<count<<"\n";
}
 