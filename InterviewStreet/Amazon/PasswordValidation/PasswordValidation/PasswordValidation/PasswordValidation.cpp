// PasswordValidation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

using namespace std;

void isPasswordValid(string a);

void main()
{
	isPasswordValid("cakeshop");
	isPasswordValid("ab34");
	isPasswordValid("123xy123");
}

void isPasswordValid(string a) {
bool isAlpha = false, isNumber = false, isMinLength = false;
	
	int size = a.length();
	
    for (int i = 0; i < size ; i++)
	{
		if(isalpha((int)a[i]) && !isAlpha)
			isAlpha=true;

		if(isdigit((int)a[i]) && !isNumber)
			isNumber=true;
	}



	if(!isAlpha || !isNumber)
	{
		printf("Rejected-Rule1 \n");
		if(!isAlpha)
		{
			//printf("No Alphabets, hence rejected \n");
			return;
		}
		if(!isNumber)
		{
			//printf("No digits, hence rejected \n");
			return;
		}
	}

	if(size < 5 || size > 12)
	{
		printf("Rejected-Rule2 \n");		
        return;
		//printf("Rejected because of too short \n");
	}
    
    printf("Accepted \n");		
    

}




