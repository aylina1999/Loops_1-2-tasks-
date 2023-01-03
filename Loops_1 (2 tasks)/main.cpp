#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27
#define Enter 13
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77

//#define PALINDROME
//#define TICKET
//#define SHOOTER

void main()
{
	setlocale(LC_ALL, "");

#ifdef PALINDROME
	int number;          //число, введенное с клавиатуры
	int reverse = 0;      //число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int buffer = number; //копия числа, введенного с клавиатуры  
    while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10; //сохраняем младший разряд в reverse
		buffer /= 10;          //убираем младший разряд из buffer
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}

#endif // PALINDROME


#ifdef TICKET
	int number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	cout << "Введите номер билета: "; cin >> number;
	while (number >= 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "JackPot" << endl;
	}
	else
	{
		cout << "It's not your lucky day" << endl;
	}
#endif // TICKET
#ifdef SHOOTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case 'w': cout << "Вперёд" << endl; break;
		case 'W': cout << "Вперёд" << endl; break;
		case UP_ARROW: cout << "Вперёд" << endl; break;
		case 's': cout << "Назад" << endl; break;
		case 'S': cout << "Назад" << endl; break;
		case DOWN_ARROW: cout << "Назад" << endl; break;
		case 'a': cout << "Влево" << endl; break;
		case 'A': cout << "Влево" << endl; break;
		case LEFT_ARROW: cout << "Влево" << endl; break;
		case 'd': cout << "Вправо" << endl; break;
		case 'D': cout << "Вправо" << endl; break;
		case RIGHT_ARROW: cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case Enter: cout << "Огонь\a" << endl; break;
		case Escape: cout << "Выход" << endl;
		case -32: break;
		default: cout << " Error" << endl;
		}

	} while (key != Escape);
#endif // SHOOTER

}

