#include <stdio.h>

#define LIMIT 100 /*size of integers array*/

int C_rec(n, k){
	if(k==0 && n>=0) return 1;
	if(n==0 && k>0) return 0;
	if(n==k) return 1;
	else return C_rec(n-1, k-1) + C_rec(n-1, k);
}

int C_dp(n, k){
	int a[LIMIT][LIMIT] = {0, }, i, j;

	for( i=0 ; i<=n ; i++ )
		for( j=0 ; j<=k ; j++ ){
			if(i==j || j==0) a[i][j]=1;
			else a[i][j] = a[i-1][j-1] + a[i-1][j];
		}

	return a[n][k];
}

int main(){
	printf("recursive : %d\n",C_rec(20, 10));
	printf("dp        : %d\n",C_dp(20, 10));
	printf("by 21400688 jsy\n");
}