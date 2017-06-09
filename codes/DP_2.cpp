#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

int pre[100],now[100],n,v,w,c;

int main()
{
	freopen("dp_2.in","r",stdin);
	scanf("%d%d",&n,&v);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&w,&c);
		for(int j=w;j<=v;j++)
		{
			if((pre[j-w] + c) > pre[j])
				now[j] = pre[j-w] + c;
			}
		for(int j=0;j<=v;j++)
			{
			pre[j] = now[j];
			printf("%d ",pre[j]);
			}
		printf("\n");
	}
	return 0;
}
