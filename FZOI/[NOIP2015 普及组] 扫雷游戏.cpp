#include<stdio.h>
char a[101][101];

int main()
{
	
	int n, m;
	scanf("%d%d", &n,&m);
	getchar();
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 1; j <= m; j ++ )
		{
			scanf("%c", &a[i][j]);
		}
		getchar();
		
	}
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{

			if (a[i][j] == '*')
			{
				printf("*");
			}
			else
			{
				int count = 0;
				if (a[i][j - 1] == '*') count ++ ;
				if (a[i][j + 1] == '*') count ++ ;
				if (a[i + 1][j - 1] == '*') count ++ ;
				if (a[i - 1][j + 1] == '*') count ++ ;
				if (a[i + 1][j] == '*') count ++ ;
				if (a[i - 1][j] == '*') count ++ ;
				if (a[i + 1][j + 1] == '*') count ++ ;
				if (a[i - 1][j - 1] == '*') count ++ ;
				printf("%c", count+'0');
			}

			
		}
		printf("\n");
	}
}
