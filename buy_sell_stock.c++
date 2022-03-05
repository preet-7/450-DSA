#include<iostream>
#include<climits>
using namespace std;


int stock(int A[],int n) {
        int t = INT_MAX;
        int p = 0;
        int d = 0;
        
        for(int i = 0; i < n; i++){
            if(A[i] < t){
                t = A[i];
            }
            d = A[i] - t;
            if(p < d){
                p = d;
            }
        }
        return p;
    }

int main(){
	int A[]={7,1,5,3,6,4};
	int n=sizeof(A)/sizeof(int);
	cout << "best time to buy and sell stock " << stock(A,n);
}
