//Add two numbers.
//it contains n number of test case.
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int C[n],A[n],B[n],i;
	for(i=0;i<n;i++){
	    scanf("%d %d",&A[n],&B[n]);
	    C[n]=A[n]+B[n];
	    printf("%d\n",C[n]);
	}
	return 0;
}
