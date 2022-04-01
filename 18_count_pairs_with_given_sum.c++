#include<iostream>
using namespace std;
int count_pairs_with_given_sum(int A[],int n,int k){
	int c=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++){
			if((A[i]+A[j])==k)
				c++;
		}
	return c;
}


int main(){
	int A[]={1,5,7,1};
	int k=6;
	int n=sizeof(A)/sizeof(int);
	cout <<"count_pairs_with_given_sum "<<count_pairs_with_given_sum(A,n,k);
}
