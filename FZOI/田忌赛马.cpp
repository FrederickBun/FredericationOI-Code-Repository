#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N=2001;
int a[N],b[N];

void Scanf(int &x)
{
	x=0;
	char s=getchar();
	while(s<'0'||s>'9') s=getchar();
	while(s>='0'&&s<='9') x=x*10+s-'0',s=getchar();
}

int main()
{
	int Ans,n,la,lb,ra,rb,i;
	Scanf(n);
	for (i=1;i<=n;++i) Scanf(a[i]);
	for (i=1;i<=n;++i) Scanf(b[i]);
	sort(a+1,a+n+1),sort(b+1,b+n+1);
	Ans=0,la=lb=1,ra=rb=n;
	for (i=1;i<=n;++i)
	{
		if (a[ra]>b[rb]) Ans+=200,--ra,--rb;
		else if (a[ra]<b[rb]) Ans-=200,++la,--rb;
			 else if (a[la]>b[lb]) Ans+=200,++la,++lb;
			 	  else
			 	  {
			 	  	if (a[la]<b[rb]) Ans-=200;
			 	  	++la,--rb;
		 		  }
	}
	printf("%d\n",Ans);
	return 0;
}
