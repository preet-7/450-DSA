#include<iostream>
#include<algorithm>

using namespace std;

void printA(int A[], int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	
	}
}


void next_permutation(int A[],int n){
	int i =n-2;
	while(i>0 && A[i]>A[i+1]){
		i--;
	}
	if(i>=0){
		int j=n-1;
		while(A[j]<=A[i]){
			j--;
		}
		swap(A[i],A[j]);
	}

	i++;
	int l=n-1;
	while(i<l){
		swap(A[i],A[l]);
		i++;
		l--;
		          
	}
	printA(A,n);
}







int main(){
	int A[]={4,5,3,7,6,2};
	int n=sizeof(A)/sizeof(int);
	next_permutation(A,n);

}



//453762
//456732
//456237


