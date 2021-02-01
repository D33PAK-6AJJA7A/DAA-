#include<stdio.h>

#define max(X, Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
	int n,m;
	scanf("%d %d", &n, &m);

	int a[n]; int b[m];
	int maxa,maxb,maxall;
	maxa=maxb=maxall=-1;

	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		maxa =max(maxa,a[i]);
	}
	for(int i=0; i<m; i++)
	{
		scanf("%d",&b[i]);
		maxb= max(maxb,b[i]);
	}

	maxall = max(maxa,maxb);

	int ans_arr[n+m]; int p=0;
	for(int i=1; i<=maxall; i++)
	{
		bool isfoundA,isfoundB;
		isfoundB=isfoundA=false;
		for(int j=0; j<n; j++)
		{
			if(a[j]==i)
			{
				isfoundA=true;
				break;
			}
		}
		for(int j=0; j<m; j++)
		{
			if(b[j]==i)
			{
				isfoundB=true;
				break;
			}
		}

		if(isfoundA || isfoundB)
		{
			ans_arr[p]=i;
			p++;
		}
	}

	for(int i=0; i<p;i++)printf("%d ",ans_arr[i] );
	return 0;
}