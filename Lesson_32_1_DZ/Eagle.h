#pragma once
#include "Bird.h"
namespace Animals {
	namespace Birds {
		namespace Domestic {
			class Eagle : public Bird
			{
			public:
				void makeSound() override {
					std::cout << "Орел: Крик орла!\n";
				}
			};
		}

	}
}

