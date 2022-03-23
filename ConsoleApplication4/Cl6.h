#ifndef CL6_H
#define CL6_H

#include "Cl2.h"
#include "Cl3.h"

#include <string>
using namespace std;
class Cl6 : public Cl2, public Cl3
{
private:
	string name;
public:
	Cl6(string name);
	string GetName();
};

#endif