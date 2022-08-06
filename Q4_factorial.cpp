#include <iostream>
using namespace std;

int main()
{
	int n;
	int factorial = 1;

    cout << "Enter a integer: ";
    cin >> n;
    if (n<0){
        std::cout<<"entred number must not be less than zero\n";
        return 0;
    }

    for(int i = 1; i <=n; i++)
    {
        factorial = factorial * i;
    
    }

    cout << "Factorial of " << n << " = " << factorial;    
    return 0;
}

