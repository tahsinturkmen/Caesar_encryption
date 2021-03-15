/*
@file    : Word string encryption
@author  : Tahsin TURKMEN
@brief   : this file is designed to encrypt words and decrypt passwords
*/

/* SEZAR encryption method, written to encrypt
 the entered word string and decrypt it again.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>


#define ceasar_constant (3)


int main()
{

/*
defined two different variables of char type and 
four different variables of int type.
*/
	
char name[50];
char encryption[50];	
int a,b;

/* color setting of system backside. */

system("color 02");

/* user is asked to enter words */ 

printf("************ENTER THE WORD WANT TO ENCRYPT*************\n");
scanf("%s",name);

strlwr(name);                     /* if the entered word has uppercase letters, the function converts it to lowercase. */
		
/* 
Loop that adds decimal value
to three and creates a new character
*/	
	
for( size_t i = 0; i < strlen(name); i++)
{	

	// Condition loop limiting the letters a to z.
	if(name[i] == 'z')
    {
    	name[i] = 'a' - 1;	
	}

name[i] = name[i] + ceasar_constant;

/*
The function that copies the encrypted form of
the word we include in the name to array named password.
*/
strcpy(encryption,name);	
}

flag:
printf("  \n\n****Enter The Number 1 To Convert The Text To Caesar Cipher ****\n\n");
scanf("%d",&a);


	if(a !=1 )
	{
		printf("You Entered The Wrong Number\n");
	    goto flag;	
	}
		printf("\nEncryption:\t%s\n",encryption);	
	
printf("  \n\n****Enter The Number 2 To Decoded Caesar Encryption****\n\n");
scanf("%d",&b);
	
if( b==2 )
{
	
// Function to convert lowercase letters to uppercase...
		
	for(size_t j = 0 ; j < strlen(encryption); j++)
	{
		if(encryption[j] == 'c')
    		{
    			encryption[j] = 'z' + 3;	
			}
	
	encryption[j] = encryption[j] - ceasar_constant;
	strcpy(name,encryption);	
	
	}

printf("\n Encryption Decoded :\t%s",name);

}

return 0;	
}
