#include<iostream>
#include<algorithm>
using namespace std;

int getMinDiff(int A[], int n, int k){
	sort(A,A+n);
	int diff=A[n-1]-A[0];
	int tmin,tmax;
	tmin=A[0];
	tmax=A[n-1];
	for(int i=1;i<n;i++){
		tmin=min(A[0]+k,A[i]-k);
		tmax=max(A[i-1]+k,A[n-1]-k);
	        diff=min(diff,tmax-tmin);
	}
	return diff;
}

int main(){
	int A[]={1,10,14,14,14,15},k=6;
	int n=sizeof(A)/sizeof(A[0]);
	int diff=getMinDiff(A,n,k);
	cout <<diff;

}
