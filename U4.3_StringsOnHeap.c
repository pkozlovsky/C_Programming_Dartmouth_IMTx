/*
You are working on programming a toaster (again!). 
The user of the toaster has the option to have their bread toasted 
"light" or "dark", and you are working on implementations in different 
languages of this particular setting. For example, in the German model, 
the settings would be stored as "hell" and "dunkel" instead. In order to 
be as efficient as possible with the use of the limited memory on the 
computer chip in the toaster you need to write a function "allocateString()"
 that allocates memory for strings (and you will then use this function to 
 allocate just enough memory to store the settings on a particular model).

This function "allocateString()" takes as argument an integer (of type int), 
representing the number of characters to allocate space for in memory. 
The function returns a pointer (of type char *), containing the address of the allocated memory. 
The function should use memory allocation to reserve the correct amount of space in memory. 
In order to receive credit for your solution you need to use sizeof (char) in this line, even if sizeof (char) returns 1.

In your main() function you should call the function allocateString() twice: 
once for the label containing the "light" setting and once for the "dark" setting.
 You are provided with some code already that explains precisely what you need to do. 
 Please do not change the code that has been given to you. Please only change those lines that say "// add a line of code...".

Example
Input
4 6
hell
dunkel
Output
Local settings: hell - dunkel
Note
You may submit as many solutions as you wish. Only your highest score will be kept.
*/
#include <stdio.h>
// Be sure to include any other library you may need...
#include <stdlib.h>
// Write your allocateString() prototype here
char* allocateString(int);


int main(void) {
    int lengthLight, lengthDark;
    char *strLight, *strDark;

    scanf("%d %d", &lengthLight, &lengthDark); 

    strLight = allocateString(lengthLight);
    strDark = allocateString(lengthDark);

    scanf("%s", strLight);
    scanf("%s", strDark);
    
    printf("Local settings: %s - %s\n", strLight, strDark);
    free(strLight);
    free(strDark);
	
    return 0;
}

char * allocateString(int numChars){

    char* ptr = (char*)malloc(numChars * sizeof(char));

    return ptr;
}
