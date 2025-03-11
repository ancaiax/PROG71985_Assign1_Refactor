#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "inputvalidation.h"

//madisont - prog71985 - assign1 refactor, q1 - input validation implementation

//Source file for input validation

//Alphabetical validation function

bool alphaValidation(char input[]) {

	for (int i = 0; i != strlen(input); i++)
	{
		if (!isalpha(input[i]))
		{
			return false;
		}
	}
	return true;
}