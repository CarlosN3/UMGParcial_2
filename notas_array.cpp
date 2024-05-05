#include <iostream>
#include <string>

using namespace std; 

	struct Estudiante {
	
		double id;
		string nombre;
		string apellido;
		double notas [4]; 
		double promedio; 
		bool aprobado;
	};
	
int main(){
	int n;
	cout <<"ingrese numero de estudiante: ";
	cin>> n;
	
	Estudiante estudiantes[n];
	
	for (int i=0;i<n;i++){
	
	cout<< "ingrese el ID del estudiante " <<i+1<<": "<<endl;
	cin>>estudiantes[i].id;
	cin.ignore();
	
	cout<<"Ingrese los nombres del estudiante"<<i+1<< ": "<<endl;
	getline(cin,estudiantes[i].nombre);
	
	cout<<"Ingrese los apellidos del estudiante "<<i+1<< ": "<<endl;
	getline(cin,estudiantes[i].apellido);
	
	double cali = 0.0;
	
	for (int j =0; j<4;j++){
		
		cout<<"ingrese la nota"<<j+1<<" :"<<"del estudiante"<<i+1<<": "<<endl;
		cin>>estudiantes[i].notas[j];
		cali += estudiantes[i].notas[j];
	}
		estudiantes[i].promedio = cali /4;
		estudiantes[i].aprobado = (estudiantes[i].promedio >= 60);		
}
 
  cout<<"/informacion del estudiante"<<endl;
	for (int i=0;i<n;i++){
		cout<<"/n"<<endl;
		cout<<"id del estudiante: "<<estudiantes[i].id<<endl;
		cout<<"Nombres del estudiante: "<<estudiantes[i].nombre<<endl;
		cout<<"Apellidos del estudiante: "<<estudiantes[i].apellido<<endl;
		cout<<"Promedio del estudiante: "<<estudiantes[i].promedio<<endl;
		if (estudiantes[i].promedio = estudiantes[i].aprobado){
			cout<<"estudiante aprobado " <<estudiantes[i].nombre;
		}
		else cout<<"estudiante reprobado";
	}
	
}
