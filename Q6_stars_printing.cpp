#include <iostream>
using namespace std;




int main()
{int x;
	cout<<"enter number of star want : ";
	cin>>x;
	for(int i=0;i<=x;i++){
		
		for(int j=0;j<i;j++)
		{
		
			cout<<"*";
		}
			cout<<endl;
	}




	return 0;
}

/*
Output:
*
**
***
****
*****
******
*******
********
*********
**********
*/

