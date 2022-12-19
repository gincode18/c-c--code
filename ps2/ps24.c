#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data{
	char name[50];
	int age;
	struct height{ 
		double feet;
		double inches; 
		}height;
}d[5], avg;
void avgh(){
	for(int i=0; i<5; i++){
		avg.height.feet += d[i].height.feet/5;
		avg.height.inches += d[i].height.inches/5;
	}
}
void diffh(){
	double average = avg.height.feet*12+avg.height.inches;
	printf("avg height is ");
	printf("%d feet %d inches\n",(int)average/12, (int)average%12);
	for(int i=0; i<5; i++){
		double total = d[i].height.feet*12+d[i].height.inches;
		int f = (int)(abs(total-average))/12;
		int in = (int)(abs(total-average))%12;
		printf("%s %d feet %d inches ", d[i].name, f, in);
		if(total>average)
			printf("more\n");
		else printf("less\n");
	}
}
void input(){
	
	for(int i=0; i<5; i++){
		printf("name of staff%d  ", i+1);
		scanf("%[^\n]%*c",d[i].name);
		printf("age of staff%d  ",i+1);
		scanf("%d", &d[i].age);
		printf("height(feet) "); scanf("%lf",&d[i].height.feet);
		printf("height(inches) "); scanf("%lf",&d[i].height.inches);
		printf("\n"); getchar();
	}
}
int main(){
	input();
	avgh();
	diffh();	
	return 0;
}