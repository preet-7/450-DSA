#include<iostream>
using namespace std;


void sortA(int a[], int n){
	int i,c0=0,c1=0,c2=0;
	for(i=0;i<n;i++){
		switch(a[i]){
	         case 0:
			c0++;
			break;
		 case 1:
		        c1++;
			break;
		 case 2:
		        c2++;
		        break;
		}
	}
	
	i=0;
	while(c0>0){
		a[i++]=0;
		c0--;
	}
        while(c1>0){
                a[i++]=1;
                c1--;
        }
        while(c2>0){
                a[i++]=2;
                c2--;
        }
}

void printA(int a[], int n){
	int i;
	for(i=0;i<n;i++)
		cout << a[i] << " ";
	        cout << endl;
}

int main(){
	int a[]={0,1,1,2,1,2};
	int n =sizeof(a)/sizeof(a[0]);
	printA(a,n);
	cout << "Sorted" << endl;
	sortA(a,n);
	printA(a,n);
}


