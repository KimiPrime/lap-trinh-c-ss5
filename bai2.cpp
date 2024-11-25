#include <stdio.h>

int main() {
	int trueNumber = 12;
	int input;
	
	printf("hay doan so can nhap tu 1 - 100");
	
	for (;;){
		printf("nhap mot so bat ki");
		scanf("%d",&input);
		
		if (input== trueNumber){
			printf("dung roi ban oi\n");
			break;
	}else {
		printf("sai roi ban oi thu lai di ban\n");
	}
}
	return 0;
}
