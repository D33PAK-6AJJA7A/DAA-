#include<stdio.h>

#define max(X, Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
	int n,m;
	scanf("%d %d", &n, &m);

	int a[n]; int b[m];

	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0; i<m; i++)
	{
		scanf("%d",&b[i]);
	}

	int ans_array[m+n]; int p=0;

	for(int i=0; i<n; i++)
	{
		int l,r;
		l=0; r=p-1;
		int pos=-1;
		bool found=false;

		while(l<=r)
		{
			int mid = (l+r)/2;
			if(ans_array[mid]==a[i])
			{
				found=true; break;
			}
			if(ans_array[mid]<a[i])
			{
				pos=mid;
				l= mid+1;
			}
			else r=mid-1;
		}

		if(found)continue;
		else
		{
			for(int j=p; j>pos+1; j--)
				ans_array[j]=ans_array[j-1];
			ans_array[pos+1]=a[i];
			p++;
		}
		
	}

	for(int i=0; i<m; i++)
	{
		int l,r;
		l=0; r=p-1;
		int pos=-1;
		bool found=false;

		while(l<=r)
		{
			int mid = (l+r)/2;
			if(ans_array[mid]==b[i])
			{
				found=true; break;
			}
			if(ans_array[mid]<b[i])
			{
				pos=mid;
				l= mid+1;
			}
			else r=mid-1;
		}

		if(found)continue;
		else
		{
			for(int j=p; j>pos+1; j--)
				ans_array[j]=ans_array[j-1];
			ans_array[pos+1]=b[i];
			p++;
		}
		
	}

	for(int i=0; i<p; i++)printf("%d ", ans_array[i]);
	return 0;
}