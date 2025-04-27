#include<iostream>
using namespace std;
int pedir_numero();
int mayor_digito(int x);
void mostrar_resultado(int m);

int pedir_numero(){
    int num;
    cout<<"Digite un numero mayor que 0:";
    cin>>num;
    while(num<0){
        cout<<"Invalido.Digite nuevamente:";
        cin>>num;
    }
    return num;
}

int mayor_digito(int x){
    int aux, mayor = 0;
    while(x>0){
        aux = x%10;
        if(aux>mayor){
            mayor = aux;
        }
        x = x/10;
    }
    return mayor;
}
void mostrar_resultado(int m, int n){
    cout<<"El mayor del numero "<<m<<" es : "<<n<<endl;
}
int main(){
    int valor = pedir_numero();
    int mayor_d = mayor_digito(valor);
    mostrar_resultado(valor, mayor_d);
    system("pause");
    return 0;
}