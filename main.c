#include <iostream>
#include <cmath>
#include "electricfield.c"
#include "magneticfield.c"

int main() {
    // Electric Field 
		Electric_Field E_default;
		Electric_Field E_components(1e5, 10.9, 1.7e2);
		
		std::cout << "Default Electric Field:" << std::endl;
		E_default.print();
		
		std::cout << "\nElectric Field with components (1e5, 10.9, 1.7e2):" << std::endl;
		E_components.print();
		
		// Magnetic Field 
		Magnetic_Field B_default;
		Magnetic_Field B_components(3.5, 5.2, 1.9);
		
		std::cout << "\nDefault Magnetic Field:" << std::endl;
		B_default.print();
		
		std::cout << "\nMagnetic Field with components (3.5, 5.2, 1.9):" << std::endl;
		B_components.print();

return 0;
}
