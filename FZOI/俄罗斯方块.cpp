#include<cstdio>
int n,a,tag;
bool pos=true;
signed main(void){
	scanf("%d",&n);
	scanf("%d" ,&a);
	tag =(a&1);
	for(int i=1;i<n;i++){
		scanf("%d",&a);
		if((a&1)!=tag){
			pos=false;
		}
	}
	printf("%d\n",pos?1:0);
	return 0;
}