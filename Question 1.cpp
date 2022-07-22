#include<iostream>
using namespace std;



int main(){
	float inches_from_user=0;
	float centimeter=0;
	
	
	cout<<"Enter Inches : ";
	cin>>inches_from_user;
	centimeter=inches_from_user*2.54;
	cout<<inches_from_user<<" Inches = "<<centimeter<<" Centimeters"<<endl;
	system("pause");
	return 0;
}
