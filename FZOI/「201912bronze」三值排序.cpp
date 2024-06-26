#include <iostream>
using namespace std;
#define maxn 1000+5
int a[maxn];
int main()
{
   int N,num1,num2,num3,sum1,sum2,sum3;
   cin>>N;
   num1=num2=num3=sum1=sum2=sum3=0;
   for(int i=0;i<N;i++)
   {
       cin>>a[i];
       if(a[i]==1)
num1++;
else if(a[i]==2)
    num2++;
else num3++;
   }
   for(int i=0;i<num1;i++)
   {
       if(a[i]!=1)
        sum1++;
   }
   for(int i=num1;i<num1+num2;i++)
   {
       if(a[i]==3)
        sum2++;
   }
   for(int i=num1+num2;i<N;i++)
   {
 
       if(a[i]==2)
        sum3++;
   }
   cout<<sum1+max(sum2,sum3)<<endl;
    return 0;
}