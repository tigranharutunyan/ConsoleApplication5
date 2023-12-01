// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace  std;
	
struct  MountainData
{
		string Name;
		int Height;
}; 

void Mountain(MountainData Data[3])
{	
	
	
	int Max = 0;
	for (int i = 0; i <= 3; i++)
	{
		if (Max < Data->Height)
		{
			Max = Data->Height;
		}
	}
	cout << Max << "   " << Data->Name << endl;
}
int main()
{
	/*struct {
		double Real;
		double Imag;

   }_complex,complex;

	_complex.Real = 40; complex.Real = 56;
	_complex.Imag = 15; complex.Imag = 56;
	cout << _complex.Real + complex.Real << endl;
	cout << complex.Imag + complex.Real <<endl;}*/
	//struct S {
	//	double  number;
	//	float number5;
	//	int Sizel;
	//	/*int number7;*/
	//	string Name;

	//};
	//string Name = "Tigran";
	//cout << sizeof(Name) << endl;
	//cout << sizeof(S) << endl;
	

	Mountain();
}
