#include <iostream>
using namespace std;
int fibo(int n,int * arr){
    if(n==0 || n==1)
    return 1;
    if(arr[n]>0)
    return arr[n];
    int output=fibo(n-1,arr)+fibo(n-2,arr);
    arr[n]=output;
    return output;
}
int main() {
	// your code goes here
	// to find the nth fibo element Mem
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++)
	arr[i]=0;
	int res=fibo(n,arr);
	cout<<res;
	return 0;
}
