
#ifndef CL3_H
#define CL3_H
#include "Cl1.h"

#include <string>
using namespace std;
class Cl3 : public Cl1
{
private:
	string name;
public:
	Cl3(string name);
	string GetName();
};

#endif