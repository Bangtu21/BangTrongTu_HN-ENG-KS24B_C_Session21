#include<stdio.h>
int main(){
	FILE *f, *copy;
	char string;
	f=fopen("bt01.txt","r");
	copy=fopen("bt06.txt","w");
	while((string=fgetc(f))!=EOF){
		fputc(string,copy);
	}
	fclose(f);
	fclose(copy);
	printf("Da sao chep thanh cong.");
	return 0;
}
