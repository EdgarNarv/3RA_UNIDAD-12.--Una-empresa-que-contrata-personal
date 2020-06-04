#include <iostream>

using namespace std;

int main()
{
    //variables
    int entrevistado[15];//entrevistados al dia por la empresa
    int edad=0;
    int annioNacimiento;
    int promedio=0;



    cout<<"................ENTREVISTADOS..................."<<endl;
    cout<<endl;
    for (int x=0;x<15;x++)
    {
        annioNacimiento=0;
        cout<<"Entrevistado: "<<x<<endl;
        cout<<"Ingrese el annio de nacimiento: ";
        cin>>annioNacimiento;
        annioNacimiento=2020-annioNacimiento;
        entrevistado[x]=annioNacimiento;
        cout<<"Edad "<<x<<": "<<annioNacimiento<<endl;
        cout<<endl;

    }
    int edadMayor=entrevistado[0];
    int edadMenor=entrevistado[0];
    for (int x=0;x<15;x++)
    {
        if (edadMayor<entrevistado[x])
        {
            edadMayor=entrevistado[x];
        }

        if (edadMenor>entrevistado[x])
        {
            edadMenor=entrevistado[x];
        }
    }
    cout<<"Promedio entrevistados: ";
    for(int x=0;x<15;x++){
        promedio+=entrevistado[x];
    }
    cout<<promedio/15<<endl;
    cout<<endl;
    cout<<"La edad menor de los entrevistados: "<<edadMenor<<endl;
    cout<<"La edad mayor de los entrevistados: "<<edadMayor<<endl;
    return 0;
}
