#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
int sh[30001]={1},n,v,s;
int main()
{
	freopen("dp_1.in","r",stdin);
	scanf("%d%d",&n,&v);
	for(int i=1;i<=v;i++)
	{
		scanf("%d",&s);
		for(int j=20000;j>=1;j--)
			if((j-s) >=0)
				if(sh[j-s] == 1)
					sh[j] =1;
	}
	for(int i=n;i>=1;i--)
		if(sh[i] == 1)
			{
				printf("%d",n-i);
				return 0;
		}
	return 0;
}
