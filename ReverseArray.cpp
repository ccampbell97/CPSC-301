#include <iostream>

using namespace std;

void reverseArr(int *arr1, int end)
{
	int start = 0;
	while (start < end)
	{
		int temp = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = temp;
		start++;
		end--;
	}
}

void printArr(int *arr1, int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr1[i] << endl;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int i;
	printArr(arr1, 5);
	reverseArr(arr1, 4);
	printArr(arr1, 5);
	return 0;
}
