#include<iostream>
#include<iomanip>
#include<vector>
#include<list>
#include<algorithm>
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
void exercicio5() {
    int a ;
    int b ;
    int c ;
    int d ;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    cin >> d ;
    if (b > c && d > a && (a+c) > (a+b) && a%2 == 0 ) {
        cout << "Valores aceitos" << endl ;
    }
    else {
        cout << "Valores invalidos" << endl ;
    }
}
void exercicio6() {
    float a ;
    float b ;
    float c ;
    float d ;
    cin >> a ;
    if (a <= 400){
        d = a*0.15 ;
        b = a+d ;
        c = 15 ;
    }
    else if (a > 400 && a <= 800) {
        d = a*0.12 ;
        b = a+d ;
        c = 12 ;
    }
    else if (a > 800 && a <= 1200) {
        d = a*0.10 ;
        b = a+(a*0.10) ;
        c = 10 ;
    }
    else if (a > 1200 && a <= 2000) {
        d = a*0.07 ;
        b = a+d ;
        c = 7 ;
    }
    else if (a > 2000) {
        d = a*0.04 ;
        b = a+d ;
        c = 4 ;
    }
    cout << "Novo salario: " << b << endl ;
    cout << "Reajuste ganho: " << d << endl ;
    cout << "Em percentual: " << c << endl ;
}
void exercicio7 () {
    int a ;
    cin >> a ;
    for (int i = 0 ; i < 10 ; i++) {
        cout << a << "X" << i-1 << a*(i+1) ; 
    }

}
void exercicio8 () {
    float a ;
    int b ;
    string c ;
    while (true) {
        cout << "Digite o valor da compra" ;
        cin >> a ;
        cout << "Quantas parcelas vai querer fazer?" ;
        cin >> b ;
        cout << "A compra de " << a << "vai ficar " << b << "para cada parcela" << endl ;
        cout << "Digite s para outra compra ou n para cancelar" ;
        cin >> c ;
        if (c == "s") {
            continue ;
        }
        else {
            break ;
        }
    }
}
void exercicio9 () {
    list<int> pares ;
    list<int> impares ;
    list<int> positivos ;
    list<int> negativos ;
    for (int i = 0 ; i < 5 ; i++) {
        int a ;
        cin >> a ;
        if (a%2 == 0) {
            pares.push_back(a) ;
        }
        else if (a%2 != 0) {
            impares.push_back(a) ;
        }
        if (a >= 0) {
            positivos.push_back(a) ;
        }
        else if (a < 0) {
            negativos.push_back(a) ;
        }
    }
    cout << "Pares (" << pares.size() <<") itens: \n" ;
    for (int n :pares ) {
        cout << n << endl;
    }
        cout << "Impares (" << impares.size() <<") itens: \n" ;
    for (int n :impares ) {
        cout << n << endl;
    }
        cout << "Positivos (" << positivos.size() <<") itens: \n" ;
    for (int n :positivos ) {
        cout << n << endl ;
    }
        cout << "Negativos (" << negativos.size() <<") itens: \n" ;
    for (int n :negativos ) {
        cout << n << endl;
    }
}
int main(){
    cout << "começou o codigo\n";

    int decisao = 0;
    while (true) {
        cout << "Qual exercicio vai executar? [1]micro-calculadora [2]um-puco-sobre-mim [3]area-do-circulo [4]media-das-notas [5]valores [6]salario [7]tabuada [8]parcelando [9]bee-crowd-1066 [10]\n" ;
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
            exercicio5();

            cout << "acabou o exercicio 5" << endl ;  
        }
        else if (decisao == 6) {
            exercicio6() ;

            cout << "acabou o exercicio 6" << endl ;  
        }
        else if (decisao == 7) {
            exercicio7() ;

            cout << "acabou o exercicio 7" << endl ;  
        }
        else if (decisao == 8) {
            exercicio8() ;

            cout << "acabou o exercicio 8" << endl ;  
        }
        else if (decisao == 9) {
            exercicio9() ;

            cout << "acabou o exercicio 9" << endl ; 
        }
        else if (decisao == 10) {
            cout << "saindo ..."  << endl ;
            break ;
        }
        
    }
    return 0;
}