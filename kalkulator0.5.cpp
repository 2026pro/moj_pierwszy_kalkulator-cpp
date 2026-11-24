#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
double y, z;
double* liczba1 = &y;
double* liczba2 = &z;
char wybor;

    system("clear");
	while(true)
		{
		cout<<"                  "<<endl;
		cout<<"__________________"<<endl;
		cout<<"| Kalkulator     |"<<endl;
		cout<<"| ----------     |"<<endl;
		cout<<"| 1. dodawanie   |"<<endl;
		cout<<"| 2. odejmowanie |"<<endl;
		cout<<"| 3. mnozenie    |"<<endl;
		cout<<"| 4. dzielenie   |"<<endl;
		cout<<"| 5. koniec      |"<<endl;
		cout<<"------------------"<<endl;
		cin>>wybor;

        if(wybor=='5')
        {
        	break;
        }
		
		cout<<"Podaj pierwsza liczba."<<endl;
		cin>> *liczba1;
		cout<<"Podaj druga liczba."<<endl;
		cin>> *liczba2;
	
		if(wybor=='1')
		{
			cout<<"Wynik to "<<*liczba1 + *liczba2;
			
		}
		if(wybor=='2')
		{
			cout<<"Wynik to "<<*liczba1 - *liczba2;
		
		}
		if(wybor=='3')
		{
			cout<<"Wynik to "<<*liczba1 * *liczba2;
		}
		if(wybor=='4')
		{
		    if(*liczba2==0)
		    {
		    	cout<<"Nie dziel przez 0!";
		    }
		    else
		    {
			cout<<"Wynik to "<<*liczba1 / *liczba2;
			}
		}
		}
		return 0;
}
