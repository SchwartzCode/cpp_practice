#include <iostream>
#include <stdlib.h>

using namespace std;

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		float result = atof(argv[1]) + atof(argv[2]);
		cout << result << endl;
	} else {cout << "Please enter exactly two floats." << endl;}

}
