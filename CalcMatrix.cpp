#include<iostream>
#include <cstdlib>
#include<cmath>
#include <ctime>
#include "CalcMatrix.h"
using namespace std;


void showMenu()
{
	cout << "*********************************************************"<<endl<<endl;
	cout << "Программа находит сумму, разность и произведение матриц." << endl;
	cout << "Выберите размерность массива," << endl;
	cout << "одномерный или двумерный?" << endl;
	cout << "(для выбора нажмите 1 или 2 соответственно)" << endl << endl;
	cout << "*********************************************************"<<endl;
}

void matMenu()
{
	cout << "*********************************************************"<<endl<<endl;
	cout << "Выберите математическую операцию." << endl;
	cout << "1 - суммирование" << endl;
	cout << "2 - разность" << endl;
	cout << "3 - произведение" << endl << endl;
	cout << "*********************************************************"<<endl;
}

void random (int *MAS, int size, int range)
{
    for (int i=0; i<size; i++)
        MAS[i]=rand()%range;
}

void OutMas(int *x,int n)
{
   for(int i = 0; i < n; i++)  
    cout<<x[i]<< " "; //вывод чисел
}

void InMasA(int *x, int n)
{
    cout<<"Введите элементы массива,"<<n<<" штук через пробел\n";
    for(int i = 0; i < n; i++) cin>>x[i]; 
}


