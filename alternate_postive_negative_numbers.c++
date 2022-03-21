#include<iostream>
using namespace std;



void parray(int A[],int n){
	for(int i=0; i<n;i++)
		cout<<A[i]<<" ";
	cout <<endl;
}

void rightrotate(int A[],int n, int outofplace, int cur){
	char tmp=A[cur];
	for(int i=cur; i>outofplace; i--){
		A[i]=A[i-1];
	}
	A[outofplace]=tmp;
}

void rearrange(int A[],int n){
	int outofplace =-1;
	for(int index=0;index<n;index++){
		if(outofplace >=0){
			if(((A[index]>=0)&& (A[outofplace]<0)) || ((A[index]<0) && (A[outofplace]>=0))){
				rightrotate(A,n,outofplace,index);
				if(index-outofplace >=2)
					outofplace =outofplace+2;
				else
					outofplace=-1;
			
			}
		
		}
		if(outofplace==-1){
			if(((A[index]>=0) && (!(index & 0x01))) || ((A[index]<0) && (index & 0x01))) {
			outofplace =index;
			}  
		}
	}
}

int main(){
	int A[]= {-5,-2,5,2,4,7,1,8,0,-8};
	int n= sizeof(A)/sizeof(int);
	parray(A,n);
	rearrange(A,n);
	cout<<"rearranged array" <<endl;
	parray(A,n);
	return 0;
}
