
#include<iostream>
using namespace std;



int main(){
	float radius_from_user=0;
	float s_area=0;
	float s_volume=0;
	float pi=3.14;
	
	
	
	cout<<"Enter Radius of sphere : ";
	cin>>radius_from_user;
	s_area=4*3.14*radius_from_user*radius_from_user;
	s_volume=(pi*radius_from_user*radius_from_user*radius_from_user)*4/3;

	
	cout<<"Area of sphere  = "<<s_area<<" and Volume = "<<s_volume<<endl;
	system("pause");
	return 0;
}
