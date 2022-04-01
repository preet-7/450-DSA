#include<iostream>
#include<unordered_set>
using namespace std;


bool subarrayexists(int A[], int n){
	unordered_set<int> sumset;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=A[i];
		if(sum==0 || sumset.find(sum)!=sumset.end())
			return true;
		sumset.insert(sum);
	}
	return false;



}

int main(){
	int A[]={1, 4, -2, -2, 5, -4, 3};
	int n=sizeof(A)/sizeof(int);
	if(subarrayexists(A,n)){
		cout <<"found subaray with sum 0";
	}
	else
		cout <<"no subarray exists";
	return 0;
}
