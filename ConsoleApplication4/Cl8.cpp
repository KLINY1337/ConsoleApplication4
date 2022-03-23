#include "Cl8.h"
#include <string>
using namespace std;

Cl8::Cl8(string name)
	:name(name + "_8")
{}


string Cl8::GetName() {
	return name;
}