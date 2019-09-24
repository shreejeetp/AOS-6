#include<stdio.h>

void main(){
	char a;
	int c=0;
	while((a=getchar())!=EOF){
		if(a=='\n')
			c++;	
	}
	c++;
	printf("\nNumber of lines are:%d\n",c);
}