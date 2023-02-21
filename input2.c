#include <stdio.h>
void main()
{
	char fnames[30];
	char description[500000];

	printf("Enter your names\n");
	scanf("%[^\n]s", fnames);
	getchar();
	printf("Tell us a little about yourself\n");
	scanf("%[^\n]s", description);
	printf("My name is %s and %s\n", fnames, description);
}
