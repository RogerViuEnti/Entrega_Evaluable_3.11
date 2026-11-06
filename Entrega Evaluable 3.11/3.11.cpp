#include <iostream>
using namespace std;

int main() {
	int count{ 1 };

	while (count <= 10) {
		cout << (count % 2 == 1 ? "****" : "++++++++") << "\n";
		count++;
	}
	return 0;
}
/*El codigo muestra los números del 1 al 10, representados según si son pares o impares.
Los números impares aparecen como "****" y los pares aparecen como "++++++++". */
