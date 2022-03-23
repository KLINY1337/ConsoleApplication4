#ifndef CL7_H
#define CL7_H

#include "Cl4.h"
#include "Cl5.h"

#include <string>
using namespace std;
class Cl7 : public Cl4, public Cl5
{
private:
	string name;
public:
	Cl7(string name);
	string GetName();
};

#endif