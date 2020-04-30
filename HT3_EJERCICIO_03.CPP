/*Ejercicio # 3: Una empresa que se dedica a la venta de seguros de vehiculos, calcula el importe
Segun el modelo y color del automovil, así como la edad del conductor.
Modelo       Color             Precio
A            Blanco            240.50
             Metalizado        330.00
             Otros             270.50
B            Blanco            300.00
        	 Metalizado        360.50
             Otros             330.00
           
Incremento de precio
Edad            % Incremento
<31                    25%
Entre 31 y 65    0%
>65                   30%
Determine el importe a pagar mostrándolo en pantalla según los datos del vehículo (modelo y color) y la edad del conductor.
Grabe los datos a un archivo.*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
struct seguro de vehiculos{
	string modelo;
	string color;
	int edad conducto;
	float precio;
};
void mp(); 
void importe();
void leer_archivo();
int main(){	
	mp();	
	
}
void mp(){ 
	
	int resp;
	//string nombrearchivo;
	//cout<<"Indique nombre de archivo: ";
	//getline(cin,nombrearchivo); 	
do{
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
	cout<<" 1 - Ingresar VehÃ­culo al importe "<<"\n";
		cout<<" 2 - Mostrar seguros de VehÃ­culos "<<"\n";
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opciÃ³n: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			importe();			
		}
		else if (resp==2){		
			system("CLS");
			leer_archivo();
		}			
		else if (resp==3)
			break;
		else 
			break;
		
	} while(resp!=3);
}
void inventario(){
	string modelo_v;
	string color_v;
	int edad conductor_v;
	float precio_v;
	ofstream archivo; //grabar archivo
	fflush(stdin);
	cout<<"Ingrese modelo: "<<endl;
	getline(cin,modelo_v);
	fflush(stdin);
	cout<<"Ingrese color: "<<endl;
	getline(cin,color_v);
	cout<<"Ingrese edad conductor: "<<endl;
	cin>>edad_v;	
	cout<<"Ingrese Precio: "<<endl;
	cin>>precio_v;
	
	archivo.open("seguro de vehiculos.txt",ios::app); 
	archivo<<modelo_v<<"\t"<<modelo_v<<"\t"<<color_v<<"\
	t"<<precio_v<<endl;
	archivo.close();
}
void leer_archivo(){
	ifstream archivo; //leer archivo 
	archivo.open("seguro de vehÃ­culo.txt",ios::in); // leer archivo
	int lineas,i=0;
	string s,linea;	
	while (getline(archivo, s))
        lineas++;
	archivo.close();
	
	vehiculos recordset[lineas];
	
	archivo.open("seguro de vehiculos.txt",ios::in);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		exit(1);
	}	
	/*Leer datos del archivo*/
	for (int i = 0; i < lineas; i++)
    {
        if (!archivo)
        {                                               
            cerr << "No se puede abrir el archivo " << endl;
            system("PAUSE");
        }
        archivo>>recordset[i].modelo>>recordset[i].color>>
	recordset[i].edad conductor>>recordset[i].precio;
    }
    archivo.close(); 
    for(int i = 0; i <lineas; i++){
    	cout<<recordset[i].modelo<<" "<<recordset[i].color<<" "<<
	recordset[i].edad conductor<<" "<<recordset[i].precio<<endl;
 
	}
	system("Pause");
	

}


