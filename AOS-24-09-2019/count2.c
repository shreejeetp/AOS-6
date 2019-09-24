//Made by Shreejeet Praveen, 19MCMB16

#include<stdio.h>
#include<stdlib.h>

void main(){
	int p[2];
	char s[1000000];
	FILE *fp=popen("./count", "w");
	FILE *fp1=fopen("a.txt","r");
	if(fp==NULL||fp1==NULL){
		printf("Error occurred\n");
		exit(0);	
	}
	while(fgets(s,10000,fp1)!=NULL){
		fputs(s,fp);
	}
	fputs("\0",fp);
	fclose(fp);
}