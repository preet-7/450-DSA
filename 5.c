#include<iostream>
using namespace std;


void negative_first(int a[], int n){
	int i,j,temp;
	i=0;j=n-1;
	while(i<j){
		if(a[i]>=0 && a[j]>=0){
			j--;
		}
		else if(a[i]<0 && a[j]>=0){
			i++;
			j--;
		}
		else if(a[i]<0 && a[j]<0){
			i++;
		}
		else{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			i++;
			j--;

		}


	}
}

void printA(int a[], int n){
	int i;
	for(i=0;i<n;i++)
		cout << a[i]<< " ";
	cout << endl;
}


int main(){
	int a[]={2,-1,6,3,-9,0,-8};
	int n=sizeof(a)/sizeof(a[0]);
	printA(a,n);
	negative_first(a,n);
	printA(a,n);
	return 0;
}
