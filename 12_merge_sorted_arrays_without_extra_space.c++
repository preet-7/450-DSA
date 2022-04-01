#include<iostream>
#include<vector>

#include<algorithm>
using namespace std;

void printA(int A[],int B[], int n, int m){
        for(int i=0;i<n;i++){
                cout<<A[i]<<" ";
        }
        cout <<" ";
        for(int i=0;i<m;i++){
                cout<<B[i]<<" ";

        }
        cout<<endl;

}

void mergeA(int A[], int B[], int n, int m) {
    for(int i=n-1;i>=0;i--){
	       for(int j=0;j<m;j++){
			if(A[i]>B[j]){
				swap(A[i],B[j]);
			}
		}
    }


    	    
    sort(A,A+n);
    sort(B,B+m);


}

int main(){
	int A[]={1,3,5,7};
	int B[]={0,2,6,8,9};
	int n = sizeof(A)/sizeof(int);
	int m = sizeof(B)/sizeof(int);
	printA(A,B,n,m);
	mergeA(A,B,n,m);
	printA(A,B,n,m);


}
