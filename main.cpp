#include <iostream>

using namespace std;
float calculardollar(float a){
float res=0;
float dollar=6.96;
res=a/dollar;
return res;
}
float calcularreales(float a){
float res=0;
float real=1.25;
res=a/real;
return res;
}
float calcularpesoargen(float a){
float res=0;
float pesoarg=0.076;
res=a/pesoarg;
return res;
}
float calcularguaranies(float a){
float res=0;
float guaranies=986;
res=a*986;
return res;
}
string cambio(int n){
    int x;
    cout<<"Ingrese la cantidad que tiene en bolivianos"<<endl;
    cin>>x;
    cout<<"Dolar"<<endl;
    cout<<calculardollar(x)<<endl;
    cout<<"Reales"<<endl;
    cout<<calcularreales(x)<<endl;
    cout<<"Peso argentino"<<endl;
    cout<<calcularpesoargen(x)<<endl;
    cout<<"Guaranies"<<endl;
    cout<<calcularguaranies(x)<<endl;

    return "";
}
int main()
{
    int a;
    cout<<"Bienvenido al programa de cambio de moneda"<<endl;
    cambio(a);
    return 0;
}
