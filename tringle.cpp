#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int temp =n;
for(int i = 1; i <= n; i++ )
{
for(int j = 1; j <= temp; j++ )
cout << " ";
temp--;
for(int k = 1; k <= i; k++)
cout << " *";
cout << "\n";

}
cout << "\n\n\n\n";
return 29;

}