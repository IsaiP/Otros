#include <iostream>

using namespace std; 

struct agregar_clientes{
	int idcliente;
	string nombre; 
	int dui; 
	int licencia;
} clientes[4]; 

struct agregar_autos{
	int idAuto;
	string modelo; 
	int year;
	string chasis; 
	float precio;
	 
} autos[4]; 

struct renta_Autos{
	int idcliente;
	int idauto;
	int dias_renta;
	float total_renta;
}Renta[4];

void addclientes();
void addautos();
void renta_autos();


void menu();
int posicionClientes = 0;
int posicionAutos,renta_vehiculo;
int main() {
	int op;
	do{
		menu();
		cin>>op;
		switch (op){
			case 1: 
				addclientes();
				posicionClientes +=1;
			break; 
			case 2: 
				for (int n=0; n<4; n++){
					if(clientes[n].nombre != ""){
						cout<<clientes[n].idcliente<<" ";				
				    	cout<<"Nombre: "<<(clientes[n].nombre)<<" ";
				    	cout<<"No. Dui: "<<(clientes[n].dui)<<" "<<endl;
				    	cout<<"No. licencia"<<(clientes[n].licencia)<<" "<<endl;
			    	}
		    	}
			break;
			case 3: 
				addautos();
				posicionAutos +=1;
			break; 
			case 4: 
				for (int n=0; n<4; n++){
					if(autos[n].modelo != ""){							
						cout<<autos[n].idAuto<< " ";			
				    	cout<<"Modelo: "<<(autos[n].modelo)<<" ";
				    	cout<<"Año: "<<(autos[n].year)<<" ";
				    	//cout<<(autos[n].chasis)<<" ";
				    	cout<<"Precio por dia: $"<<(autos[n].precio)<<endl;
			    	}
		    	}
			break;
			case 5: 
				renta_autos();
				renta_vehiculo+=1;				
			break;
		}
	}while (op!=2);
	
	//system ("pause>nul");
	return 0;
}

void menu(){
	cout<<"\t\t1.Agregar Clientes"<<endl;
	cout<<"2.Mostrar Clientes"<<endl;
	cout<<"3.Agregar Autos"<<endl;
	cout<<"4.Mostrar Autos"<<endl;
	cout<<"5.Renta Autos"<<endl;
}

int numero_cliente;
void addclientes(){
	numero_cliente+=1;
	//cout<<"Ingresa ID: "; 
	clientes[posicionClientes].idcliente = numero_cliente;
	clientes[posicionClientes].idcliente;
	cout<<"Nombre: ";
	cin.ignore();
	getline(cin, clientes[posicionClientes].nombre);
	cout<<"No. Dui: ";
	cin>>clientes[posicionClientes].dui;
	cout<<"No. licencia: ";
	cin>>clientes[posicionClientes].licencia;

}

int numero_autos;
void addautos(){
	numero_autos+=1;
	autos[posicionAutos].idAuto = numero_autos;
	cout<<"Modelo: ";
	cin.ignore();
	getline(cin, autos[posicionAutos].modelo);
	cout<<"Año: ";
	cin>>autos[posicionAutos].year;
	cout<<"Chasis: ";
	cin>>autos[posicionAutos].chasis;
	cout<<"Precio por dia: $"; 
	cin>>autos[posicionAutos].precio;
}


void renta_autos(){	
	int IdCliente;
	string Nombre_Cliente;
	
	for (int t=0; t<4; t++){
		if(clientes[t].nombre != ""){							
			cout<<clientes[t].idcliente<< " ";			
	    	cout<<"Nombre Cliente: "<<(clientes[t].nombre)<<endl;  	
    	}
	}
	
	
	for	(int p=0; p<1; p++){
		if(clientes[p].nombre !=""){
			cout<<"Ingrese el Id de Cliente: ";
			cin>>IdCliente;
		}
		if(clientes[p].idcliente == IdCliente){
			Nombre_Cliente = clientes[p].nombre;
		}		
		
	}
	
	for (int x=0; x<4; x++){
		if(autos[x].modelo != ""){							
			cout<<autos[x].idAuto<< " ";			
	    	cout<<"Modelo: "<<(autos[x].modelo)<<" ";
	    	cout<<"Año: "<<(autos[x].year)<<" ";
	    	//cout<<(autos[x].chasis)<<" ";
	    	cout<<"Precio por dia: $"<<(autos[x].precio)<<endl;	    	
    	}
	}


	for	(int z=0; z<1; z++){
		float totalapagar;
		int IdAuto, dias;
		string Auto;
		
		if(autos[z].modelo != ""){
			cout<<"Ingrese el id del auto: ";
			cin>>Renta[renta_vehiculo].idauto;
			IdAuto = Renta[renta_vehiculo].idauto;
			cout<<"Ingrese los dias de renta: ";
			cin>>Renta[renta_vehiculo].dias_renta;
			dias = Renta[renta_vehiculo].dias_renta;
		}
		if(autos[z].idAuto == IdAuto){
			totalapagar = (autos[z].precio * dias);
			Renta[renta_vehiculo].total_renta = totalapagar;
			Auto = autos[z].modelo;
			
			cout<<"********** RESUMEN DE RENTA **********";
			cout<<"Vehiculo: "<<Auto<<endl;
			cout<<"\t"<<"Nombre cliente: "<<Nombre_Cliente<<endl;
			cout<<" "<<"Dias: "<<dias<<endl;
			cout<<" "<<"Precio a Pagar por Alquiler: $"<<totalapagar<<endl;
			cout<<"**************************************";
		}		
	}	

}
















