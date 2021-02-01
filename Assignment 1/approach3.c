#include<stdio.h>

#define max(X, Y) (((X) > (Y)) ? (X) : (Y))

bool binarySearch(int a[], int n , int x)
{
	int l,r;
	l=0; r=n-1;
	bool found=false;

	while(l<=r)
	{
		int mid = (l+r)/2;
		if(a[mid]==x)
		{
			found=true;
			break;
		}
		else if(a[mid]<x) l=mid+1;
		else r = mid-1;
	}
	return found;
}

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
 
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    int i = 0;
 
    int j = 0;
 
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;//returns recursively
    }
    int m = (l+r-1)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

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
	for(int i=0; i<m+n; i++)ans_array[i]=-1;

	mergeSort(a,0,n-1);
	mergeSort(b,0,m-1);

	int p1,p2; p1=p2=0;

	while(p1<n &&  p2<m)
	{
		if(a[p1]<b[p2])
		{
			if(!binarySearch(ans_array,p,a[p1]))
			{
				ans_array[p]=a[p1];
				p++;
			}
			p1++;
		}
		else if(a[p1]>b[p2])
		{
			if(!binarySearch(ans_array,p,b[p2]))
			{
				ans_array[p]=b[p2];
				p++;
			}
			p2++;
		}
		else
		{
			if(!binarySearch(ans_array,p,a[p1]))
			{
				ans_array[p]=a[p1];
				p++;
			}
			p1++; p2++;
		}
	}

	while(p1<n)
	{
		if(!binarySearch(ans_array,p,a[p1]))
		{
			ans_array[p]=a[p1];
			p++;
		}
		p1++;
	}
	while(p2<m)
	{
		if(!binarySearch(ans_array,p,b[p2]))
		{
			ans_array[p]=b[p2];
			p++;
		}
		p2++;
	}
	

	for(int i=0; i<p; i++)printf("%d ", ans_array[i]);
	return 0;
}