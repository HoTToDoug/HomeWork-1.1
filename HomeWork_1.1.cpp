#include <iostream>
#include <math.h>
#include <cstdint>

using namespace std;

class Power {
private:
	int a;
	int b;
public:
	Power() {
		a = 100;
		b = 1;
	};
	void Set(){
		cout << "Enter first number: ";
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;
		cout << endl;
	};
	void Calculate() {
		double c;
		c = pow(a, b);
		cout << c << endl;
		cout << endl;
	};
};

class RGBA {
private:
	uint8_t m_red = 0;
	uint8_t m_green = 0;
	uint8_t m_blue = 0;
	uint8_t m_alpha = 255;
public:
	RGBA() {
		cout << "Enter numb for m_red: ";
		cin >> m_red;
		cout << endl;
		cout << "Enter numb for m_green: ";
		cin >> m_green;
		cout << endl;
		cout << "Enter numb for m_blue: ";
		cin >> m_blue;
		cout << endl;
		cout << "Enter numb for m_alpha: ";
		cin >> m_alpha;
		cout << endl;
	};
	void PrintRGBA() {
		cout << "m_red = " << m_red << endl;
		cout << "m_green = " << m_green << endl;
		cout << "m_blue = " << m_blue << endl;
		cout << "m_alpha = " << m_alpha << endl;
		cout << endl;
	};

};

class Stack {
private:
	static  const int longglass = 10;
	int arr[longglass] = {};
public:
	void reset() {
		for (size_t i = 0; i < longglass; i++)
		{
			arr[i] = 0;
		};
	};
	void push(int numb) {
		for (size_t i = 0; i < longglass; i++){
			if (arr[i] == 0)
			{
				arr[i] = numb;
				break;
			};
		};
	};
	void Pop() {
		for (size_t i = longglass; i > 0; --i)
		{
			if (arr[i - 1] > 0)
			{
				arr[i - 1] = 0;
				break;
			};
		};
	};
	void Print() {
		cout << "( ";
		for (size_t i = 0; i < longglass; i++)
		{
			if (arr[i] > 0)
			{
				cout << arr[i] << " ";
			};
		};
		cout << ")" << endl;
	};
};

int main()
{
	Power Calc;
	Calc.Set();
	Calc.Calculate();

	RGBA color;
	color.PrintRGBA();

	Stack stack;
	stack.reset();
	stack.Print();

	stack.push(3);
	stack.push(5);
	stack.push(7);
	stack.Print();

	stack.Pop();
	stack.Print();

	stack.Pop();
	stack.Pop();
	stack.Print();

	return 0;
};
