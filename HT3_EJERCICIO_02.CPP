/*Ejercicio # 2:
En la Pizzeria "Gran sabor" se tienen las siguientes ofertas:
Por la compra de una pizza grande (Q80.00), recibe un descuento de 10%
Por la compra de una pizza familiar (Q115.00), recibe un descuento de 15%
Por la compra de una pizza fiesta (Q100.00), recibe un descuento de 20%

Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar.

Grabar los datos a un archivo y mostrar el total global de la venta del día y
Determinar el total de lo vendido por producto, mostrando tambiénn el porcentaje
con relación al total.*/

#include <fstream>
#include <iostream.h>
#include <string>
#include <stdio.h>
using namespace std;
struct pizza{
	string nombre;
	string grande;
	string familiar;
	string fiesta;
	float preciop;
	float costoh;
	float costohe;	
};
void insertar_datos_archivo();
void read_file();
void precio(pizza& tipo);
void mp();


int main(){
	mp();
	precio(datos);
	
	cout<< datos.pizza<<"\n";
	cout<< datos.codtipo<<endl;*/
}

void precio(pizza& descuento/n%){
	ofstream archivo;
	string nombreArchivo;
	fflush(stdin); //borrar el buffer existente
	cout<<"Indique nombre de archivo: ";
	getline(cin,nombreArchivo);

	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
using namespace std;
 
int main ()
 
{
 
cout << "BIENVENIDO AL ASISTENTE DE COMPRA"<<endl;
cout<<" "<<endl;
 
cout << "Por favor inserte la pizza elegida"<<endl;
cout << " "<<endl;
cout << "pizza Tipo 1"<<endl;
cin >> P1;
cout << "Precio del tipo 1"<<endl;
cin >>pr1;
cout << "pizza tipo 2"<<endl;
cin >>P2;
cout << "Precio de tipo pizza 2"<<endl;
cin >>pr2;
cout << "pizza tipo 3"<<endl;
cin >>P3;
cout << "Precio de tipo pizza 3"<<endl;
cin >>pr3;
system("cls");
 
if (total >=n)
{
	desc=total=80;
	desc1=total-desc;
	cout <<"Usted ha recibido un descuento del 10%, ahora el monto total 
	es de : "<<desc1<<" BsF.";
}
	desc=total=115;
	desc1=total-desc;
	cout <<"Usted ha recibido un descuento del 15%, ahora el monto total
	 es de : "<<desc1<<" BsF.";
{
	desc=total=100;
	desc1=total-desc;
	cout <<"Usted ha recibido un descuento del 20%, ahora el monto total 
	es de : "<<desc1<<" BsF.";
}
 
system("pause");
}
	archivo.open(nombreArchivo.c_str(),ios::app);
	archivo<<pizza<<"\t"<<tipo<<"\t"<<nompizzap<<"\t"<<precio<<"\
	t"<<preciop<<"\t"<<costoho<<"\t"<<costohe<<"

void mp(){
	int i;
	pizza datos;
	
	do {
		system("CLS");
		cout<<"-------------------"<<"\n";
		cout<<"Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<"1 - Ingresar tipo de pizza "<<"\n";
		cout<<"2 - Leer archivo"<<"\n";
		cout<<"3 - Reporte"<<"\n";
		cout<<"4 - Salir"<<"\n";
		cout<<"-------------------\n";
		cout<<"Seleccione su opcion: ";
		cin>>i;
		if (i==1)
			tipo(datos);
		else if (i==2)
			read_file();			
		else if (i==3) 	
			read_file();
		else if (i==4)
			break;
		else 
			break;
} while(i!=4);	
}
        
    archivo.close();
    system("CLS");
	pizzeria recordset_r[lineas];
		
	archivo.open(nombreArchivo.c_str(),ios::in);
		if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		exit(1);
	}	
	for (int i = 0; i < lineas; i++)
    {
        if (!archivo)
        {                                               
            cerr << "No se puede abrir el archivo " << endl;
            system("PAUSE");
        }

        archivo>>recordset_r[i].tipo>>recordset_r[i].apellido>>recordset_r[i].tippiz>> 
	recordset_r[i].precio >> recordset_r[i].preciop >> recordset_r[i].costoh
		 >> recordset_r[i].costohe >>  recordset_r[i].descuento >>;

	}
	cout<<"Total a pagar: "<<sumatotal<<endl;
	system("Pause");
	
}

void insertar_datos_archivo(){
	cout<<"Insertando datos\n\n";
	system("PAUSE");
	system("CLS");
}
