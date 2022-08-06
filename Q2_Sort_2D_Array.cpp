#include<iostream>
using namespace std;

int main()
{
	char name[5][10];
	char temp[10];
	cout<<"End name will '.'"<<endl;
	for(int i=0;i<5;i++)
	{
		for (int j = 0; j < 10; j++)
		{		
			cin>>name[i][j];
			if(name[i][j]=='.')
				break;
		}
	}

	for(int k=0;k<5;k++)
	{
		for(int i=0;i<4;i++)
		{
			if(name[i][0]>name[i+1][0])
			{
				for (int j = 0; j < 10; j++)
				{
					temp[j]=name[i][j];
					name[i][j]=name[i+1][j];
					name[i+1][j]=temp[j];
				}
			}
		}
	}

	cout<<"Sorted Name: ";
	for(int i=0;i<5;i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout<<name[i][j];
			if(name[i][j]=='.')
				break;
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
