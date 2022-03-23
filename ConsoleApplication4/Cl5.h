#ifndef CL5_H
#define CL5_H
#include "Cl1.h"

#include <string>
using namespace std;
class Cl5 : public Cl1
{
private:
	string name;
public:
	Cl5(string name);
	string GetName();
};

#endif