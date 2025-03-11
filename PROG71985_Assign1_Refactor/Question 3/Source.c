#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// Write a program which prompts the user to input two floats (allowing for fractional numbers) 
// and outputs their sum, product, and quotient
// sensible and informative input prompting and output messaging

//madisont - prog71985 - assign1 refactor, q3

//previous feedback

//Question 3: Input numbers and complete math operations
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and readable due to the 
//use of good variable names, data and function structure.The code is designed ‘defensively’(meaning garbage 
//is kept out).The code allows for both effective testing and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs / modules, demonstrating 
//SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what the code is 
//accomplishing and how.)

int main(void) {

	//input
	//prompt user to input two floats
	//validate both inputs
	float first_input;
	float second_input;

	printf("Please enter a number.\n");
	int symbols_returned = scanf("%f", &first_input);

	if (symbols_returned != 1) 
	{
		printf("Error: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}

	printf("Please enter a second number.\n");
	int symbols_returned2 = scanf("%f", &second_input);

	if (symbols_returned2 != 1) 
	{
		printf("Error: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}

	//transform
	//find sum, product, and quotient

	float sum = first_input + second_input;
	float product = first_input * second_input;
	float quotient = first_input / second_input;

	//output
	//output sum, product, quotient

	printf("The calculated sum is %f.\n", sum);
	printf("The calculated product is %f.\n", product);
	printf("The calculated quotient is %f.\n", quotient);

	return 0;
}