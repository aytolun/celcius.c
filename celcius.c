#include<stdio.h>

int main(){
	
	float fahrenheit, celcius;
	
	
	printf("fahrenheit degeriini girin:");
	scanf("%f", &fahrenheit);
	
	celcius=(fahrenheit-32)*5/9;
	
	printf("%.2f F=%.2f C\n", fahrenheit, celcius);
	

	
	return 0;
}
