#include <iostream>
using namespace std;
int main() {
	cout<<"Temperature Conversion C++"<<endl;
	float c, k, f, r;
	cout<<"Input (Celsius) : ";
	cin>>c;
	k=c+273.15;
	f=(c*1.8)+32;
	r=c*0.8;
	cout<<endl;
	cout<<"Result, Celsius to:"<<endl;
	cout<<"Kelvin     : "<<k<<endl;
	cout<<"Fahrenheit : "<<f<<endl;
	cout<<"Réaumur    : "<<r<<endl;
	
	return 0;
}
