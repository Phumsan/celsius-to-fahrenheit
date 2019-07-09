/*ภูมิสรรค์ ทองคำ 6206021630031*/
#include<iostream>
using namespace std;
void main()
{
	int celsius ;
	cout << "Enter celsius : ";
	cin >> celsius;
	float Fahrenheit(0);
	Fahrenheit = (1.8*celsius)+32;
	cout << "Fahrenheit = "<<" "<< Fahrenheit <<endl;
	cout << "Now weather in Thailand is"<<" "<<((Fahrenheit > 70)? "Hot":"cool")<<endl;
}