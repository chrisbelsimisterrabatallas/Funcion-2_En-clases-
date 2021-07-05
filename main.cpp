#include <iostream>
using namespace std;

//Una funcion recibe 3 numeros enteros.
//La funcion debe devolver el mayor de ellos.
// No utilizar condiciones compuestas (AND, ni OR).

int mayor(int num1, int num2, int num3)
{
    //num1=10, num2=8, num3=6
    int may;
    if(num1>num2)      // num3 < num1 < num2
        if(num1>num3)
            may=num1;
        else           // num3 > num1
        may=num3;
    else  //num2 >num1
         if (num2 > num3)    // num3 < num2 >num1
             may=num2;
         else               // num3 > num2 > num1
             may=num3;

    return may;
}

//2)  Una función recibe como parámetro un número entero, que representa el mes del año. La función debe devolver
// el nombre del mes. Por ejemplo si el mes es 2 debe devolver "febrero".

string nombre_mes(int mes)
{
    string aux;
    if(mes==1)
        aux="Enero";
    if(mes==2)
        aux="Febreo";
    if(mes==3)
        aux="Marzo";
    if(mes==4)
        aux="Abril";
    if(mes==5)
        aux="Mayo";
    if(mes==6)
        aux="Junio";
    if(mes==7)
        aux="Julio";
    if(mes==8)
        aux="Agosto";
    if(mes==9)
        aux="Septiembre";
    if(mes==10)
        aux="Octubre";
    if(mes==11)
        aux="Noviembre";
    if(mes==12)
        aux="Diciembre";
    else
        aux="Mes fuera del rango";


    return aux;
}

//3) Diseñe la función que genere un rectángulo.  La función debe
// recibir un entero que indica el número de filas del rectángulo;
// y un carácter que indica el relleno del rectángulo.

string cuadrado(int fila, char relleno)
{
    string aux= "";
    for(int i=1; i<=fila; i++)
    {
        for(int j=1; j<=10; j++)
            aux += relleno;
        aux = aux+ "\n";
    }
    return aux;
}

//Las funciones tipo void, no retornan valores. Se las conoce como
// procedimientos.

void cuadrado2 (int fila, char relleno)
{
    for(int i=1; i<=fila; i++)
    {
        for(int j=1; j<=10; j++)
            cout<<relleno;
        cout<<endl;
    }
}


//4) Diseñe una función que imprima los primeros n números primos.
// El parámetro n indica el total de primos a imprimir.

bool esPrimo(int num)
{
    int cont=2;
    bool flat= true;
    while(cont<=num/2 && flat==true){
        if(num % cont == 0)
            flat = false;
        cont++;
    }
    return flat;
}
void imprimePrimos(int n)
{
    int i = 1; int j=1;
    while (i <= n)
    {
        j++;
        if (esPrimo(j)) {
            cout << " " << j;
            i++;
        }

    }
}

//5) Diseñe la función que devuelva la sumatoria de los n primeros números
// primos. El parámetro n indica el total de primos a sumar.
int sumatoriaPrimos(int n)
{
    int i=1; int j=1; int suma=0;
    while(i<=n)
    {
        j++;
        if(esPrimo(j))
        {
            suma+=j; i++;
        }
    }
}

//6) Diseñe ña funcion que recibe un entero que representa el mes del año.
//la funcion debe retornar el dia maximo que tare ese mes. Por ejemplo si es
//7 debe devolver 31. Ojo con el mes de febrero.

int diaMaximodelMes(int mes, int anio)

{
    int limite=0;
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        limite=31;
    else if(mes==2) {
        if (anio % 4 == 0)
            limite = 29;
        else
            limite = 28;
    }
     else
         limite=30;

    return limite;
}



int main() {
    cout<<endl<<"El mayor de 20, 10, 8 es: "<<mayor(20,10,8);
    cout<<endl<<"El mayor de 20, 30, 31 es: "<<mayor(20,30,31);
    cout<<endl<<"El mayor de 20, 30, 210 es: "<<mayor(20,30,210);

    cout<<endl<<"El mes 1 corresponde a "<<nombre_mes(1);
    cout<<endl<<"El mes 8 corresponde a "<<nombre_mes(8);
    cout<<endl<<"El mes 6 corresponde a "<<nombre_mes(6);
    cout<<endl<<"El mes 1 corresponde a "<<nombre_mes(15);


    cout<<endl;
    cout<<"Imprimiendo figuras "<<endl;
    cout<<cuadrado(5,'a');
    cout<<endl;
    cout<<cuadrado(2,'+');
    cout<<endl;
    cuadrado2(6, '*');
    cout<<endl;

    cout<<endl<<"Impresion de primos";
    imprimePrimos(10);

    cout<<endl<<"La sumatoria de los 5 primeros primos es: ";
    int suma=sumatoriaPrimos(5);
    cout<<suma;
    //cout<<sumatoriaPrimos(5);

    cout<<endl<<"Enero trae "<<diaMaximodelMes(1,2021)<<"DIAS";
    cout<<endl<<"Diciembre trae "<<diaMaximodelMes(12,2021)<<"DIAS";
    cout<<endl<<"Junio trae "<<diaMaximodelMes(6,2021)<<"DIAS";
    cout<<endl<<"Febrero trae "<<diaMaximodelMes(2,2016)<<"DIAS";


    return 0;
}
