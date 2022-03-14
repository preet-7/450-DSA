#include<iostream>

using namespace std;

void find_common(int A1[],int A2[],int A3[],int n1,int n2, int n3){
	int i=0,j=0,k=0;
	while(i<n1 && j<n2 && k<n3){
		if(A1[i]==A2[j] && A2[j]==A3[k]){
			cout << A1[i] <<" ";
			i++;
			j++;
			k++;
		}
		else if(A1[i]<A2[j])
			i++;
		else if(A2[j]<A3[k])
			j++;
		else
			k++;
	}
}

int main(){
	int A1[]={1,5,10,20,40,80};
	int A2[]={6,7,20,80,100};
	int A3[]={3,4,15,20,70,80,120};
	int n1=sizeof(A1)/sizeof(int);
	int n2=sizeof(A2)/sizeof(int);
        int n3=sizeof(A3)/sizeof(int);
	cout <<"common elements are ";
	find_common(A1,A2,A3,n1,n2,n3);
	return 0;
}
