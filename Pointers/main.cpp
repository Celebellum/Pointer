#include<iostream>
using namespace std;
using ::cout;
//#define POINTERS_BASIC
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
#ifdef POINTERS_BASIC
	int a = 2;  //���������� ����������
	int* pa = &a; // ���������� ���������
	// pa - pointer to "a"

	cout << a << endl;
	cout << &a << endl;// 
	cout << pa << endl; //����� ������ ���������� � ����������� � ��������� pa
	cout << *pa << endl;// �������������� ��������� � �������� �������� �� ������
	// * (�������� �������������) (Dereference operator)


	int* pb;
	int b = 3;
	pb = &b;
	// pb �������� � ���������� 
	//*pb �������� � ������� �����
	//int - int 
	// int* - ��������� �� int
	// double - double
	// double* - ��������� �� double  
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