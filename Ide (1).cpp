#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
int main() {
	// your code goes here
	// to find the nth fibo element
	int n;
	cin>>n;
	int res=fibo(n);
	cout<<res;
	return 0;
}
