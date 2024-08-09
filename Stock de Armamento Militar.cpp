
/*
#include <iostream>
#include <map>
#include <string>

using namespace std;

// Estructura para representar el armamento
struct Armamento {
    string nombre;
    int cantidad;
    string tipo; // Categor�a de armamento (ej. Fusil de Asalto, Lanzacohetes)
    string subcategoria; // Tipo espec�fico de armamento (ej. M16, RPG-7)
};

// Funci�n para agregar armamento al inventario
void agregarArmamento(map<string, Armamento>& inventario, const Armamento& nuevoArmamento) {
    inventario[nuevoArmamento.nombre] = nuevoArmamento;
}

// Funci�n para eliminar armamento del inventario
void eliminarArmamento(map<string, Armamento>& inventario, const string& nombre) {
    inventario.erase(nombre);
}

// Funci�n para actualizar la cantidad de armamento
void actualizarCantidad(map<string, Armamento>& inventario, const string& nombre, int nuevaCantidad) {
    if (inventario.find(nombre) != inventario.end()) {
        inventario[nombre].cantidad = nuevaCantidad;
    } else {
        cout << "Armamento no encontrado.\n";
    }
}

// Funci�n para mostrar el inventario
void mostrarInventario(const map<string, Armamento>& inventario) {
    cout << "Inventario de Armamento:\n";
    for (const auto& par : inventario) {
        const Armamento& armamento = par.second;
        cout << "Nombre: " << armamento.nombre
             << ", Cantidad: " << armamento.cantidad
             << ", Tipo: " << armamento.tipo
             << ", Subcategor�a: " << armamento.subcategoria << "\n";
    }
}

bool pedirContrasena() {
    const string contrasenaCorrecta = "ArmsStock388";
    string contrasenaIngresada;

    // Pedir la contrase�a hasta que sea la correcta
    while (true) {
        cout << "Ingrese la contrase�a para acceder al inventario: ";
        cin >> contrasenaIngresada;

        if (contrasenaIngresada == contrasenaCorrecta) {
            return true;  // Contrase�a correcta
        } else {
            cout << "Contrase�a inv�lida. Intente nuevamente." << endl;
        }
    }
}

bool verificarPosicion() {
    int opcion;
    cout << "Bienvenido Camarada al inventario de las fuerzas especiales nacionales, por favor ingrese su posici�n:\n";
    cout << "1. Comandante Supremo de las Fuerzas Armadas\n";
    cout << "2. Sargento Primero\n";
    cout << "3. Encargado de Log�stica\n";
    cout << "4. Ingeniero de Sistemas\n";
    cout << "5. Soldado\n";
    cout << "6. Novato\n";
    cout << "Seleccione una opci�n: ";
    cin >> opcion;

    // Verificar acceso seg�n la posici�n
    if (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4) {
        return true; // Acceso permitido
    } else {
        cout << "Solo los Ingenieros, Log�stica, y superiores tienen acceso al inventario.\n";
        return false; // Acceso denegado
    }
}

int main() {
    map<string, Armamento> inventario;
    int opcion;
    string nombre;
    int cantidad;
    string tipo;
    string subcategoria;

    // Llamar a la funci�n de contrase�a
    if (pedirContrasena()) {
        // Contrase�a correcta, verificar posici�n
        if (verificarPosicion()) {
            // Acceso concedido, continuar con el manejo del inventario
            cout << "Acceso al inventario concedido." << endl;

            do {
                // Mostrar men� de opciones
                cout << "Gesti�n de Inventario de Armamento Militar\n";
                cout << "1. Agregar Armamento\n";
                cout << "2. Eliminar Armamento\n";
                cout << "3. Actualizar Cantidad\n";
                cout << "4. Mostrar Inventario\n";
                cout << "5. Salir\n";
                cout << "Seleccione una opci�n: ";
                cin >> opcion;
                cin.ignore(); // Limpiar el buffer de entrada

                switch (opcion) {
                    case 1: // Agregar Armamento
                        cout << "Ingrese el nombre del armamento: ";
                        getline(cin, nombre);
                        cout << "Ingrese la cantidad: ";
                        cin >> cantidad;
                        cin.ignore(); // Limpiar el buffer de entrada
                        cout << "Ingrese la categor�a (Fusil de Asalto, Ametralladora, Pistola): ";
                        getline(cin, tipo);
                        cout << "Ingrese la subcategor�a (Versi�n est�ndar de uso militar, Fusil de asalto sovi�tico, etc.): ";
                        getline(cin, subcategoria);
                        agregarArmamento(inventario, {nombre, cantidad, tipo, subcategoria});
                        break;

                    case 2: // Eliminar Armamento
                        cout << "Ingrese el nombre del armamento a eliminar: ";
                        getline(cin, nombre);
                        eliminarArmamento(inventario, nombre);
                        break;

                    case 3: // Actualizar Cantidad
                        cout << "Ingrese el nombre del armamento: ";
                        getline(cin, nombre);
                        cout << "Ingrese la nueva cantidad: ";
                        cin >> cantidad;
                        cin.ignore(); // Limpiar el buffer de entrada
                        actualizarCantidad(inventario, nombre, cantidad);
                        break;

                    case 4: // Mostrar Inventario
                        mostrarInventario(inventario);
                        break;

                    case 5: // Salir
                        cout << "Saliendo del programa...\n";
                        break;

                    default:
                        cout << "Opci�n inv�lida. Intente de nuevo.\n";
                        break;
                }
            } while (opcion != 5);
        } else {
            // Acceso denegado
            return 1;
        }
    } else {
        // Contrase�a incorrecta (esto no deber�a ocurrir debido al bucle)
        return 1;
    }

    return 0;
}
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

// Estructura para representar el armamento
struct Armamento {
    string nombre;
    int cantidad;
    string tipo; // Categor�a de armamento (ej. Fusil de Asalto, Lanzacohetes)
    string subcategoria; // Tipo espec�fico de armamento (ej. M16, RPG-7)
};

// Funci�n para agregar armamento al inventario
void agregarArmamento(map<string, Armamento>& inventario, const Armamento& nuevoArmamento) {
    inventario[nuevoArmamento.nombre] = nuevoArmamento;
}

// Funci�n para eliminar armamento del inventario
void eliminarArmamento(map<string, Armamento>& inventario, const string& nombre) {
    inventario.erase(nombre);
}

// Funci�n para actualizar la cantidad de armamento
void actualizarCantidad(map<string, Armamento>& inventario, const string& nombre, int nuevaCantidad) {
    if (inventario.find(nombre) != inventario.end()) {
        inventario[nombre].cantidad = nuevaCantidad;
    } else {
        cout << "Armamento no encontrado.\n";
    }
}

// Funci�n para mostrar el inventario
void mostrarInventario(const map<string, Armamento>& inventario) {
    if (inventario.empty()) {
        cout << "El inventario est� vac�o.\n";
        return;
    }

    cout << "Inventario de Armamento:\n";
    for (const auto& par : inventario) {
        const Armamento& armamento = par.second;
        cout << "Nombre: " << armamento.nombre
             << ", Cantidad: " << armamento.cantidad
             << ", Tipo: " << armamento.tipo
             << ", Subcategor�a: " << armamento.subcategoria << "\n";
    }
}

bool pedirContrasena() {
    const string contrasenaCorrecta = "ArmsStock388";
    string contrasenaIngresada;

    // Pedir la contrase�a hasta que sea la correcta
    while (true) {
        cout << "Ingrese la contrase�a para acceder al inventario: ";
        cin >> contrasenaIngresada;

        if (contrasenaIngresada == contrasenaCorrecta) {
            return true;  // Contrase�a correcta
        } else {
            cout << "Contrase�a inv�lida. Intente nuevamente." << endl;
        }
    }
}

bool verificarPosicion() {
    int opcion;
    cout << "Bienvenido Camarada al inventario de las fuerzas especiales nacionales, por favor ingrese su posici�n:\n";
    cout << "1. Comandante Supremo de las Fuerzas Armadas\n";
    cout << "2. Sargento Primero\n";
    cout << "3. Encargado de Log�stica\n";
    cout << "4. Ingeniero de Sistemas\n";
    cout << "5. Soldado\n";
    cout << "6. Novato\n";
    cout << "Seleccione una opci�n: ";
    cin >> opcion;

    // Verificar acceso seg�n la posici�n
    if (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4) {
        return true; // Acceso permitido
    } else {
        cout << "Solo los Ingenieros, Log�stica, y superiores tienen acceso al inventario.\n";
        return false; // Acceso denegado
    }
}

int main() {
    map<string, Armamento> inventario;
    int opcion;
    string nombre;
    int cantidad;
    string tipo;
    string subcategoria;

    // Llenar el inventario con datos de prueba
    agregarArmamento(inventario, {"M16", 100, "Fusil de Asalto", "Versi�n est�ndar de uso militar"});
    agregarArmamento(inventario, {"AK-47", 50, "Fusil de Asalto", "Fusil de asalto sovi�tico"});
    agregarArmamento(inventario, {"M249", 30, "Ametralladora", "Ametralladora ligera"});
    agregarArmamento(inventario, {"RPG-7", 20, "Lanzacohetes", "Lanzacohetes port�til"});
    agregarArmamento(inventario, {"M777", 10, "Artiller�a", "Ob�s de 155mm"});

    // Llamar a la funci�n de contrase�a
    if (pedirContrasena()) {
        // Contrase�a correcta, verificar posici�n
        if (verificarPosicion()) {
            // Acceso concedido, continuar con el manejo del inventario
            cout << "Acceso al inventario concedido." << endl;

            do {
                // Mostrar men� de opciones
                cout << "Gesti�n de Inventario de Armamento Militar\n";
                cout << "1. Agregar Armamento\n";
                cout << "2. Eliminar Armamento\n";
                cout << "3. Actualizar Cantidad\n";
                cout << "4. Mostrar Inventario\n";
                cout << "5. Salir\n";
                cout << "Seleccione una opci�n: ";
                cin >> opcion;
                cin.ignore(); // Limpiar el buffer de entrada

                switch (opcion) {
                    case 1: // Agregar Armamento
                        cout << "Ingrese el nombre del armamento: ";
                        getline(cin, nombre);
                        cout << "Ingrese la cantidad: ";
                        cin >> cantidad;
                        cin.ignore(); // Limpiar el buffer de entrada
                        cout << "Ingrese la categor�a (Fusil de Asalto, Ametralladora, Lanzacohetes, etc.): ";
                        getline(cin, tipo);
                        cout << "Ingrese la subcategor�a (M16, AK-47, RPG-7, etc.): ";
                        getline(cin, subcategoria);
                        agregarArmamento(inventario, {nombre, cantidad, tipo, subcategoria});
                        break;

                    case 2: // Eliminar Armamento
                        cout << "Ingrese el nombre del armamento a eliminar: ";
                        getline(cin, nombre);
                        eliminarArmamento(inventario, nombre);
                        break;

                    case 3: // Actualizar Cantidad
                        cout << "Ingrese el nombre del armamento: ";
                        getline(cin, nombre);
                        cout << "Ingrese la nueva cantidad: ";
                        cin >> cantidad;
                        cin.ignore(); // Limpiar el buffer de entrada
                        actualizarCantidad(inventario, nombre, cantidad);
                        break;

                    case 4: // Mostrar Inventario
                        mostrarInventario(inventario);
                        break;

                    case 5: // Salir
                        cout << "Saliendo del programa...\n";
                        break;

                    default:
                        cout << "Opci�n inv�lida. Intente de nuevo.\n";
                        break;
                }
            } while (opcion != 5);
        } else {
            // Acceso denegado
            return 1;
        }
    } else {
        // Contrase�a incorrecta (esto no deber�a ocurrir debido al bucle)
        return 1;
    }

    return 0;
}










