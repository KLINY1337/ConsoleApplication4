#ifndef CL4_H
#define CL4_H
#include "Cl1.h"

#include <string>
using namespace std;
class Cl4 : public Cl1
{
private:
	string name;
public:
	Cl4(string name);
	string GetName();
};

#endif