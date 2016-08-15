#include<iostream>
using namespace std;
 
int num[1000001];
void cube_free()
{
 for(int i=0;i<1000001;i++){
     num[i]=0;
 }
 for(int i=2;i<=100;i++)
 {
  if(num[i]==0)
  {
   int k=i*i*i;
   for(int j=k;j<=1000000;j+=k)
    num[j]=-1;
  }
 }
 int k=1;
 for(int i=1;i<=1000000;i++)
  if(num[i]==0)
   num[i]=k++;
}
int main()
{
 cube_free();
 int t,n;
 scanf("%d",&t);
 for(int i=1;i<=t;i++)
 {
  scanf("%d",&n);
  if(num[n]!=-1)
   printf("Case %d: %d\n",i,num[n]);
  else
   printf("Case %d: Not Cube Free\n",i);
 }
 return 0;
} 