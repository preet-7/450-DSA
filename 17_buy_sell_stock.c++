#include<iostream>
#include<climits>
using namespace std;


int stock(int A[],int n) {
        int min = INT_MAX;
        int p = 0;
        int dif = 0;
        
        for(int i = 0; i < n; i++){
            if(A[i] < min){
                min = A[i];
            }
            diff = A[i] - min;
            if(p < dif){
                p = dif;
            }
        }
        return p;
    }

int main(){
	int A[]={7,1,5,3,6,4};
	int n=sizeof(A)/sizeof(int);
	cout << "best time to buy and sell stock " << stock(A,n);
}
