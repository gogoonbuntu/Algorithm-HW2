#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100 /*size of integers array*/

int C_rec(n, k){
	if(k==0 && n>=0) return 1;
	if(n==0 && k>0) return 0;
	if(n==k) return 1;
	else return C_rec(n-1, k-1) + C_rec(n, k-1);
}

int C_dp(n, k){
	return 0;
}

int main(){
	printf("%d\n",C_rec(20, 10));
}