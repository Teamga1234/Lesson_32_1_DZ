#pragma once
#include "Bird.h"
namespace Animals {
	namespace Birds {
		namespace Domestic {
			class Duck : public Bird
			{
			public:
				void makeSound() override {
					std::cout << "Качка: Кря-кря!\n";
				}
			};
		}

	}
}

