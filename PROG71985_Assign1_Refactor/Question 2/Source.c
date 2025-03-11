#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define DAYS_IN_YEAR 365
#define MIN_INPUT 0

//Write a program that converts your age in years to days and displays both values.
//hard-code an age into the program and don’t worry about fractional years and leap years.

//madisont - prog71985 - assign1 refactor, q2

//previous feedback

//Question 2: Hard - coded age conversion
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and readable due 
//to the use of good variable names, data and function structure.The code is designed 'defensively' 
//(meaning garbage is kept out).The code allows for both effective testing and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs / modules, 
//demonstrating SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what the code 
//is accomplishing and how.)

int main(void) {

	//Get age input from user
	int age_in_years;

	printf("Please enter your age in years.\n");
	scanf("%d", &age_in_years);

	//validate input
	if (age_in_years < MIN_INPUT)
	{
		printf("ERROR: Input must be a positive value.\nExiting...\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		//transform
		//convert age in years to days
		int age_in_days = DAYS_IN_YEAR * age_in_years;

		//output
		//display both values
		printf("%d years old and %d days old.\n", age_in_years, age_in_days);

		return 0;
	}
}