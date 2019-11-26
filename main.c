#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int id;
	char name[10];
	double grade;
	
};



int main(int argc, char *argv[]) {
	
	struct student s1 = {24, "minkyeong",4.3	};
	
	s1.id = 1710153;
	strcpy(s1.name,"mingyeong");
	s1.grade=4.5;
	
	printf("id: %d\n",s1.id);
	printf("name: %s\n",s1.name);
	printf("grade: %f\n",s1.grade);
	
	return 0;
}
