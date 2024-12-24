#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("bt01.txt","w");
	char string[100];
	printf("Ban hay nhap mot chuoi bat ki: ");
	scanf("%s", &string);
	fprintf(f,"%s", string);
	fclose(f);	
	return 0;
}
