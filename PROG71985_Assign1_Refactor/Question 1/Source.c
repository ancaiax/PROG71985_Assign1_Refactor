#define _CRT_SECURE_NO_WARNINGS		//added for scanf function
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "inputvalidation.h"
#define MAX_LENGTH 20

// write a program that uses one printf() call to print your first name and last name on one line,
// uses a second printf() call to print your first and last names on two separate lines,
// and uses a pair of printf() calls to print your first and last names on one line

//madisont - prog71985 - assign1 refactor, q1

//previous feedback

//Question 1: Formatted printing of name
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//—Including a newline in your final printf statement will improve user experience
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and readable 
//due to the use of good variable names, data and function structure.The code is designed ‘defensively’
//(meaning garbage is kept out).The code allows for both effective testing and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs / modules, 
//demonstrating SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what the code is 
//accomplishing and how.)

int main(void) {

	char first_name[MAX_LENGTH];		//added variables for assigning strings
	char last_name[MAX_LENGTH]; 

	//Get first name from user
	printf("Please enter your first name.\n");
	scanf("%s", first_name);
	
	bool isvalid = alphaValidation(first_name);			//calling input validation function

	if (isvalid == false)								//validating return
	{
		printf("ERROR: Input must be alphabetical.\nExiting...\n");
		exit(EXIT_FAILURE);
	}

	//Get last name from user
	printf("Please enter your last name.\n");
	scanf("%s", last_name);

	isvalid = alphaValidation(last_name);

	if (isvalid == false)								//validating return
	{
		printf("ERROR: Input must be alphabetical.\nExiting...\n"); 
		exit(EXIT_FAILURE);
	}
	
	//print first and last names on one line
	printf("\n%s %s\n", first_name, last_name);

	//print first and last names on two separate lines
	printf("%s\n%s\n", first_name, last_name);

	//use a pair of printf() to print first and last names on one line
	printf("%s ", first_name); 
	printf("%s\n", last_name);					//added \n to improve user experience

	return 0;
}