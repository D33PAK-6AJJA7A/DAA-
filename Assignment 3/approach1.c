#include<stdio.h>
#include<stdlib.h>

int min(int x, int y) { return (x<y)? x :y; }

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;

    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int n)
{
   int curr_size;     
   int left_start;  
   for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size)
   {
       for (left_start=0; left_start<n-1; left_start += 2*curr_size)
       {
           int mid = min(left_start + curr_size - 1, n-1);
         int right_end = min(left_start + 2*curr_size - 1, n-1);
         merge(arr, left_start, mid, right_end);
       }
   }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0; i<n ;i++)
        scanf("%d", &arr[i]);

    mergeSort(arr,n);

    for(int i=0; i<n ;i++)
        printf("%d ", arr[i]);
    return 0;
}
