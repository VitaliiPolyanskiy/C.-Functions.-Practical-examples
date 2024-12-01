#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// Функция возвращает куб числа.
int CubeOfNumber(int number)
{
	return number * number * number;
}

// Функция определяет наибольшее из двух чисел. 
int MaxOfTwoNumber(int n1, int n2)
{
	if (n1 > n2)
		return n1;
	else
		return n2;
}

// Функция возвращает истину, если передаваемое значение положительное 
// и ложь, если отрицательное.
bool IsPositive(int number)
{
	if (number >= 0)
		return true;
	return false;
}

// Функция выполняет сложение двух чисел
double Addition(double n1, double n2)
{
	return n1 + n2;
}

// Функция выполняет вычитание двух чисел
double Subtraction(double n1, double n2)
{
	return n1 - n2;
}

// Функция выполняет умножение двух чисел
double Multiplication(double n1, double n2)
{
	return n1 * n2;
}

// Функция выполняет деление двух чисел
double Division(double n1, double n2)
{
	return n1 / n2;
}

// Функция в зависимости от выбора пользователя вызывает функции сложения, 
// произведения, вычитания, деления двух чисел
double Calculator(double n1, double n2, char operation)
{
	switch (operation)
	{
	case '+':
		return Addition(n1, n2);
	case '-':
		return Subtraction(n1, n2);
	case '*':
		return Multiplication(n1, n2);
	case '/':
		return Division(n1, n2);
	}
}

// Функция выводит на экран прямоугольник с высотой height и шириной width.
void DrawRectangle(int height, int width)
{
	if (height <= 0 || width <= 0)
		return;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || j == 0 || i == height - 1 || j == width - 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}
}

// Функция инициализирует массив случайными числами
void Init(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

// Функция выводит массив на экран
void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << arr[i];
	}
}

// Функция определяет среднее арифметическое элементов массива
double Average(int arr[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}


int main()
{
	int number1, number2;

	cout << "Enter a number: ";
	cin >> number1;
	cout << "Cube of number: " << CubeOfNumber(number1) << endl;


	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	cout << "Max of two number: " << MaxOfTwoNumber(number1, number2) << endl;


	cout << "Enter a number: ";
	cin >> number1;
	IsPositive(number1) ? cout << "The number is positive!\n" : cout << "The number is negative!\n";

	double num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter operation sign ('+' or '-' or '*' or '/'): ";
	char sign;
	cin >> sign;
	if (sign == '+' || sign == '-' || sign == '*' || sign == '/')
	{
		cout << "Result: " << Calculator(num1, num2, sign) << endl;
	}
	else
		cout << "Incorrect input!\n";


	int height, width;
	cout << "Enter a height of rectangle: ";
	cin >> height;
	cout << "Enter a width of rectangle: ";
	cin >> width;
	DrawRectangle(height, width);


	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE];
	Init(arr, SIZE);
	Print(arr, SIZE);
	cout << "\nAverage: " << Average(arr, SIZE) << endl;

	return 0;
}