
#include <iostream>
#include <conio.h>


//C++ proceduralnie
//Brak implementacji odwrotnosci macierzy

using namespace std;

void wczytaj(double M[][2])
{
int i,j;
	for(i=0;i<2;i++)
      for(j=0;j<2;j++)
        cin>>M[i][j];
}

void wydrukuj(double M[][2])
{
int i,j;
for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        cout<<M[i][j]<<" "; //separator kolumn
      		cout<<endl; //separator wierszy
    }
}
	
void dodawanie2D(double A[][2], double B[][2], double C[][2])
{
	int i,j;
	for(int i=0;i<2;i++)
      for(int j=0;j<2;j++)
      {
        C[i][j] = A[i][j] + B[i][j];
      }
}

void mnozenie2D(double A[][2], double B[][2], double C[][2])
{
	int i,j,k,s;
		for (i=0;i<2;i++)
			for (k=0;k<2;k++)
				{ s=0;
					for (j=0;j<2;j++)
						s=s+A[i][j]*B[j][k];
				C[i][k]=s;
				} 

}

//zostawilem taka sama nazwe, zeby sprawdzic to przeciazanie funkcji
void wczytaj(double M[][3])
{
int i, j;
	for(i=0;i<3;i++)
      for(j=0;j<3;j++)
        cin>>M[i][j];
}

void wydrukuj3D(double M[][3])
{
int i,j;
for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        cout<<M[i][j]<<" ";
      		cout<<endl;
    }
}
	
void dodawanie3D(double A[][3], double B[][3], double C[][3])
{
	int i,j;
	for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
      {
        C[i][j] = A[i][j] + B[i][j];
      }
}

void mnozenie3D(double A[][3], double B[][3], double C[][3])
{
	int i,j,k,s;
		for (i=0;i<3;i++)
			for (k=0;k<3;k++)
				{ s=0;
					for (j=0;j<3;j++)
						s=s+A[i][j]*B[j][k];
				C[i][k]=s;
				} 

}

int main(int argc, char *argv[])
{

	y: cout<<"MENU:\n1. Macierze 2D\n2. Macierze 3D\n3. Wyjscie\n"; //etykieta powrotu
	int nr;
	cin>>nr;
	
	switch(nr)
	{
	  case 1:
	  	cout<<"Macierz 2D";
	  	double C[2][2];
	    x: cout<<"WYBIERZ OPCJE:\n1. Wczytaj macierze A i B\n2. Dodaj macierze A + B\n3. Przemnoz macierz A * B\n4. Powrot do MENU\n";
	    int nr2;
	  	cin>>nr2;
	  	switch(nr2)
			{
				case 1:
				    double A[2][2];
						cout<<"Wpisz macierz A"<<endl;
						wczytaj(A);       
						cout<<"Macierz A"<<endl;
						wydrukuj(A);
						    
						cout<<"Wpisz macierz B"<<endl;    
						double B[2][2];
						wczytaj(B);
						cout<<"Macierz B"<<endl;
						wydrukuj(B);
						goto x; //niby Pan mówi³, ¿e nie powinno sie uzywac goto, ale to pierwsze wpadlo mi do glowy
				break;
				
				case 2:
						dodawanie2D(A, B, C);
						cout<<"Wynik macierz C"<<endl;
						wydrukuj(C);
						goto x;
				break;
				
				case 3:
						mnozenie2D(A, B, C);
						cout<<"Wynik macierz C"<<endl;
						wydrukuj(C);
						goto x;
				break;
				
				case 4:
						goto y;
				break;
				
				default:
	    		cout<<"Podales liczbe spoza zakresu!";
				goto x; 
			}
	  break;
	 
	  case 2: 
	    cout<<"Macierz 3D";
	    double D[3][3];
	    z: cout<<"WYBIERZ OPCJE:\n1. Wczytaj macierze A i B\n2. Dodaj macierze A + B\n3. Przemnoz macierz A * B\n4. Powrot do MENU\n";
	    int nr3;
	  	cin>>nr3;
	  	switch(nr3)
			{
				case 1:
				    double A[3][3];
						cout<<"Wpisz macierz A"<<endl;
						wczytaj(A);       
						cout<<"Macierz A"<<endl;
						wydrukuj3D(A);
						    
						cout<<"Wpisz macierz B"<<endl;    
						double B[3][3];
						wczytaj(B);
						cout<<"Macierz B"<<endl;
						wydrukuj3D(B);
						goto z;
				break;
				
				case 2:
						dodawanie3D(A, B, D);
						cout<<"Wynik macierz C"<<endl;
						wydrukuj3D(D);
						goto z;
				break;
				
				case 3:
						mnozenie3D(A, B, D);
						cout<<"Wynik macierz C"<<endl;
						wydrukuj3D(D);
						goto z;
				break;
				
				case 4:
						goto y;
				break;
				
				default:
			    		cout<<"Podales liczbe spoza zakresu!";
						goto z; 
			}
	  break;
	 
	  case 3: 
	    cout<<"Nacisnij klawisz";
	  break;
	 
	  default:
	    cout<<"Podales liczbe spoza zakresu!"; 
	}
	    
    getch();
    
    return 0;
}
