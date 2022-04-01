#include<iostream>
#include<algorithm>
using namespace std;

/*
int duplicate(int A[],int n){
	sort(A,A+n);
	for(int i=1;i<n;i++){
	    if(A[i-1]==A[i])
		    return A[i];
	}
	return -1;
}
*/

int duplicate(int A[],int n){
        for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
                     if((i!=j)&&(A[i]==A[j]))
                            return A[i];
		}
        }
        return -1;
}



void printA(int A[],int size){
	for(int i=0;i<size;i++){
		cout << A[i];
	}
	cout << endl;
}


int main(){
	int A[]={7,9,6,4,3,5,1,1};
	int n=sizeof(A)/sizeof(A[0]);
	printA(A,n);
	cout << "duplicate element  " <<    duplicate(A,n) <<  endl;
}
