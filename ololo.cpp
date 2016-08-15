#include <iostream>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);
  int result=0;
  while(n--){
      int i;
      scanf("%d",&i);
      result^=i;
  }
  printf("%d",result);
      
}
 