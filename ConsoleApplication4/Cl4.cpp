#include "Cl4.h"
#include <string>
using namespace std;

Cl4::Cl4(string name)
	:name(name + "_4")
{}


string Cl4::GetName() {
	return name;
}