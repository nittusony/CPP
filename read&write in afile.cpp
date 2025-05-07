#include<stdio.h>
main()
{
	char st[20]="hyderabad";
	char st1[20];
	FILE *ptr;
	ptr=fopen("C:/Users/sony/Documents/hi.txt","w");
	fprintf(ptr,"%s",&st1);
	printf("%s",st1);
}
