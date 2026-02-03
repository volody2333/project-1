#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
//	float i;
//	for(i = 100; i > 10; i /= 2) 
//		printf("%.2f\n", i);

//bool car = true;
//int x = 0;
//while(car) {
//	printf("Enter a number:\n");
//	scanf("%d", &x);
//	if(x == 1)
//	car = false;
//}

//float i = 1000;
//while(i > 10) {
//	printf("%.2f\n", i);
//	i /= 20;
//}		

//bool car = false;
//do {
//printf("Yes\n");
//} while(car);

//int x;
//for(x = 0; x < 50; x++) {
//	if(x == 3)
//	break;
//	
//	if(x % 2 == 0)
//       continue;	
//	printf("%d\n", x);
//}

//int arr[] = {5, 67, 0, -2, 6};
//int i = 0;
//while(i < 5) {
//	printf("%d\n", arr[i]);
//	i++;
//}

int arr[] = {5, -68, 1, -2, 6}; 

int x;
printf("Massiv: \n");
for(x = 0; x < 5; x++)  {
printf("%d ", arr[x]);
}


printf("\n");

int min = arr[0];
int max = arr[0];
int  i;
for(i = 0; i < 5; i++) {
	if(arr[i] < min)
	min = arr[i];
	if(arr[i] > max)
	max = arr[i];
	
} 
printf("Minimum: %d\n", min);
printf("Maximum: %d\n", max);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	//Услов. опер. свич кейс более точен, ёмок.
//    int x = 15;
//    switch(x) {
//        case 10:
//		 printf("10");
//         break;
//        case 15:
//		 printf("15");
//		 break;
//		 
//		 default:
//		   printf("Error\n")	
//	}
//    
    
	// УСЛОВНЕЫ ОПЕРАТОРЫ (и\ или \ не правда\)
//	int x = 20, y = 5;
//	        
//	if((x == 10 && y < 7 ) || x == 20)
//		printf("Yes\n");
//	
//	else if(x > 100) {
//		if(x == 105)
//		printf("X is equl 105\n");
//		printf("X is greater 100\n");
//	}
//	else if(x < 5) 
//		printf("X is less than 5\n");
//	
//	else 
//		printf("No\n");
//	
//	
//	bool isHasCar = true;
//	if(isHasCar == true)
//	printf("Yes\n");
//	else
//	printf("No\n");
//	
//	return 0;
//}
	
	
	//СОЗДАНИЕ МАССИВА
//	int arr[] = {5, 7 ,2 , 56, 34};
//	arr[0] = 56;
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[2]);
//	
//	float numbers[3];
//	numbers[0] = 5.4f;
//	numbers[1] = 4.4f;
//	numbers[2] = 67.34f;
//	
//	char word[] = {'S', 'o', 'm', 'e'};
//	char words[] = "Hello Word!";
//	
//	words[1] = 'G';
//	printf("%s\n", words);
//	printf("%c\n", words[0]);
//	
//	int array[3][4] = {
//	  {4, 5, 6, 5},
//	  {7, 234, 4, 6},
//	  {4, 678, 6, 7}
//	
//	};
//	array[1][1] = 5;
//	printf("%d\n", array[0][0]);
//	
//	//getchar();
//    return 0;
	
	
	//ПЕРЕМЕННЫЕ
	
	//float x,  y, res;
	//scanf("%f", &x); 
	//scanf("%f", &y);
	
	//res = x / y; 
	
	 
	 
	//const short A = 0;
	// long int
	// printf - ld
	
	//res = q / w;
	//printf("Result: %.2f\n", res);
	
	//char s ='S';
	//printf("%c\n", s);
	//bool Car = true;
	//bool RedCar = foul;
	
    // до -32 768
	//short s = 500;
	
    //unsigned x = 5;
    
	//int a = 5, b = 10, res;
	
	// 0 - 4 млн
	//unsigned int x1 = 6;
	
	//long x2 = 5;
	//long long x3 = 6;
	
	//a *= 5;
	//a--;
	//b++;
	
	//float x5 = 4.545343636f;
	//double x6 = 5.48538548345853;
	
	//char sym = 'Q';
	// Запись символа.
	
	
	
	//res = a + b;
	
	//printf("Variable: %d + %d = %d\n", a, b, res);
	
	
	
    //printf("Hello!\n");
    //printf ("2026\n");
    


