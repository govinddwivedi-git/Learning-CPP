#include <iostream>
#include <string>

using namespace std;


int main()
{
	//dynamic arrays are used to declare an array in heap memory and we can change the size of these arrays at runtime, whereas we cannot change the size of static arrays at runtime
	//2D Jagged array in C++
	int rows;
	cout << "Enter no of rows of array: ";
	cin >> rows;
	int *numbers = new int[rows];   //array to store no of columns in each row;
	//declaration of array
	int **array = new int*[rows];   //jagged array

	for (int i = 0; i < rows; i++)
	{
		cout << "Enter no. of cols in row " << i << ": ";
		cin >> numbers[i];
		array[i] = new int[numbers[i]];
	}
	//Input values in array
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < numbers[i]; j++)
		{
			cout << "Row " << i << ":- Enter value " << j << ": ";
			cin >> array[i][j];
		}
	}
	//Output values of array
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < numbers[i]; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}