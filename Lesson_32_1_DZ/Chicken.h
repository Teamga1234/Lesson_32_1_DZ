#pragma once
#include "Bird.h"
namespace Animals {
	namespace Birds {
		namespace Domestic {
			class Chicken : public Bird
			{
			public:
				void makeSound() override {
					std::cout << "Курка: Кудкудах!\n";
				}
			};
		}

	}
}

