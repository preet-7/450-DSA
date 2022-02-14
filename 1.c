#include<iostream>
using namespace std;

void reverseA(int a[],int l,int r){
	while(l<r){
		int t=a[l];
		a[l]=a[r];
		a[r]=t;
		l++;
		r--;
	}
}

void printA(int a[],int size){
	for(int i=0;i<size;i++){
		cout << a[i];
	}
	cout << endl;
}


int main(){
	int a[]={5,7,9,6,5,0,3};
	int n=sizeof(a)/sizeof(a[0]);
	printA(a,n);
	reverseA(a,0,n-1);
	cout << "Reversed Array" << endl;
	printA(a,n);

}

