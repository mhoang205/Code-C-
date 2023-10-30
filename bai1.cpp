#include <iostream>
#include <Math.h> 
using namespace std;
int main() {
	double a,b,hieu;
		
		cout<<"a=";cin>>a;
		cout<<"b=";cin>>b;
	if(a>b) {
		cout<<"a lon hon b"<<endl;
	}

 else if(b>a) {
 		cout<<"b lon hon a"<<endl;
	 }
 else
 {
 		cout<<"hai so bang nhau"<<endl;
 }
 	hieu=abs(a-b);
 	cout<<"Hieu duong cua 2 so la : "<<hieu;
	 return 0;
}
