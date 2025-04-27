#include<iostream>
using namespace std;
int guardar_valor();
int contar_impares(int x);
void mostrar_resultado(int m, int n);

int guardar_valor(){
    int num;
    cout<<"Digite un numero mayor que 0:";
    cin>>num;
    while(num<0){
        cout<<"Invalido.Digite nuevamente:";
        cin>>num;
    }
    return num;
}

int contar_impares(int x){
    int contador = 0;
    int aux;
    while(x>0){
        aux =x%10;
        if(aux%2 != 0){
            contador++;
        }
        x = x/10;
    }
    return contador;
}
void mostrar_resultado(int m, int n){
    cout<<"La cantidad de numeros impares del numero "<<m<<" es :"<<n<<endl;
}
int main(){
    int valor = guardar_valor();
    int cantidad_i = contar_impares(valor);
    mostrar_resultado(valor, cantidad_i);

    system("pause");
    return 0;
}