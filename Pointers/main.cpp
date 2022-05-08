#include<iostream>
using namespace std;
using ::cout;
//#define POINTERS_BASIC
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
#ifdef POINTERS_BASIC
	int a = 2;  //обьявление переменной
	int* pa = &a; // обьявление указателя
	// pa - pointer to "a"

	cout << a << endl;
	cout << &a << endl;// 
	cout << pa << endl; //Вывод адреса переменной а хранящегося в указатели pa
	cout << *pa << endl;// Разыменовываем указатель и получаем значение по адресу
	// * (оператор разыменования) (Dereference operator)


	int* pb;
	int b = 3;
	pb = &b;
	// pb работаем с указателем 
	//*pb работаем с обычным интом
	//int - int 
	// int* - указатель на int
	// double - double
	// double* - указатель на double  
#endif // po

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	cout << *&arr[0] << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;

	//+
	//-
	//++
	//-- 
}