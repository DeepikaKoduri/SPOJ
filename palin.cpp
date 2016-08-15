#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
 
string reverse(string input){
    int len=input.size();
    int j=len-1;
    for(int i=0;i<len/2;i++){
        char temp;
        temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        j--;
    }
    return input;
}
 
 
int main()
{
  string input;
  int n;
  cin>>n;
  
  while(n--){
      cin>>input;
      int len=input.size();
      
      
      string palinclose;
      bool found=false;
        
      if(len%2==0){
          palinclose=input.substr(0,len/2)+reverse(input.substr(0,len/2));
      }
       else{
          palinclose=input.substr(0,len/2)+input[len/2]+reverse(input.substr(0,len/2));
          
       }
       for(int i=len/2;i<len;i++){
           if(palinclose[i]>input[i]){
               cout<<palinclose<<endl;
               found=true;
               break;
       }
       else if(palinclose[i]<input[i]){
           found=false;
           break;
       }
       }
       
       if(found)
        continue;
      
       if(len%2==0){
              int i=len/2-1;
              int j=len/2;
               while(i>=0&&j<=len){
                   int p =(int) palinclose[i]-'0';
                   if(p<9){
                       palinclose[i]=(char)(p+1+'0');
                       palinclose[j]=(char)(p+1+'0');
                       cout<<palinclose<<endl;
                       found=true;
                       break;
                   }
                   else{
                       palinclose[i]='0';
                       palinclose[j]='0';
                       i--;
                       j++;
                   }
               }
               if(!found){
                   palinclose=palinclose+'1';
                   palinclose[0]='1';
                   cout<<palinclose<<endl;
               }
                   
           }
           
           else{
               int mid=len/2;
               if((palinclose[mid]-'0')<9){
                   palinclose[mid]=palinclose[mid]+1;
                   cout<<palinclose<<endl;
                   continue;
               }
               else{
                   palinclose[mid]='0';
                   int i=mid-1;
                   int j=mid+1;
                   while(i>=0&&j<=len){
                   int p =(int) palinclose[i]-'0';
                   if(p<9){
                       palinclose[i]=(char)(p+1+'0');
                       palinclose[j]=(char)(p+1+'0');
                       cout<<palinclose<<endl;
                       found=true;
                       break;
                   }
                   else{
                       palinclose[i]='0';
                       palinclose[j]='0';
                       i--;
                       j++;
                   }
               }
               if(!found){
                   palinclose=palinclose+'1';
                   palinclose[0]='1';
                   cout<<palinclose<<endl;
               }
               }
           }
  }
  return 0;
 
}
 