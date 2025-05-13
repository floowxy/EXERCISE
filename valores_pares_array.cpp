#include<iostream>
using namespace std;
int const n=10;

int leer_arreglo(int  arreglo[n]);
void mostrar_arreglo(int arreglo[n]);

int leer_arreglo(int arreglo[n]){
    int num;
    int k=0;
    for(int i=0;i<n;i++){
        cout<<"Digite 10 numeros:";
        cin>>num;
        if(num%2==0){
            arreglo[k++]=num;
        }
    }
    return k;
}
void mostrar_arreglo(int arreglo[n], int k){
    for(int i=0;i<k;i++){
        cout<<arreglo[i]<<endl;
    }
}
int main(){
    int arreglo[n];
    int cantidad_pares= leer_arreglo(arreglo);
    mostrar_arreglo(arreglo, cantidad_pares);
    system("pause");
    return 0;
}