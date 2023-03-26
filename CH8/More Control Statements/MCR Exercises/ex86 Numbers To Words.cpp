//exercise 8-6


//Write a program to convert numbers to words: 895 to eight nine five
#include <iostream>
int input;
int inputCopy;
int i;
int length;
char char_arr[10]; //can input max of 10 numbers, can change this to 1000 if wanted
int main()
{
	std::cout << "Input number: ";
	std::cin >> char_arr;
	std::cout << '\n';

	for (i = 0; i < (sizeof(char_arr) / sizeof(char)); i++) {
		switch (char_arr[i]) {
			case '0':
				std::cout << "zero ";
				break;
			case '1':
				std::cout << "one ";
				break;
			case '2':
				std::cout << "two ";
				break;
			case '3':
				std::cout << "three ";
				break;
			case '4':
				std::cout << "four ";
				break;
			case '5':
				std::cout << "five ";
				break;
			case '6':
				std::cout << "six ";
				break;
			case '7':
				std::cout << "seven ";
				break;
			case '8':
				std::cout << "eight ";
				break;
			case '9':
				std::cout << "nine ";
				break;
			default:
				break;
		}
	}
}
