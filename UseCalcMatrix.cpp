#include<iostream>
#include <cstdlib>
#include<cmath>
#include <ctime>
#include "CalcMatrix.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const int range = 10;
	showMenu();
	int select, choise, sizeArr, option;
	cin >> select;
	
	if(select == 1)
	{
		cout << "�� ������� �������� � ����������� ���������. " << endl;
		cout << "������� ����� ��������: " << endl;
		cin >> sizeArr;
		int A[sizeArr];
		int B[sizeArr];
		cout << "��������� ������� ���������� �������, ��� �������?" << endl;
		cout << "��������� ������� ���������� ������� ������� - 1," << endl;
		cout << "��������� ������� ������� ������� - 2." << endl;
		cin >> choise;
			if(choise == 1)
			{
				cout << "��������� ������� ���������� �������" << endl;
				random(A, sizeArr, range); // ��������� ���������� ������� ������ ������.
				random(B, sizeArr, range); // ��������� ���������� ������� ������ ������.
				cout << "������ �: " ;
				OutMas(A, sizeArr);
				cout << "\n������ B: ";
				OutMas(B, sizeArr);
				cout << endl;
			}else if(choise == 2){
				cout << "��������� ������� �������" << endl;
				InMasA(A, sizeArr);
				InMasA(B, sizeArr);
				cout << "������ �: " ;
				OutMas(A, sizeArr);
				cout << "\n������ B: ";
				OutMas(B, sizeArr);
				cout << endl;
			}else{
				cout << "������ ������� �����!" << endl;
			}
			int arC[sizeArr];
			matMenu();
			cin >> option;
			
			switch(option)
			{
				case 1:
						cout << "����� �������� � � B �����:" << endl;
							for(int i=0; i<sizeArr; i++)
    						{
    							cout << A[i] + B[i] << " ";
        					}
        					cout << endl;					
					break;
				case 2:
						cout << "�������� �������� � � B �����:" << endl;
							for(int i=0; i<sizeArr; i++)
    						{
    							cout << A[i] - B[i] << " ";
        					}
        					cout << endl;
					break;
				case 3:
					cout << "����� ������� ������ �����������, ��� ��� ���������� �������� ������� � \n�� ����� ���������� ����� ������� �." << endl;
					break;
				default:
					cout << "������! ������ ������ ���� �� ����������!" << endl;
					break;
				}			
			
	}else if(select == 2){
		cout << "�� ������� �������� � ���������� ���������. " << endl;
		cout << "������� ������ ��������: " << endl;
		cin >> sizeArr;
		int A[sizeArr][sizeArr];
		int B[sizeArr][sizeArr];
		cout << "��������� ������� ���������� �������, ��� �������?" << endl;
		cout << "��������� ������� ���������� ������� ������� - 1," << endl;
		cout << "��������� ������� ������� ������� - 2." << endl;
		cin >> choise;
			if(choise == 1)
			{
				cout << "\n��������� ������ A ���������� �������" << endl;
				 // ��������� ���������� ������� ������ ������.
				 for (int i=0; i<sizeArr; i++)
    			 {
    				for (int j = 0; j < sizeArr; j++)
    				{
    					A[i][j]=rand()%range;
					}
				 }
				cout << "������ �: \n" ;
				for(int i=0;i<sizeArr;i++)
    			{
       				for(int j=0;j<sizeArr;j++)
       				{
            			cout << A[i][j] << " ";
       				}
        			cout << endl;
    			}
				 // ��������� ���������� ������� ������ ������.
				cout << "\n��������� ������ B ���������� �������" << endl;
				for (int i=0; i<sizeArr; i++)
    			 {
    				for (int j = 0; j < sizeArr; j++)
    				{
    					B[i][j]=rand()%range;
					}
				 }
				cout << "������ B: \n" ;
				for(int i=0;i<sizeArr;i++)
    			{
       				for(int j=0;j<sizeArr;j++)
       				{
            			cout << B[i][j] << " ";
       				}
        			cout << endl;
    			}
			}else if(choise == 2){
				cout << "��������� ������� �������" << endl;
				cout << "������ �: " ;
					for(int i=0;i<sizeArr;i++)
    				{
        				for(int j=0;j<sizeArr;j++)
        				{
            				cout<<"A["<<i<<"]["<<j<<"]=";
            				cin >> A[i][j];
        				}
    
    				}

				cout << "\n������ B: ";
				for(int i=0;i<sizeArr;i++)
    			{
        			for(int j=0;j<sizeArr;j++)
        			{
            			cout<<"B["<<i<<"]["<<j<<"]=";
            			cin >> B[i][j];
        			}
    
    			}
				cout << endl;
				cout << "�� �������"<<endl;
				cout << "������ �: \n" ;
				for(int i=0;i<sizeArr;i++)
    			{
       				for(int j=0;j<sizeArr;j++)
       				{
            			cout << A[i][j] << " ";
       				}
        			cout << endl;
    			}
    			cout << "\n�� �������"<<endl;
				cout << "������ B: \n" ;
				for(int i=0;i<sizeArr;i++)
    			{
       				for(int j=0;j<sizeArr;j++)
       				{
            			cout << B[i][j] << " ";
       				}
        			cout << endl;
    			}
			}
			int C[sizeArr][sizeArr];
			int arC[sizeArr];
			int temp = 0;
			matMenu();
			cin >> option;
			
			switch(option)
			{
				case 1:
						cout << "����� �������� � � B �����:" << endl;
							for(int i=0; i<sizeArr; i++)
    						{
        						for(int j=0; j<sizeArr; j++)
        						{
            						C[i][j]=A[i][j]+B[i][j];
            						cout<<C[i][j] << " ";
        						}
        					cout << endl;
    						}					
					break;
				case 2:
						cout << "�������� �������� � � B �����:" << endl;
							for(int i=0; i<sizeArr; i++)
    						{
        						for(int j=0; j<sizeArr; j++)
        						{
            						C[i][j]=A[i][j]-B[i][j];
            						cout<<C[i][j] << " ";
        						}
        					cout << endl;
    						}	
					break;
				case 3:
						cout << "������������ �������� � � � �����:" << endl;
						for (int i=0; i<sizeArr; i++)
  							for (int j=0; j<sizeArr; j++)
   								C[i][j]=0;
						
						
						for(int i=0;i<sizeArr; i++)
 						{
  							for(int j=0; j<sizeArr; j++)
  								{
   									for(int m=0; m<sizeArr; m++)
   									{
    									C[i][j]+=A[i][m]*B[m][j];
   									}
  								}
 							} 
							 
						for(int i=0; i<sizeArr; i++)
 						{
  							for(int j=0; j<sizeArr; j++)
  							{
   								cout <<C[i][j] << " ";
  							}
  						cout << endl;
 						}   							
					break;
				default:
					cout << "������! ������ ������ ���� �� ����������!" << endl;
					break;
				}			
		}else{
		cout << "������. ���������� ���� ������ �� ����������!" << endl;
	}	
	cout << endl << endl;
	cout << "��������� ���������. �� ��������!" << endl;	
	cout << endl << endl;	
	system("pause");
	return 0;
}
