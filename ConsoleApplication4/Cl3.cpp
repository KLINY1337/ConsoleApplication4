#include "Cl3.h"

#include <string>
using namespace std;

Cl3::Cl3(string name)
	:name(name + "_3")
{}


string Cl3::GetName() {
	return name;
}