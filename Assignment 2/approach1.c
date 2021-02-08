#include<stdio.h>
int maxim (int lis[],int n){

	int max = lis[0];
	for(int i=0;i<n;i++)if(lis[i]>max)max=lis[i];

	return max;
}
int main(){
	int n,ans;
	scanf("%d",&n);

   int a[n][n];
   int row_wise_max[n];
   srand(time(0));         //else give same random numbers each time
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			a[i][j]=rand()%10;
     }
	
	int lis[n];
	
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++)lis[i]=1;

		for(int j=n-2;j>=0;j--){

			for(int k=n-1;k>j;k--){
                  
				   if(a[i][j]>=a[i][k]  && lis[j] < lis[k]+1)
				        lis[j] = lis[k] +1;
			}
		}
        
		row_wise_max[i] = maxim(lis,n);
	}


	ans = maxim(row_wise_max,n);
	printf("\n%d",ans);
}