#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("bt01.txt","r");
	char string[100];
	fgets(string, sizeof(string), f);
	printf("Dong dau tien cua file: %s", string);
	fclose(f);
	return 0;
}
