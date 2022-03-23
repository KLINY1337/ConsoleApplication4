#ifndef CL2_H
#define CL2_H
#include "Cl1.h"

#include <string>
using namespace std;
class Cl2 : public Cl1
{
private:
	string name;
public:
	Cl2(string name);
	string GetName();
};

#endif