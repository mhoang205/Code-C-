#include <iostream>
using namespace std;
int main() {
	int a,tiendien;
		cout<<"So KW dien tieu thu=";cin>>a;
		
	if((a>=0)&& (a<100) ) {
	  tiendien=a*2000;
		cout<<"tiendien="<<tiendien;
	}
 else
 	if( ( a>101 )&&(a<200)) {
 	  tiendien=a*2500;
 		cout<<"tiendien="<<tiendien;	
	 }
 else
 	if( (a>201)&&(a<300)) {
 	  tiendien=a*3000;
 	  	cout<<"tiendien="<<tiendien;
	 }
 else
 	if(a>300) {
 	  tiendien=a*5000;
 	  	cout<<"tiendien="<<tiendien;
	 }
	 return 0;
}
