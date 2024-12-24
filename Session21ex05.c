#include<stdio.h>
int main(){
	FILE *f;
	char string[100];
	int n;
	printf("Ban hay nhap so dong: ");
	scanf("%d", &n);
	getchar();
	f=fopen("bt05.txt","w");
	for(int i=1; i<=n; i++){
		printf("Ban hay nhap bat ki noi dung vao dong %d: ", i);
		scanf("%s",&string);
		fprintf(f,"%s", string);
	}
	fclose(f);
	f=fopen("bt05.txt","r");
	for(int i=1; i<=n; i++){
		fgets(string, sizeof(string), f);
		printf("Dong %d cua file: %s", i, string);
		fclose(f);
	}
	return 0;
}
