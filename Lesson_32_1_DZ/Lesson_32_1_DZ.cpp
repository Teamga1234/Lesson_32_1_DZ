#include "Wolf.h"
#include "Eagle.h"
#include "Duck.h"
#include "Chicken.h"
#include "Lion.h"
#include "Dog.h"
#include <vector>
using namespace Animals::Wild;
using namespace Animals::Birds::Domestic;
int main()
{
	setlocale(0, "");
	std::vector<Animals::Animal*> Zoo;
	Zoo.push_back(new Lion);
	Zoo.push_back(new Wolf);
	Zoo.push_back(new Dog);
	Zoo.push_back(new Chicken);
	Zoo.push_back(new Duck);
	Zoo.push_back(new Eagle);
	for (const auto& a : Zoo)
	{
		a->makeSound();
	}
	
}
