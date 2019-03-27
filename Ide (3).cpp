#include <iostream>
using namespace std;
int fibo(int n){
    int arr[n+1];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}
int main() {
	// your code goes here
	// to find the nth fibo element Mem
	int n;
	cin>>n;
	int res=fibo(n);
	cout<<res;
	return 0;
}
