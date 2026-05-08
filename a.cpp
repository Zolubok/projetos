#include<iostream>
#include<iomanip>
using namespace std;

void exercicio1() {
    cout << "entrei na funcao" << endl;
    int numero1;
    int numero2;
    cout << "digite um numero INTEIRO: ";
    cin >> numero1;
    cout << "digite um numero INTEIRO: ";
    cin >> numero2;
    int numero3 = numero1+numero2;
    cout <<"O resultado da soma é" << numero3 << endl;
    cout <<"O resultado da subtração é " << numero1-numero2 << endl;
    cout <<"O resultado da multiplicação é" << numero1*numero2 << endl;
    cout <<"O resultado da divisão é" << numero1/numero2 << "\n";
    cout << "acabou a função \n";
}
void exercicio2() {
    cout << "começou o exercicio2" << endl ;
    string nome;
    string ano_escolar;
    int idade;
    cout << "Digite seu nome: " ;
    //Getline funcionando como cin , porem para nomes compostos
    getline(cin,nome);
    cout << "Digite seu ano escolar: " ;
    //Getline funcionando como cin , porem para ano escolar completo
    getline(cin,ano_escolar) ;
    cout << "Digite sua idade: " ;
    cin >> idade;
    int nacimento = 2026 - idade ;
    cout << "Ola " << nome <<", voce tem " << idade << " anos e naceu em " << nacimento << ", e esta no " << ano_escolar << endl;

}

void exercicio3() {
    cout << "começou o exercicio3" ;
    float raio;
    cout << "Digite o raio: " ;
    cin >> raio;
    cout << "O raio é: " << 3.14159 * (raio*raio) << endl ;

}
void exercicio4() {
    float primeiro_numero ;
    float segundo_numero ;
    float terceiro_numero ;
    cout << "Digite a primeira nota: " ;
    cin >> primeiro_numero ;
    cout << "Digite a segunda nota: " ;
    cin >> segundo_numero ;
    cout << "Digite a terceira nota: " ;
    cin >> terceiro_numero ;
    float calculo = ((primeiro_numero*2)+(segundo_numero*3)+(terceiro_numero*5))/10 ;
    cout << setprecision(2) << calculo << endl ; 
}
int main(){
    cout << "começou o codigo\n";

    int decisao = 0;
    while (true) {
        cout << "Qual exercicio vai executar? [1]micro-calculadora [2]um-puco-sobre-mim [3]area-do-circulo [4]media-das-notas [5]sair\n" ;
        cin >> decisao ;
        cin.ignore();
        if (decisao == 1) {
            exercicio1();
        
            cout << "acabou o exercicio 1\n";
        }
        else if (decisao == 2){
            exercicio2() ;
        
            cout << "acabou o execicio 2" << endl;
        
        }
        else if (decisao == 3){
            exercicio3();
        
            cout << "acabou o exercicio 3" << endl;
        }
        else if (decisao == 4){
            exercicio4();
        
            cout << "acabou o exercicio 4" << endl ;
        }
        else if (decisao == 5){
            cout << "saindo ..."  << endl ;
            break ;
        }
        
    }
    return 0;
}
/*int main(){
    
    cout << "começou o codigo\n";

    int decisao ; 
    cout << "Qual exercicio vai executar? [1]micro-calculadora [2]um-puco-sobre-mim [3]area-do-circulo [4]media-das-notas [5]sair\n" ;
        cin >> decisao ;
        cin.ignore();
        if (decisao == 1) {
            exercicio1();
        
            cout << "acabou o exercicio 1\n";
        }
        else if (decisao == 2){
            exercicio2() ;
        
            cout << "acabou o execicio 2" << endl;
        
        }
        else if (decisao == 3){
            exercicio3();
        
            cout << "acabou o exercicio 3" << endl;
        }
        else if (decisao == 4){
            exercicio4();
        
            cout << "acabou o exercicio 4" << endl ;
        }
        else if (decisao == 5){
            cout << "saindo ..." ;
        }
        

    //exercicio1();

    //cout << "acabou o exercicio 1\n";
    
    //exercicio2() ;

    //cout << "acabou o execicio 2" << endl;

    //exercicio3();

    //cout << "acabou o exercicio 3" << endl;
    
    //exercicio4();

    //cout << "acabou o exercicio 4" << endl ;
    
    return 0;
}*/

