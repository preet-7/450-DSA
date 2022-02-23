#include<iostream>
using namespace std;

void rotateA(int A[], int n){
	int i=0, j=n-1;
	while(i!=j){
		swap(A[i],A[j]);
		i++;
	}
}


int main(){
	int A[]={3,1,1,4,3,1,8,6,4,2,5};
	int n=sizeof(A)/sizeof(A[0]);
	for(int i=0;i<n;i++)
		cout << A[i] << " ";
	rotateA(A,n);
	cout<<"\n Rotated \n" ;

        for(int i=0;i<n;i++)
                cout << A[i] << " ";
	return 0;
}
