#include <iostream>
using namespace std;
 
int main ()
{
  
int n, min, i, j;
  
cout << "enter size";
  cin >> n;
  
int A[n];
  
for (int i = 0; i < n; i++)
    {
      
cout << "enter values of arry";
      
cin >> A[i];
  
} 
 
for (i = 0; i < n; i++)
    {
      
min = i;
      
for (j = i + 1; j < n; j++)
	
	{
	  if (A[j] < A[min])
	    min = j;
	}
      
int temp = A[i];
      
A[i] = A[min];
      
A[min] = temp;
  
} 
for (i = 0; i < n; i++)
    {
      
cout << A[i] << endl;
    
}
  
return 0;

}


