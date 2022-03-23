#include "Cl1.h"
#include <string>
using namespace std;

Cl1::Cl1(string name)
	:name(name + "_1")
{}

string Cl1::GetName() {
	return name;
}