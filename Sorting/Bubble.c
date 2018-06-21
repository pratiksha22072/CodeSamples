#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);       //Input number of test cases
	while(t--){
	    int n;
	    scanf("%d",&n);     //Input number of elements
	    int a[n],i,j,temp=0;
	    for(i=0;i<n;i++)        //Input elements
	        scanf("%d",&a[i]);
	
	    for(i=0;i<n-1;i++){
	        for(j=0;j<n-i-1;j++){
	            if(a[j]>a[j+1]){
	                temp = a[j];     
	                a[j] = a[j+1];        //Swap
	                a[j+1] = temp;
	            }
	        }
	    }
	    for(i=0;i<n;i++){
	        printf("%d ",a[i]);
	    }
	    printf("\n");
	       
    }
	return 0;
}
