#ifndef CL8_H
#define CL8_H

#include "Cl6.h"
#include "Cl7.h"

#include <string>
using namespace std;
class Cl8 : public Cl6, public Cl7
{
private:
	string name;
public:
	Cl8(string name);
	string GetName();
};

#endif