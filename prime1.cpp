#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
 
const int SIZE =32000;
const int MAXSIZE =100000;
 
 
int myPrimes[MAXSIZE];
 
int getallPrimes(int N) 
{
int i=0,j=0;
bool IsPrime[MAXSIZE];
for(i=2;i<MAXSIZE;i++)
{
IsPrime[i]=true;
myPrimes[i]=0;
}
int myRange=floor(sqrt((double)N)); 
 
int k=floor(sqrt((double)myRange));
for(i=2;i<=k;i=i++)
{
if(IsPrime[i]==true)
{
for(j=i*i;j<=myRange;j=j+i)
{
IsPrime[j]=false; 
}
}
}
int count=0; 
for(i=2;i<=myRange;i++)
{
if(IsPrime[i] == true) 
{
myPrimes[count++]=i; 
}
}
return count;
}
 
int main()
{
int T;
scanf("%d",&T);
int i,p=0,s;
 
int N;
int M;
bool primesNow[MAXSIZE];
 
while(T--)
{
scanf("%d %d",&M,&N);
 
for(i=0;i<MAXSIZE;i++)
primesNow[i]=true;  
 
int count=getallPrimes(N); 
 
for(i=0;i<count;i++)  
{
p=myPrimes[i]; 
s=M/p;
s=s*p;
 
for(int j=s;j<=N;j=j+p)
{
if(j<M) continue; 
primesNow[j-M]=false;
}
}
 
for(int i=0;i<count;i++)     
{                         
if(myPrimes[i]>=M && myPrimes[i]<=N) 
cout<<myPrimes[i]<<endl; 
}
 
for(int i=0;i<N-M+1;++i) 
{
if(primesNow[i] == true && (i+M)!=1) 
cout<<i+M<<endl; 
}}
system("pause");
return 0;
}