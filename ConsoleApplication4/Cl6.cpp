#include "Cl6.h"

#include <string>
using namespace std;

Cl6::Cl6(string name)
	:name(name + "_6")
{}


string Cl6::GetName() {
	return name;
}