#include "Cl5.h"
#include <string>
using namespace std;

Cl5::Cl5(string name)
	:name(name + "_5")
{}


string Cl5::GetName() {
	return name;
}