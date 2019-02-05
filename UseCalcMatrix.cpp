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
		cout << "Вы выбрали операции с одномерными массивами. " << endl;
		cout << "Укажите длину массивов: " << endl;
		cin >> sizeArr;
		int A[sizeArr];
		int B[sizeArr];
		cout << "Заполнить массивы случайными числами, или вручную?" << endl;
		cout << "Заполнить массивы случайными числами нажмите - 1," << endl;
		cout << "заполнить массивы вручную нажмите - 2." << endl;
		cin >> choise;
			if(choise == 1)
			{
				cout << "Заполняем массивы случайными числами" << endl;
				random(A, sizeArr, range); // заполняем случайными числами первый массив.
				random(B, sizeArr, range); // заполняем случайными числами второй массив.
				cout << "Массив А: " ;
				OutMas(A, sizeArr);
				cout << "\nМассив B: ";
				OutMas(B, sizeArr);
				cout << endl;
			}else if(choise == 2){
				cout << "Заполняем массивы вручную" << endl;
				InMasA(A, sizeArr);
				InMasA(B, sizeArr);
				cout << "Массив А: " ;
				OutMas(A, sizeArr);
				cout << "\nМассив B: ";
				OutMas(B, sizeArr);
				cout << endl;
			}else{
				cout << "Ошибка формата ввода!" << endl;
			}
			int arC[sizeArr];
			matMenu();
			cin >> option;
			
			switch(option)
			{
				case 1:
						cout << "Сумма массивов А и B равна:" << endl;
							for(int i=0; i<sizeArr; i++)
    						{
    							cout << A[i] + B[i] << " ";
        					}
        					cout << endl;					
					break;
				case 2:
						cout << "Разность массивов А и B равна:" << endl;
							for(int i=0; i<sizeArr; i++)
    						{
    							cout << A[i] - B[i] << " ";
        					}
        					cout << endl;
					break;
				case 3:
					cout << "Такие матрицы нельзя перемножить, так как количество столбцов матрицы А \nне равно количеству строк матрицы В." << endl;
					break;
				default:
					cout << "Ошибка! Такого пункта меню не существует!" << endl;
					break;
				}			
			
	}else if(select == 2){
		cout << "Вы выбрали операции с двумерными массивами. " << endl;
		cout << "Укажите размер массивов: " << endl;
		cin >> sizeArr;
		int A[sizeArr][sizeArr];
		int B[sizeArr][sizeArr];
		cout << "Заполнить массивы случайными числами, или вручную?" << endl;
		cout << "Заполнить массивы случайными числами нажмите - 1," << endl;
		cout << "заполнить массивы вручную нажмите - 2." << endl;
		cin >> choise;
			if(choise == 1)
			{
				cout << "\nЗаполняем массив A случайными числами" << endl;
				 // заполняем случайными числами первый массив.
				 for (int i=0; i<sizeArr; i++)
    			 {
    				for (int j = 0; j < sizeArr; j++)
    				{
    					A[i][j]=rand()%range;
					}
				 }
				cout << "Массив А: \n" ;
				for(int i=0;i<sizeArr;i++)
    			{
       				for(int j=0;j<sizeArr;j++)
       				{
            			cout << A[i][j] << " ";
       				}
        			cout << endl;
    			}
				 // заполняем случайными числами второй массив.
				cout << "\nЗаполняем массив B случайными числами" << endl;
				for (int i=0; i<sizeArr; i++)
    			 {
    				for (int j = 0; j < sizeArr; j++)
    				{
    					B[i][j]=rand()%range;
					}
				 }
				cout << "Массив B: \n" ;
				for(int i=0;i<sizeArr;i++)
    			{
       				for(int j=0;j<sizeArr;j++)
       				{
            			cout << B[i][j] << " ";
       				}
        			cout << endl;
    			}
			}else if(choise == 2){
				cout << "Заполняем массивы вручную" << endl;
				cout << "Массив А: " ;
					for(int i=0;i<sizeArr;i++)
    				{
        				for(int j=0;j<sizeArr;j++)
        				{
            				cout<<"A["<<i<<"]["<<j<<"]=";
            				cin >> A[i][j];
        				}
    
    				}

				cout << "\nМассив B: ";
				for(int i=0;i<sizeArr;i++)
    			{
        			for(int j=0;j<sizeArr;j++)
        			{
            			cout<<"B["<<i<<"]["<<j<<"]=";
            			cin >> B[i][j];
        			}
    
    			}
				cout << endl;
				cout << "Вы указали"<<endl;
				cout << "Массив А: \n" ;
				for(int i=0;i<sizeArr;i++)
    			{
       				for(int j=0;j<sizeArr;j++)
       				{
            			cout << A[i][j] << " ";
       				}
        			cout << endl;
    			}
    			cout << "\nВы указали"<<endl;
				cout << "Массив B: \n" ;
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
						cout << "Сумма массивов А и B равна:" << endl;
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
						cout << "Разность массивов А и B равна:" << endl;
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
						cout << "Произведение массивов А и В равно:" << endl;
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
					cout << "Ошибка! Такого пункта меню не существует!" << endl;
					break;
				}			
		}else{
		cout << "Ошибка. Выбранного вами пункта не существует!" << endl;
	}	
	cout << endl << endl;
	cout << "Программа завершена. До свидания!" << endl;	
	cout << endl << endl;	
	system("pause");
	return 0;
}
