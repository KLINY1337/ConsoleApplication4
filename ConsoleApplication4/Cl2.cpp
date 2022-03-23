#include "Cl2.h"

#include <string>
using namespace std;

Cl2::Cl2(string name)
	:name(name + "_2")
{}


string Cl2::GetName() {
	return name;
}