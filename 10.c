#include<iostream>
using namespace std;

int max(int x, int y){
	return (x>y)?x:y;
}

int minJumps(int A[], int n){
	if(n<=1)
		return 0;
	if(A[0]==0)
		return -1;
	int maxReachIndex=A[0];
	int step=A[0];
	int jump=1;
	for(int i=1;i<n;i++){
		if(i==n-1)
			return jump;
		maxReachIndex=max(maxReachIndex,i+A[i]);
		step--;
		if(step==0){
			jump++;
			if(i>=maxReachIndex)
				return -1;
			step=maxReachIndex -i;
		}
	}
	return -1;
}



int main(){
	int A[]={1,3,5,8,9,2,6,7,6,8,9};
	int n= sizeof(A)/sizeof(int);
	cout << "Min number of jumps to reach end " << minJumps(A,n);
	return 0;
}
