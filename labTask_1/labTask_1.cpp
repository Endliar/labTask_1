#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    float C[15];

	float product = 1.0;
	float sum = 0;
	int count_above_avg = 0;
	float average;

	for (int i = 0; i < 15; i++)
	{
		printf("Enter an element C[%d]: ", i);
		scanf("%f", &C[i]);

		sum += C[i];
		if (C[i] != 0.0) product *= C[i];
	}

	average = sum / 15;
	printf("Your original array: \n");
	for (int i = 0; i < 15; i++)
	{
		if (C[i] > average) count_above_avg++;
		printf(" %.2f ", C[i]);
	}
	
	printf("\nTotal sum of all elements: %.2f \n", sum);
	printf("Product of non-zero elements: %.2f \n", product);
	printf("Arithmetic mean of elements: %.2f \n", average);
	printf("Number of elements exceeding the arithmetic mean: %d \n", count_above_avg);

	return 0;
}