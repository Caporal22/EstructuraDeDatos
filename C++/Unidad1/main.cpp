#include <iostream>

using namespace std;

//Resta de dos números sin restar
int restaSinRestar(){
    cout << "Resta de dos numeros sin restar" << endl;
    int num1 = 5, num2 = 1;
    int aux = 0;
    for (int i = num2; i <num1 ; ++i) {
        aux = i;
    }

    cout << "La diferencia es: " << aux << endl;
    cout << "\n------------------------------------" <<endl;
    return aux;
}

//Multiplicar sin multiplicar
int multiplicar(){
    int num1,num2,value;
    num1 = 10;
    num2 = 3;
    value = 0;
    while (num2){
        num2--;
        value +=num1;
    }
    cout << "La multiplicacion es: " << value << endl;
    cout << "\n------------------------------------" <<endl;
    return value;
}

//Dividir dos números sin dividir
int dividirSinDividir(){
    cout << "Division de dos numeros sin dividir" << endl;
    int a,b;
    a = 10;
    b = 2;
    int value = 0;
    for (int i = b; i<=a; i+=b){
        value++;
    }
    cout <<"El valor de la division es: " << value <<endl;
    cout <<"\n---------------------------" << endl;
    return value;
}

//Verificar número primo
void verifyPrime(int number){
    bool prime = true;
    for (int i = 2; i <= number / 2 && prime; ++i) {
        if (number %i == 0) prime = false;
    }
    if (prime) cout <<number <<" is prime "<<endl;
    else cout << number << " in not prime " <<endl;
}





int main() {

    restaSinRestar();
    dividirSinDividir();
    multiplicar();
    verifyPrime(7);
    return 0;
}


