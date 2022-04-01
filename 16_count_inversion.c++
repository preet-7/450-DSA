#include<iostream>

using namespace std;

int CountInversion(int A[], int n){
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(A[i]>A[j])
				c++;
		}
	}
	return c;
}


int main(){
	int A[]={4,2,3,5,1};
	int n=sizeof(A)/sizeof(int);
	cout <<"number of count inversion "<<CountInversion(A,n);
	return 0;
}
