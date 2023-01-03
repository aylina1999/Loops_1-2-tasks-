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
	int number;          //�����, ��������� � ����������
	int reverse = 0;      //�����, ���������� ��������
	cout << "������� �����: "; cin >> number;
	int buffer = number; //����� �����, ���������� � ����������  
    while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10; //��������� ������� ������ � reverse
		buffer /= 10;          //������� ������� ������ �� buffer
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}

#endif // PALINDROME


#ifdef TICKET
	int number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	cout << "������� ����� ������: "; cin >> number;
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
		case 'w': cout << "�����" << endl; break;
		case 'W': cout << "�����" << endl; break;
		case UP_ARROW: cout << "�����" << endl; break;
		case 's': cout << "�����" << endl; break;
		case 'S': cout << "�����" << endl; break;
		case DOWN_ARROW: cout << "�����" << endl; break;
		case 'a': cout << "�����" << endl; break;
		case 'A': cout << "�����" << endl; break;
		case LEFT_ARROW: cout << "�����" << endl; break;
		case 'd': cout << "������" << endl; break;
		case 'D': cout << "������" << endl; break;
		case RIGHT_ARROW: cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����\a" << endl; break;
		case Escape: cout << "�����" << endl;
		case -32: break;
		default: cout << " Error" << endl;
		}

	} while (key != Escape);
#endif // SHOOTER

}

