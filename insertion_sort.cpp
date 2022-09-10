#include <iostream>

void insertion_sort(int *arr, int size)
{
	int key, j;
	for (int i = 1; i < size; ++i)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && key < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	const int size = 5;
	int arr[size] = {4, 6 , 2 , 1, 8};
	insertion_sort(arr, size);
	for(int i; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}
