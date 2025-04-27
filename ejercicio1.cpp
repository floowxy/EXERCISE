#include<iostream>
using namespace std;
int guardar_valor();
int factorial(int m);
void mostrar_resultado(int x, int y);

int guardar_valor(){
    int num;
    cout<<"Digite un numero mayor que 0:";
    cin>>num;
    while(num<0){
        cout<<"Invalido. Digite nuevamente:";
        cin>>num;
    }
    return num;
}

int factorial(int m){
    int fact, contador = 1, i;
    if(m==1){
        return m;
    }
    else{
        for(i=1;i<=m;i++){
            contador *= i;
        }
        return contador;
    }
}
void mostrar_resultado(int x, int y){
    cout<<"El factorial de "<<x<<"! es:"<<y<<endl;
}
int main(){

    int valor = guardar_valor();
    int fact = factorial(valor);
    mostrar_resultado(valor,fact);
    system("pause");
    return 0;
}