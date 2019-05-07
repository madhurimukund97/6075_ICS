#include<stdio.h>

void main() {
	char str[50];
	gets(str);
	int count =0;
	while(str[count]!='\0') {
		count =count+1;
	}
	char rev[50];
	for(int i =0;i<count;i++) {
		rev[i]= str[count-i-1];
	}
	printf("%s",rev);
}
