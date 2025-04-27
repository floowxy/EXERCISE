#include<iostream>
using namespace std;

int guardar_valor();
int positivo_negativo(int m);
int clave(int m);
void mostrar_resultado(int x);

int guardar_valor(){
    int num;
    cout<<"Digite un numero:";
    cin>>num;
    return num;
}
int positivo_negativo(int m){
    if(m<0){
        return -1;
    }
    else{
        return m;
    }
}
int clave(int m){
    int suma = 0;
    while(m>0){
        suma += m%10;
        m = m/10;
    }
    return suma%7;

}
void mostrar_resultado(int x){
    cout<<"Su clave es:"<<x<<endl;
}

int main(){
    int valor = guardar_valor();
    int p_o_n = positivo_negativo(valor);

    if (p_o_n == -1){
        cout<<"El numero es negativo."<<p_o_n<<endl;
    }
    else{
        int clave_resultado = clave(p_o_n);
        mostrar_resultado(clave_resultado);
    }
    system("pause");
    return 0;
}