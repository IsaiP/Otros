#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int c[9]={0,0,0,0,0,0,0,0,0};
char denuevo=' ';

char opcion(int i);
int ganador(), quieres, rentado; 
void print_rentado(); 
void datos();
void proceso();

int main()
{
	do
	{
    	int h, menu;
	    cout<<"			BIENVENIDO \n";
	    cout<<"	1 Realizar Renta\n";
		cout<<"	2 Ver carros disponibles\n";
		cout<<"	3 carros arrendados\n";
		cout<<"	4 Salir\n";
	cin>>menu;
switch(menu)
    {
         case 1:
			 datos();
				break;
           	case 2:
           		if(quieres==1){
				cout<<"CARROS DISPONIBLES\n";
              	  	cout<<"2- carro 1 \n";
				   system("todos1.png");
				   }else if(quieres==2){
				cout<<"CARROS DISPONIBLES\n";
              		cout<<"1- carro 2  \n";
				   system("todos2.png");
				   }else{
					cout<<"CARROS DISPONIBLES\n";
              		cout<<"1- carro 1 \n";
			  		cout<<"2- carro 2 \n";
				system("todos.png");
				   }
			  getchar();
              break;
           	case 3:
				cout<<"LOS CARROS RENTADOS \n";
			proceso();
              getchar();
              break;
            case 4:
               cout<<"Hasta pronto\n";     
			   getchar();
               exit(1);
              break;
         }         
cout<<"\nDesea regresar al menu? (s o n)\n";
         cin>>denuevo;
         if (denuevo>=97) denuevo-=32;
         if ((denuevo!='s')&&(denuevo!='n'))
         for (h=0;h<=8;h++) c[h]=0;
}
while (denuevo=='S');
getchar();
}
void datos()
{	 
	 cout<<"Ingrese el numero de carro a rentar\n";
	 	cin>>quieres;}
void proceso()
{
if(quieres==1){
		cout<<" carro 1 \n";
		system("1.png");
	}else if(quieres==2){
		cout<<" carro 2\n";
		system("2.png");
	}else{
		cout<<"\n No hay carros en renta\n\n";
	}rentado=quieres;
}

