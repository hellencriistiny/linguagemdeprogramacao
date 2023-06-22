#include <stdio.h>
#include <stdlib.h>

struct student{
	int cod[10];
	float note[10];
};


int main() {
	int cod[5], i;
	
	printf("Student code: ");
	for(i=0;i<5;i++){
		scanf("%d",&cod[i]);
	}
	
	

	return 0;
}
