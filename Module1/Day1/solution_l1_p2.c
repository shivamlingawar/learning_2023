#include <stdio.h>

int Grade(int num){
	
	if(num>=90 && num<=100){
		printf("Grade A");
	}
	else if(num>=75 && num<=89){
		printf("Grade B");
	}
	else if(num>=60 && num<=74){
		printf("Grade c");
	}
	else if(num>=50 && num<=59){
		printf("Grade D");
	}
	else if(num>=0 && num<=49){
		printf("Grade F");
	}
	else{
		printf(" Invalid Input!!");
	}
}

int main(){
	int num;
	printf("Enter Marks of student:");
	scanf("%d",&num);
	Grade(num);
	return 0;
	
}
