#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
int maxsubAsum(int A[],int n){
	int local_max=0;
	int global_max=INT_MIN;
	int start=0,end=0,s=0;
	for(int i=0;i<n;i++){
		local_max=max(A[i],A[i]+local_max);
		if(local_max > global_max){
			global_max=local_max;
//			start=s;
//			end=i;
		}
/*	
		if(local_max<0){
			local_max=0;
			s=i+1;
		}
*/		
	}

      //  cout<<start << " " <<end<< " "<<endl; 
	return global_max;
}

int main(){

	int A[]={1,-2,3,2,-5};
	int n= sizeof(A)/sizeof(A[0]);
	cout<<"MAX subarray sum "<<maxsubAsum(A,n)<<endl;

}
