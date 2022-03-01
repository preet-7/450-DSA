#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
int maxsubAsum(int A[],int n){
	int local_max=0;
	int global_max=INT_MIN;
	for(int i=0;i<n;i++){
		local_max=max(A[i],A[i]+local_max);
		if(local_max > global_max){
			global_max=local_max;
		}
	}


	return global_max;
}

int main(){

	int A[]={1,-2,3,2,-5};
	int n= sizeof(A)/sizeof(A[0]);
	cout<<"MAX subarray sum "<<maxsubAsum(A,n)<<endl;

}
