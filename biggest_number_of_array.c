#include <stdio.h>
int sort(int arr[], int size);

int main(int argc, char *argv[])
{
	int arr[5] = { 1, 5, 7, 3, 5};
	printf("The biggest is: %d\n", sort(arr, 5));

	return 0;
}

int sort(int arr[], int size)
{
	//Baseline number in which to compare elements.
	//I'm sure there's a better way to do this, but
	//This is the easiest.
	int biggest = -100;
	int j;

	//Iterate through the array and if arr[j] is bigger 
	//than the previous biggest, it then replaces it.
	for (j = 0; j < size; j++) {
		if (arr[j] > biggest) {
			biggest = arr[j];
		}
	}

	return biggest;
}