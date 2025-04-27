#include<iostream>
using namespace std;
int guardar_numero();
int suma_digitos_pares(int m);
void mostrar_resultado(int x);

int guardar_numero(){
    int num;
    cout<<"Digite un numero positivo:";
    cin>>num;
    while(num<0){
        cout<<"Invalido.Digite nuevamente:";
        cin>>num;
    }
    return num;
}
int suma_digitos_pares(int m){
    int suma = 0;
    int aux;
    while(m>0){
        aux = m%10;
        if(aux%2==0){
            suma += aux;
        }
        m = m/10;
    }
    return suma;
}
void mostrar_resultado(int x){
    cout<<"La suma de las cifras pares es:"<<x<<endl;
}
int main(){
    int valor = guardar_numero();
    int resultado_suma = suma_digitos_pares(valor);
    mostrar_resultado(resultado_suma);
    system("pause");
    return 0;
}