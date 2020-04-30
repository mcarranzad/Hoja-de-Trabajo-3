/*El presidente de un club de futbol requiere calcular el sueldo de sus jugadores si se tiene como dato la edad y la nacionalidad del 
jugador. Además se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00
Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.
Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por los rangos de edad. Además de indicar que 
rango de edad es el más remunerado.*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

struct jugador {
	string nombre;
	string nacionalidad;
	int edad;
	float sueldo;
int main()
{
	struct JUGADORES
	{
		string nomJugador;
		string nacJugador;
		int edjugador;
		float salJugador;

};
void mp();
void leer_archivo();
void grabar_archivo();
int main(){
	mp();
//return 0;
}
void mp(){ 
 
	int resp;
	//string nombrearchivo;
	//cout<<"Indique nombre de archivo: ";
	//getline(cin,nombrearchivo);
	
	do{
system("PNJ");
		cout<<"--------------------------"<<"\n";
		cout<<" Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - Ingresar Jugado a la planilla "<<"\n";
		cout<<" 2 - Mostrar nacionalidad del jugador "<<"\n";
		cout<<" 3 - Mostrar edad jugador "<<"\n";
		cout<<" 4 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opciÃ³n: ";
		cin>>resp;
		if (resp==1){		
			system("PNJ");
			planilla();			
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
	{
		cout << "Digite el nombre del jugador: ";
		cin >> nomjugador;
 
		cout << "Dijite el nombre del jugador #" << numJugador++ << ": ";
		cin >> J[numJugador].nomJugador
cin >> J[numJugador].edJugador;
 
		cout << "desea agregar mas jugadores? s/n: ";
		cin >> sn;
		if (sn == 'n')
		{
			i=0;
		}
	}
	void grabar_archivo(){
	string nombre_jug;
	string nacionalidad_jug;
	int edad_jug;
	float salario_jug;
	fflush(stdin);
	cout<<"Ingrese Nombre del jugador: "<<endl;
	getline(cin,nombre_jugador);
	fflush(stdin);
	cout<<"Ingrese si el jugador es extranjero: "<<endl;
	getline(cin,nombre_jug);
	cout<<"Ingrese edad del jugador: "<<endl;
	cin>>cod_jug;
	cout<<"Ingrese Salario de jugador: "<<endl;
	cin>>salario_jug;
	
	ofstream archivo;
	archivo.open("jugadores.txt",ios::app);
	
	archivo<<nombre_jug<<"\t"<<nacionalidad_jug<<"\t"<<edad_jug<<"\t"<<salario_jug<<endl;
	archivo.close();
}
void leer_archivo(){
}
void leer_archivo(){
	ifstream archivo; 
	archivo.open("empleado.txt",ios::in);
	int lineas,i=0;
	string s,linea;
	float sumatoriasalarial=0.00;	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		exit(1);
}
	while (getline(archivo, s))
        lineas++;
	archivo.close();
	
	empleado recordset[lineas];
	
	archivo.open("jugadores.txt",ios::in);
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
archivo>>recordset[i].nombre>>recordset[i].apellido>>recordset[i].codjug>>recordset[i].salario;
    }
    archivo.close(); 
    for(int i = 0; i < lineas; i++){
    	cout<<recordset[i].codjug<<" "<<recordset[i].nombre<<" "<<recordset[i].nacionalidad<<" "<<recordset[i].salario<<endl;
    	sumatoriasalarial+=recordset[i].salario;
	}
	cout<<"Sumatorial total: "<<sumatoriasalarial;
	system("PAUSE");
}
