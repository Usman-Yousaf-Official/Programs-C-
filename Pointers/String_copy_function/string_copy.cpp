#include <iostream>
using namespace std;

myStringCopy(char *destination, char *source){
	while (*source != '\0'){
		*destination++ = *source++;
	}
	*destination = '\0';
}

main ()
{
	char string1[20] = "Amir";
	char string2[20];
	char *source, *destination;
	source = string1;
	destination = string2;
	
	myStringCopy(string2,string1);
	cout << string2;
}

