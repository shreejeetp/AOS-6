//made by shreejeet praveen, 19mcmb16

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

void main(){
int c1=1,c2=1,c3=1,c4=1,n4=4001;
while(c1=fork()){
	wait(NULL);
	if((c2=fork())==0)
		break;
	wait(NULL);
	if((c3=fork())==0)
		break;
	wait(NULL);
	if((c4=fork())==0)
		break;
	
	printf("This is Parent process");
	wait(NULL);	
	while(n4<=5000){
		printf(" %d ",n4);		
		n4++;
	}
	break;
}
int n1=0;
//printf("%d\t%d\t%d\t%d\t",c1,c2,c3,c4);
if(c1==0){
	printf("This is c1");
	while(n1<=1000){
		printf(" %d ",n1);		
		n1++;
	}
	printf("\n");
}
int n2=1001;
if(c2==0){
	printf("This is c2");
	while(n2<=2000){
		printf(" %d ",n2);		
		n2++;
	}
	printf("\n");
}
int n3=2001;
if(c3==0){
	printf("This is c3");
	while(n3<=3000){
		printf(" %d ",n3);		
		n3++;
	}
	printf("\n");
}
int n5=3001;
if(c4==0){
	printf("This is c4");
	while(n5<=4000){
		printf(" %d ",n5);		
		n5++;
	}
	printf("\n");
}
exit(1);
}