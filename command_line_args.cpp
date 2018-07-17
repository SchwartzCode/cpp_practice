#include <iostream>
using namespace std;

int main ()
{
	cout << "Enter two integers: " << endl;
	int pizza, pie;
	scanf("%d %d",&pizza, &pie);
	
	int sum = pizza+pie;
	cout << pizza << " + " << pie << " = " << sum << endl;

	return 0;
}
