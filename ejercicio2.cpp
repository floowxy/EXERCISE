#include<iostream>
using namespace std;
int guardar_qhacer();
int guardar_qmoneda();
float guardar_valor_numerico();
float conversion_moneda(int x, int y,float z);
void mostrar_resultado(float m);

int guardar_qhacer(){
	int opc;
	cout<<"CONVERSION DE MONEDAS"<<endl;
	cout<<"1.Conversion de SOLES a DOLARES, EUROS o LIBRAS ESTERLINAS"<<endl;
	cout<<"2.Conversion de DOLARES, EUROS o LIBRAS ESTERLINAS a SOLES"<<endl;
	cout<<"Eliga su opcion:";
	cin>>opc;
	while(opc<1||opc>2){
		cout<<"Invalido. Digite nuevamente:";
		cin>>opc;
	}
	return opc;
}
int guardar_qmoneda(){
	int opc_1;
	cout<<"----Eliga la moneda----"<<endl;
	cout<<"1.Dolares."<<endl;
	cout<<"2.Euros."<<endl;
	cout<<"3.Libras Esterlinas"<<endl;
	cout<<"Eliga su opcion:";
	cin>>opc_1;
	while(opc_1<1||opc_1>3){
		cout<<"Invalido.Digite nuevamente:";
		cin>>opc_1;
	}
	return opc_1;
}
float guardar_valor_numerico(){
	float num;
	cout<<"Digite el valor numerico de la moneda:";
	cin>>num;
	while(num<0){
		cout<<"Invalido.Digite nuevamente:";
		cin>>num;
	}
	return num;
}

float conversion_moneda(int x, int y, float z){
	const float dolar=3.7;
	const float euro=4.1;
	const float libra=4.9;
	float conversion;
	switch(x){
		case 1:
			switch(y){
				case 1:
					conversion = z/dolar;
					break;
				case 2:
					conversion = z/euro;
					break;
				case 3:
					conversion = z/libra;
					break;
			}
		case 2:
			switch(y){
				case 1:
					conversion = z*dolar;
					break;
				case 2:
					conversion = z*euro;
					break;
				case 3:
					conversion = z*libra;
					break;
			}
			break;
	}
	return conversion;
}

void mostrar_resultado(float m){
	cout<<"El resultado de la conversion es:"<<m;
}
int main(){
	int hacer = guardar_qhacer();
	int qmoneda = guardar_qmoneda();
	float valor_moneda = guardar_valor_numerico();
	float conversion = conversion_moneda(hacer,qmoneda,valor_moneda);
	mostrar_resultado(conversion);	
}
