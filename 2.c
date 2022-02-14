#include<iostream>
using namespace std;


struct Pair
{
	int min;
	int max;
};

Pair getMinMax(int a[],int n){
	struct Pair p;
	int i;
        p.max=a[0];
	p.min=a[0];
	for(i=0;i<n;i++){
		if(a[i]>p.max){
			p.max=a[i];
		}
		if(a[i]<p.min){
			p.min=a[i];
		}
	}
        return p;
}

void printA(int a[],int size){
        for(int i=0;i<size;i++){
                cout << a[i];
        }
        cout << endl;
}

int main(){
	int a[]={ 3,6,9,8,5,3,1,2};
	int n=sizeof(a)/sizeof(a[0]);
	struct Pair p = getMinMax(a,n);
        printA(a,n);	
	cout<<"Min is " <<p.min<< endl;
	cout<<"Max is " <<p.max<<endl;
	return 0;
}

