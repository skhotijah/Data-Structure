#include <iostream>
using namespace std;

int sequentialSearch(int *array, int size, int key)
{
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == key)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	int size;
	cout << "\nInput Array : ";
	cin >> size;

	int array[size];
	int key;

	for (int i = 0; i < size; i++)
	{
		cout<<"\n Input value array  "<<i<<" :";
		cin >> array[i];
	}

	cout << "\nInput value that you want search : ";
	cin >> key;

	int index = sequentialSearch(array, size, key);
	if (index != -1)
	{
		cout << "\nThe value found in: " << index;
	}
	else
	{
		cout << "\nNot found";
	}

	return 0;
}
