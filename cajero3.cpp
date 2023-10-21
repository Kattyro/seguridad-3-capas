//programa: ingrese.cpp
//autor:katherine oviedo
#include<iostream>
using namespace std;
int main()
{
	int c11,c12,c13,c01,c02,c03;
	cout<<"ingrese las contraseñas c11 c12 c13";
	cin>>c11>>c12>>c13;
	if(c11==c01){
		if(c12==c02){
			if(c13==c03){
				cout<<"acceso correcto";
			}else{
				cout<<"la tercera contraseña no fue correcta"<<endl;
			}
		}else{
			cout<<"la segunda clave no fue correcta"<<endl;
		}
	}else{
		cout<<"la primera clave no fue correcta"<<endl;
	}
	return(0);
}
