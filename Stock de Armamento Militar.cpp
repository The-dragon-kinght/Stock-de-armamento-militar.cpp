
/*
#include <iostream>
#include <map>
#include <string>

using namespace std;

// Estructura para representar el armamento
struct Armamento {
    string nombre;
    int cantidad;
    string tipo; // Categoría de armamento (ej. Fusil de Asalto, Lanzacohetes)
    string subcategoria; // Tipo específico de armamento (ej. M16, RPG-7)
};

// Función para agregar armamento al inventario
void agregarArmamento(map<string, Armamento>& inventario, const Armamento& nuevoArmamento) {
    inventario[nuevoArmamento.nombre] = nuevoArmamento;
}

// Función para eliminar armamento del inventario
void eliminarArmamento(map<string, Armamento>& inventario, const string& nombre) {
    inventario.erase(nombre);
}

// Función para actualizar la cantidad de armamento
void actualizarCantidad(map<string, Armamento>& inventario, const string& nombre, int nuevaCantidad) {
    if (inventario.find(nombre) != inventario.end()) {
        inventario[nombre].cantidad = nuevaCantidad;
    } else {
        cout << "Armamento no encontrado.\n";
    }
}

// Función para mostrar el inventario
void mostrarInventario(const map<string, Armamento>& inventario) {
    cout << "Inventario de Armamento:\n";
    for (const auto& par : inventario) {
        const Armamento& armamento = par.second;
        cout << "Nombre: " << armamento.nombre
             << ", Cantidad: " << armamento.cantidad
             << ", Tipo: " << armamento.tipo
             << ", Subcategoría: " << armamento.subcategoria << "\n";
    }
}

bool pedirContrasena() {
    const string contrasenaCorrecta = "ArmsStock388";
    string contrasenaIngresada;

    // Pedir la contraseña hasta que sea la correcta
    while (true) {
        cout << "Ingrese la contraseña para acceder al inventario: ";
        cin >> contrasenaIngresada;

        if (contrasenaIngresada == contrasenaCorrecta) {
            return true;  // Contraseña correcta
        } else {
            cout << "Contraseña inválida. Intente nuevamente." << endl;
        }
    }
}

bool verificarPosicion() {
    int opcion;
    cout << "Bienvenido Camarada al inventario de las fuerzas especiales nacionales, por favor ingrese su posición:\n";
    cout << "1. Comandante Supremo de las Fuerzas Armadas\n";
    cout << "2. Sargento Primero\n";
    cout << "3. Encargado de Logística\n";
    cout << "4. Ingeniero de Sistemas\n";
    cout << "5. Soldado\n";
    cout << "6. Novato\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    // Verificar acceso según la posición
    if (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4) {
        return true; // Acceso permitido
    } else {
        cout << "Solo los Ingenieros, Logística, y superiores tienen acceso al inventario.\n";
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

    // Llamar a la función de contraseña
    if (pedirContrasena()) {
        // Contraseña correcta, verificar posición
        if (verificarPosicion()) {
            // Acceso concedido, continuar con el manejo del inventario
            cout << "Acceso al inventario concedido." << endl;

            do {
                // Mostrar menú de opciones
                cout << "Gestión de Inventario de Armamento Militar\n";
                cout << "1. Agregar Armamento\n";
                cout << "2. Eliminar Armamento\n";
                cout << "3. Actualizar Cantidad\n";
                cout << "4. Mostrar Inventario\n";
                cout << "5. Salir\n";
                cout << "Seleccione una opción: ";
                cin >> opcion;
                cin.ignore(); // Limpiar el buffer de entrada

                switch (opcion) {
                    case 1: // Agregar Armamento
                        cout << "Ingrese el nombre del armamento: ";
                        getline(cin, nombre);
                        cout << "Ingrese la cantidad: ";
                        cin >> cantidad;
                        cin.ignore(); // Limpiar el buffer de entrada
                        cout << "Ingrese la categoría (Fusil de Asalto, Ametralladora, Pistola): ";
                        getline(cin, tipo);
                        cout << "Ingrese la subcategoría (Versión estándar de uso militar, Fusil de asalto soviético, etc.): ";
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
                        cout << "Opción inválida. Intente de nuevo.\n";
                        break;
                }
            } while (opcion != 5);
        } else {
            // Acceso denegado
            return 1;
        }
    } else {
        // Contraseña incorrecta (esto no debería ocurrir debido al bucle)
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
    string tipo; // Categoría de armamento (ej. Fusil de Asalto, Lanzacohetes)
    string subcategoria; // Tipo específico de armamento (ej. M16, RPG-7)
};

// Función para agregar armamento al inventario
void agregarArmamento(map<string, Armamento>& inventario, const Armamento& nuevoArmamento) {
    inventario[nuevoArmamento.nombre] = nuevoArmamento;
}

// Función para eliminar armamento del inventario
void eliminarArmamento(map<string, Armamento>& inventario, const string& nombre) {
    inventario.erase(nombre);
}

// Función para actualizar la cantidad de armamento
void actualizarCantidad(map<string, Armamento>& inventario, const string& nombre, int nuevaCantidad) {
    if (inventario.find(nombre) != inventario.end()) {
        inventario[nombre].cantidad = nuevaCantidad;
    } else {
        cout << "Armamento no encontrado.\n";
    }
}

// Función para mostrar el inventario
void mostrarInventario(const map<string, Armamento>& inventario) {
    if (inventario.empty()) {
        cout << "El inventario está vacío.\n";
        return;
    }

    cout << "Inventario de Armamento:\n";
    for (const auto& par : inventario) {
        const Armamento& armamento = par.second;
        cout << "Nombre: " << armamento.nombre
             << ", Cantidad: " << armamento.cantidad
             << ", Tipo: " << armamento.tipo
             << ", Subcategoría: " << armamento.subcategoria << "\n";
    }
}

bool pedirContrasena() {
    const string contrasenaCorrecta = "ArmsStock388";
    string contrasenaIngresada;

    // Pedir la contraseña hasta que sea la correcta
    while (true) {
        cout << "Ingrese la contraseña para acceder al inventario: ";
        cin >> contrasenaIngresada;

        if (contrasenaIngresada == contrasenaCorrecta) {
            return true;  // Contraseña correcta
        } else {
            cout << "Contraseña inválida. Intente nuevamente." << endl;
        }
    }
}

bool verificarPosicion() {
    int opcion;
    cout << "Bienvenido Camarada al inventario de las fuerzas especiales nacionales, por favor ingrese su posición:\n";
    cout << "1. Comandante Supremo de las Fuerzas Armadas\n";
    cout << "2. Sargento Primero\n";
    cout << "3. Encargado de Logística\n";
    cout << "4. Ingeniero de Sistemas\n";
    cout << "5. Soldado\n";
    cout << "6. Novato\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    // Verificar acceso según la posición
    if (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4) {
        return true; // Acceso permitido
    } else {
        cout << "Solo los Ingenieros, Logística, y superiores tienen acceso al inventario.\n";
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
    agregarArmamento(inventario, {"M16", 100, "Fusil de Asalto", "Versión estándar de uso militar"});
    agregarArmamento(inventario, {"AK-47", 50, "Fusil de Asalto", "Fusil de asalto soviético"});
    agregarArmamento(inventario, {"M249", 30, "Ametralladora", "Ametralladora ligera"});
    agregarArmamento(inventario, {"RPG-7", 20, "Lanzacohetes", "Lanzacohetes portátil"});
    agregarArmamento(inventario, {"M777", 10, "Artillería", "Obús de 155mm"});

    // Llamar a la función de contraseña
    if (pedirContrasena()) {
        // Contraseña correcta, verificar posición
        if (verificarPosicion()) {
            // Acceso concedido, continuar con el manejo del inventario
            cout << "Acceso al inventario concedido." << endl;

            do {
                // Mostrar menú de opciones
                cout << "Gestión de Inventario de Armamento Militar\n";
                cout << "1. Agregar Armamento\n";
                cout << "2. Eliminar Armamento\n";
                cout << "3. Actualizar Cantidad\n";
                cout << "4. Mostrar Inventario\n";
                cout << "5. Salir\n";
                cout << "Seleccione una opción: ";
                cin >> opcion;
                cin.ignore(); // Limpiar el buffer de entrada

                switch (opcion) {
                    case 1: // Agregar Armamento
                        cout << "Ingrese el nombre del armamento: ";
                        getline(cin, nombre);
                        cout << "Ingrese la cantidad: ";
                        cin >> cantidad;
                        cin.ignore(); // Limpiar el buffer de entrada
                        cout << "Ingrese la categoría (Fusil de Asalto, Ametralladora, Lanzacohetes, etc.): ";
                        getline(cin, tipo);
                        cout << "Ingrese la subcategoría (M16, AK-47, RPG-7, etc.): ";
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
                        cout << "Opción inválida. Intente de nuevo.\n";
                        break;
                }
            } while (opcion != 5);
        } else {
            // Acceso denegado
            return 1;
        }
    } else {
        // Contraseña incorrecta (esto no debería ocurrir debido al bucle)
        return 1;
    }

    return 0;
}










