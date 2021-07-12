#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,x=0;
	for(int i=a;i<=10;i++){
		x=a+b;
		a=b;
		b=x;
		cout<<a<<" ";
	}
	return 0;
}
