#include <stdio.h>
#include <string.h>
void main() {
	char str[1000];
	char spstr[1000];
	printf("Input string\n");
	gets(str);
	int j = 0;
	for (int i = 0; i < strlen(str); i++) {
		if(str[i] == ' ' && str[i+1] != ' ') {
			spstr[j++] = str[i];
		} else if(str[i] != ' '){
			spstr[j++] = str[i];
		}
	}
	printf("Output is: \n");
	printf(spstr);
}
