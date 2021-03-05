#include<stdio.h>
#include<stdlib.h>

int max(int x, int y) { 
    return (x>y)? x :y; 
}
int min(int x, int y) { 
    return (x<y) ? x : y; 
}

void merge(int arr[], int l, int m, int r) {
    int maxA,maxB,maxAll,k=l;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i],
        maxA= max(L[i],maxA);

    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j],
        maxB= max(R[j],maxB);
 
    maxAll = max(maxA,maxB);

    for(int i=1; i<maxAll; i++) {
        for(int j=0; j<n1; j++) {
            if(L[j]==i)
                arr[k]=i,k++;
        }
        for(int j=0; j<n2; j++) {
            if(R[j]==i)
                arr[k]=i,k++;
        }
    }
}

void mergeSort(int arr[], int n) {
   int curr_size;     
   int left_start;  
   for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size) {
       for (left_start=0; left_start<n-1; left_start += 2*curr_size) {
           int mid = min(left_start + curr_size - 1, n-1);
         int right_end = min(left_start + 2*curr_size - 1, n-1);
         merge(arr, left_start, mid, right_end);
       }
   }
}

int main() {
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
