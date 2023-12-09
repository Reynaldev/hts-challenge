#include<iostream>
#include<string.h>

void printHelp()
{
	printf(
		"Example: ./level6 [-e | -d] [heloo | 'Hello World']\n"
		"-e = Encrypt the given text.\n"
		"-d = Decrypt the given text.\n"
	);
}

int main(int argc, char** argv) 
{
	// Argument check
	if (argc < 2)
	{
		printf("Invalid input.\n");
		printHelp();
		return -1;
	}
	else if (argc > 3)
	{
		printf("Too many arguments!\n");
		printHelp();
		return -1;
	}

	// Initialization
	char* cmd = argv[1];
	char* text = argv[2];

	// Parse argument
	switch ((int)cmd[1])
	{
		case 100:	// Decrypt	
			for (int i = 0; i < strlen(text); i++) { printf("%c", text[i] - i); }
			break;
		case 101:	// Encrypt	
			for (int i = 0; i < strlen(text); i++) { printf("%c", text[i] + i); }
			break;
		default:
			printf("No command argument provided.\n");
			printHelp();
			break;
	}	

	return 0;
}
