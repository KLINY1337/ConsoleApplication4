#include "Cl7.h"

#include <string>
using namespace std;

Cl7::Cl7(string name)
	:name(name + "_7")
{}


string Cl7::GetName() {
	return name;
}