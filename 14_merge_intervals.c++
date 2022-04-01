#include<iostream>
#include<algorithm>

using namespace std;

struct Interval{
	int s,e;
};

bool mycomp(Interval A, Interval B){
	return A.s<B.s;
}

void merge_intervals(Interval A[],int n){
	sort(A,A+n,mycomp);
	int index=0;
	for(int i=1;i<n;i++){
		if(A[index].e>=A[i].s){
			A[index].e=max(A[index].e,A[i].e);
		}
		else{
			index++;
			A[index]=A[i];

		}

	}
	cout<<"merged intervals\n";
	for(int i=0;i<=index;i++){
		cout<<"["<<A[i].s<<"," <<A[i].e<<"]";
	}


}


int main(){

	Interval A[]={{1,3},{2,6,},{8,10},{14,17}};
	int n=sizeof(A)/sizeof(A[0]);
	merge_intervals(A,n);
	return 0;



}



