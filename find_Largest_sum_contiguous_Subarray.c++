#include<iostream>
#include<climits>

using namespace std;

void MaxSubArray(int A[], int n){
        int max_so_far= INT_MIN, max_ending_here=0;
	int start=0,end=0,s=0;

	for(int i=0;i<n;i++){
		max_ending_here+=A[i];
		if(max_so_far < max_ending_here){
			max_so_far=max_ending_here;
			start=s;
			end=i;
		}
		if(max_ending_here<0){
			max_ending_here=0;
			s=i+1;
		}
	}
	cout <<"Sum "<<max_so_far<<endl;
        cout << "start " <<start << endl << "end " <<end<<endl;       
}

int main(){
	int A[]={-2,4,-3,7,1,-4};
	int n= sizeof(A)/sizeof(A[0]);
	MaxSubArray(A,n);
	return 0;
}
