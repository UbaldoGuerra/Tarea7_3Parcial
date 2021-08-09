#include <iostream>
#include <math.h>

using namespace std; 

//crear una clase, esta pueda calcular la fórmula cuadrática.


class FormulaC{
	public: 
		void valores (){
		system ("cls");
		double a, b, c, x1, x2, raiz, filtroRaiz;
		cout<<"Ingrese el valor de a: ";
		cin>>a;
		cout<<"Ingrese el valor de b: ";
		cin>>b;
		cout<<"Ingrese el valor de c: ";
		cin>>c;
		if (a==0){
			cout<<"a no puede ser cero. \n";
		} else{
			filtroRaiz= pow(b,2)-(4*a*c);
			if (filtroRaiz<0){
				cout<<"La raiz cuadrada no puedes ser negativa. \n";
			} else {
				x1= formulacuadraticaX1(a, b, c);
				x2= formulacuadraticaX2(a, b, c);
				//x1= (-b + sqrt(filtroRaiz)) / (2*a);
				//x2= (-b - sqrt(filtroRaiz)) / (2*a);
				
				cout<<"X1: "<<x1<<endl;
				cout<<"X2: "<<x2<<endl;
				}
			}
		system ("pause");
		}
	
				
	double formulacuadraticaX1(double a, double b, double c){
	double x1;
	x1 = (-b + sqrt(pow(b,2) - (4*a*c))) / (2*a);
	
	return x1;
	}
	
	double formulacuadraticaX2(double a, double b, double c){
	double x2;
	x2 = (-b - sqrt(pow(b,2) - (4*a*c))) / (2*a);
	
	return x2;
	}
};

int main(int argc, char** argv) {

	FormulaC f;
	
	f.valores();
	
	return 0;
}
