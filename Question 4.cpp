#include<iostream>
using namespace std;



int main(){
	
	//declare veriable 
	int num_from_user=0;  
	
	cout<<"Enter the number : ";	
	// get input from user
	cin>>num_from_user;	
	// Checking either number is postive or negative	
	if(num_from_user>=0){
		cout<<num_from_user<<" is positve Number \n";		
	}
	else {
		cout<<num_from_user<<" is negative Number  \n";
	}

	system("pause");
	return 0;
}
