#include<iostream>
#include<string.h>
using namespace std;
const int n = 100;

void leer_frase(char frase[n]);
void frase_sin_espacio(char frase[n], char frase_s_espacio[n]);
void frase_invertida(char frase_s_espacio[n], char frase_invertida[n]);

void leer_frase(char frase[n]){
    cout<<"Digite una frase:";
    cin.getline(frase,n);
}

void frase_sin_espacio(char frase[n], char frase_s_espacio[n]){
    int j=0;
    for(int i=0; frase[i] != '\0'; i++){
        if(frase[i] != ' '){
            frase_s_espacio[j++]=frase[i];
        }
    }
    frase_s_espacio[j]='\0';
    for(int k=0; k<n; k++){
        cout<<frase_s_espacio[k];
    }
    cout<<endl;
}

void frase_invertida(char frase_s_espacio[], char frase_invertidas[n]){
    int longitud = strlen(frase_s_espacio);
    int k=0;
    for(int i=longitud-1; i>=0; i--){
        frase_invertidas[k++]=frase_s_espacio[i];
    }
    frase_invertidas[k]='\0';
    for(int j=0; j<n; j++){
        cout<<frase_invertidas[j];
    }
    cout<<endl;
}

int main(){
    char frase[n];
    char frase_s_espacio[n]="";
    char frase_invertidas[n]="";

    leer_frase(frase);
    strlwr(frase);                    // convierte toda la frase a minúsculas
    frase_sin_espacio(frase, frase_s_espacio);
    frase_invertida(frase_s_espacio, frase_invertidas);

    if ( strcmp(frase_s_espacio, frase_invertidas) == 0 )
        cout<<"Es palindromo."<<endl;
    else
        cout<<"No es palindromo."<<endl;

    return 0;
}
