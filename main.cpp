#include <iostream>

using namespace std;

int main()
{

    string dia;
    cout << " ingrese un dia de la semana: ";
    cin >> dia;
    int numero;

    if (dia == "lunes" || dia == "LUNES"){
        numero=1;
    }
    else if (dia == "martes" || dia == "MARTES"){
        numero=2;
    }
    else if (dia == "miercoles" || dia == "MIERCOLES"){
        numero=3;
    }
    else if (dia == "jueves" || dia == "JUEVES"){
        numero=4;
    }
    else if (dia == "viernes" || dia == "VIERNES"){
        numero=5;
    }

    switch (numero)
    {
    case 1:
        cout << "no tengo nada";
        break;
     case 2:
        cout << "tengo programacion";
        break;
     case 3:
        cout << "tengo org empresarial";
        break;
     case 4:
        cout << "tengo matematicas";
        break;
     case 5:
        cout << "me dio un paro cardiaco";
        break;

        default:
        cout << "es fin de semana";
        break;
    }




    return 0;
}
