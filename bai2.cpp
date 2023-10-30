#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cout<<"so nguyen n=";cin>> n;
	i = 0;
	if (n >= 100) {
		i = n / 100 % 10;
		cout <<"chu so hang tram i= "<<i;
	}
 else
 {
 		cout<<"so khong co hang tram la 0"<<endl;
 }
	return 0;
}
