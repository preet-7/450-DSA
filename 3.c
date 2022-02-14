#include<iostream>
#include<algorithm>

using namespace std;
struct couple{
	int kmin;
	int kmax;
};

couple kth(int a[], int n, int k){
	struct couple p;
	sort(a,a+n);
	p.kmin=a[k-1];
	p.kmax=a[n-k];
	return p;
}

int main(){
	int a[]={8,5,3,6,2,4,1,9,7,0};
	int n=sizeof(a)/sizeof(a[0]),k=2;
	struct couple p;
	p=kth(a,n,k);
	cout << "kth small" << p.kmin <<endl;
	cout << "kth large" <<p.kmax <<endl;
}

