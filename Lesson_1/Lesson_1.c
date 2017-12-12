// Lesson_1.c : Defines the entry point for the console application.
//
#include "stdafx.h"

void menu();
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();
void task11();
void task12();
void task13();
void task14();

int main(void)
{
	printf("Hello!");
	menu();
    return 0;
}

void menu() {
	long input = 1;
	while (input != 0) {
		printf("\nPlease, enter a command:\n");
		printf("0  - Exit\n");
		printf("1  - Body mass index\n");
		printf("2  - Max out of four numbers\n");
		printf("3  - Variable swap\n");
		printf("4  - Quadratic equation roots\n");
		printf("5  - Month-Season\n");
		printf("6  - Age\n");
		printf("7  - Chessboard colors\n");
		printf("8  - Squares and cubes\n");
		printf("9  - Division\n");
		printf("10 - Odd digits\n");
		printf("11 - Even average\n");
		printf("12 - Max out of three\n");
		printf("13 - Random numbers\n");
		printf("14 - Automorph\n");
		scanf("%d", &input);
		switch (input){
			case 1:
				task1();
				break;
			case 2:
				task2();
				break;
			case 3:
				task3();
				break;
			case 4:
				task4();
				break; 
			case 5:
				task5();
				break;
			case 6:
				task6();
				break; 
			case 7:
				task7();
				break;
			case 8:
				task8();
				break; 
			case 9:
				task9();
				break;
			case 10:
				task10();
				break; 
			case 11:
				task11();
				break;
			case 12:
				task12();
				break; 
			case 13:
				task13();
				break;
			case 14:
				task14();
				break;
			case 0:
				printf("\nThank you! Good bye!");
				return;
			default:
				printf("\nUnknown command");
				break;
		}
	}
}

void task1() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	float weight = 1.0;
	float height = 1.0;
	printf("Please enter weight (kg): ");
	scanf("%f", &weight);
	if (weight < 2) {
		printf("You're probably dead or don't exist\n");
		return;
	}
	if (weight > 150)
		printf("Damn you're fat!\n");
	printf("Please enter height (m): ");
	scanf("%f", &height);
	if (height < 0.2) {
		printf("You're probably dead or don't exist\n");
		return;
	}
	if (height < 1.2) {
		printf("Haha! Dwarf!\n");
	}
	if (height > 2.0)
		printf("Damn you're tall!\n");
	printf("Your body mass index is %.2f\n", (weight / (height*height)));
	return;
}

void task2() {
	//2. Найти максимальное из четырех чисел. Массивы не использовать.
	float num1, num2, num3, num4;
	printf("Please enter the first number: ");
	scanf("%f", &num1);
	printf("Please enter the second number: ");
	scanf("%f", &num2);
	printf("Please enter the third number: ");
	scanf("%f", &num3);
	printf("Please enter the fourth number: ");
	scanf("%f", &num4);
	float max = num1;
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	if (max < num4) max = num4;
	printf("Max number is %f", max);
	return;
}

void task3() {
	//3. Написать программу обмена значениями двух целочисленных переменных :
	//a. с использованием третьей переменной;
	//b. *без использования третьей переменной.
	int n1, n2;
	printf("Please enter the first number: ");
	scanf("%d", &n1);
	printf("Please enter the second number: ");
	scanf("%d", &n2);
	printf("Swapping with an additional variable\n");
	int addVar = n1;
	n1 = n2;
	n2 = addVar;
	printf("Now the first number is %d and the second number is %d\n", n1, n2);
	printf("Swapping without an additional variable\n");
	n1 ^= n2;
	n2 ^= n1;
	n1 ^= n2;
	printf("Freaking binary magic! Now the first number is %d and the second number is %d\n", n1, n2);
	return;
}

void task4() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//4. Написать программу нахождения корней заданного квадратного уравнения.

void task5() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.

void task6() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//6. Ввести возраст человека(от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».

void task7() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//7. С клавиатуры вводятся числовые координаты двух полей шахматной доски(x1, y1, x2, y2). Требуется определить, относятся ли к поля к одному цвету или нет.

void task8() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//8. Ввести a и b и вывести квадраты и кубы чисел от a до b.

void task9() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//9. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.

void task10() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//10. Дано целое число N(>0). С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечетные цифры.
//	  Если имеются, то вывести True, если нет — вывести False.

void task11() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//11. С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать среднее арифметическое всех положительных четных чисел, оканчивающихся на 8.

void task12() {
	//12. Написать функцию нахождения максимального из трех чисел.
	float numbers[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("Please enter number #%d: ", i+1);
		scanf("%f", &numbers[i]);
	}
	float max = numbers[0];
	for (i = 1; i < 3; i++) {
		if (max < numbers[i])
			max = numbers[i];
	}
	printf("Max number is %f", max);
	return;
}

void task13() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//13. * Написать функцию, генерирующую случайное число от 1 до 100.
//а) с использованием стандартной функции rand()
//б) без использования стандартной функции rand()

void task14() {
	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h*h); где m - масса тела в килограммах, h - рост в метрах.
	return;
}
//14. *Автоморфные числа. Натуральное число называется автоморфным, если оно равно последним цифрам своего квадрата. Например, 252 = 625.
//	   Напишите программу, которая вводит натуральное число N и выводит на экран все автоморфные числа, не превосходящие N.