#include<iostream>
#include <cstdlib>
#include<cmath>
#include <ctime>
#include "CalcMatrix.h"
using namespace std;


void showMenu()
{
	cout << "*********************************************************"<<endl<<endl;
	cout << "��������� ������� �����, �������� � ������������ ������." << endl;
	cout << "�������� ����������� �������," << endl;
	cout << "���������� ��� ���������?" << endl;
	cout << "(��� ������ ������� 1 ��� 2 ��������������)" << endl << endl;
	cout << "*********************************************************"<<endl;
}

void matMenu()
{
	cout << "*********************************************************"<<endl<<endl;
	cout << "�������� �������������� ��������." << endl;
	cout << "1 - ������������" << endl;
	cout << "2 - ��������" << endl;
	cout << "3 - ������������" << endl << endl;
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
    cout<<x[i]<< " "; //����� �����
}

void InMasA(int *x, int n)
{
    cout<<"������� �������� �������,"<<n<<" ���� ����� ������\n";
    for(int i = 0; i < n; i++) cin>>x[i]; 
}


