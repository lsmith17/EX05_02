#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size - 1; i++)
	if (list[i] > list[i + 1])
		return false;

	return true;
}


int main()
{
	int list1[] =
	{
		1, 3, 16, 32
	};

	cout << "Is the int array sorted? " << (isSorted(list1, 4) ? "true" : "false") << endl;

	double list2[] =
	{
		2.0, 9.4, 2.7, 6.6
	};

	cout << "Is the double array sorted? " << (isSorted(list2, 4) ? "true" : "false") << endl;

	string list3[] =
	{
		"apple", "bee", "cat"
	};

	cout << "Is the string array sorted? " << (isSorted(list3, 3) ? "true" : "false") << endl;


	return 0;
}
