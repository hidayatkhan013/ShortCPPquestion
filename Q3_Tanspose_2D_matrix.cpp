#include <iostream>
using namespace std;




int main()
{ int x[3][3],y[3][3];

for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			{
				cout<<"enter values : ";
				cin>>x[i][j];
			}
	}
	
	
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<x[i][j]<<" ";
	}
	cout<<endl;
}

cout<<"The transpose of "<<endl;

for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		y[i][j]=x[j][i];
		cout<<y[i][j]<<" ";
	}
	cout<<endl;
}


	return 0;
}

