#include<iostream>
#include<algorithm>
using namespace std;


int bsearch(int A[],int l,int r,int x){
	if(l<=r){
		int mid=l+(r-l)/2;
		if(A[mid]==x)
			return mid;
		if(A[mid]>x)
			return bsearch(A,l,mid-1,x);
		return bsearch(A,mid+1,r,x);
	}
	return -1;


}

void unionA(int A1[],int A2[], int n1, int n2){
        if(n1>n2){
         int* temp=A1;
         A1=A2;
         A2=temp;

         int t=n1;
         n1=n2;
         n2=t;
        }
        sort(A1,A1+n1);
        for(int i=0;i<n1;i++)
                cout << A1[i]<<" ";
        for(int i=0;i<n2;i++)
                if(bsearch(A1,0,n1-1,A2[i]) ==-1)
                        cout<<A2[i]<<" ";
}
void intersectionA(int A1[],int A2[], int n1, int n2){
	if(n1>n2){
         int* temp=A1;
	 A1=A2;
	 A2=temp;

	 int t=n1;
	 n1=n2;
	 n2=t;
	}
	sort(A1,A1+n1);
	for(int i=0;i<n2;i++)
		if(bsearch(A1,0,n1-1,A2[i]) !=-1)
			cout<<A2[i]<<" ";
}



int main(){
	int A1[]={4,1,2,3,7,0};
	int A2[]={2,4,6,8};
	int n1=sizeof(A1)/sizeof(A1[0]);
	int n2=sizeof(A2)/sizeof(A2[0]);
	cout<<"UNION ";
	unionA(A1,A2,n1,n2);
	cout<< endl;
	cout<<"INTERSECTION ";
	intersectionA(A1,A2,n1,n2);
	return 0;
}
