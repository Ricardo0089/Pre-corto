#include <iostream>
using namespace std;

int main()
{
    // Determinamos las variables
    int opcion;
    double salariobruto, vida = 0, muerte = 0, cuotainvalidez = 0, invalidez = 0, gastofunerario = 0, gastofunerariototal = 0;

    // Pedimos el salario al usuario
    cout << "Bienvenido a nuestra aseguradora\n";
    cout << "Por favor ingrese su salario: ";
    cin >> salariobruto;

    // Validamos el salario
    if (salariobruto < 400)
    {
        cout << "El salario no es válido.\n";
        return 1;
    }

    // Pedimos al usuario que elija una opción
    cout << "Por favor elija una opción\n";
    cout << "1. Seguro de vida\n";
    cout << "2. Seguro por muerte\n";
    cout << "3. Gastos funerarios\n";
    cout << "4. Seguro por invalidez\n";
    cout << "Opción: ";
    cin >> opcion;

    // Validamos la opción ingresada
    if (opcion < 1 || opcion > 4)
    {
        cout << "Opción no válida.\n";
        return 1;
    }

    // Determinamos el valor de "vida" según el salario
    if (salariobruto >= 400 && salariobruto <= 910.00)
    {
        vida = 10000.00;
    }
    else if (salariobruto >= 910.01 && salariobruto <= 1255.00)
    {
        vida = 14000.00;
    }
    else if (salariobruto >= 1255.01 && salariobruto <= 1630.00)
    {
        vida = 18000.00;
    }
    else if (salariobruto >= 1630.01)
    {
        vida = 22000.00;
    }

    // Procesamos según la opción seleccionada
    if (opcion == 1) // Seguro de vida
    {
        cout << "El seguro de vida es: $" << vida << endl;
    }
    else if (opcion == 2) // Seguro por muerte
    {
        muerte = vida; // Asumimos que el seguro por muerte es igual al seguro de vida
        cout << "El seguro por muerte es: $" << muerte << endl;
    }
    else if (opcion == 3) // Gastos funerarios
    {
        gastofunerario = vida * 0.15;
        if (gastofunerario > 1750.00)
        {
            gastofunerario = 1750.00;
        }
        gastofunerariototal = gastofunerario + vida;
        cout << "El gasto funerario es: $" << gastofunerario << endl;
        cout << "El gasto funerario total más la suma asegurada es: $" << gastofunerariototal << endl;
    }
    else if (opcion == 4) // Seguro por invalidez
    {
        invalidez = vida / 2;
        cuotainvalidez = invalidez / 12;
        cout << "El pago principal por invalidez es: $" << invalidez << endl;
        cout << "El pago mensual por invalidez es: $" << cuotainvalidez << endl;
    }
    switch (opcion)
    {
    case 1:
        cout << "El seguro de vida es: $" << vida << endl;
        break;
    case 2:
        cout << "El seguro por muerte es: $" << muerte << endl;
        break;
    case 3:
        cout << "El gasto funerario es: $" << gastofunerario << endl;
        cout << "El gasto funerario total más la suma asegurada es: $" << gastofunerariototal << endl;
        break;
    case 4:
        cout << "El pago principal por invalidez es: $" << invalidez << endl;
        cout << "El pago mensual por invalidez es: $" << cuotainvalidez << endl;
        break;
    default:
        cout << "Opción no válida.\n";
        break;
    }

    return 0;
}
