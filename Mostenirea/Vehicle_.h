#pragma once
#include <iostream>
#include <string>

class Vehicle_
{
	public:

		Vehicle_()
		{
			std::cout << "	Class Vehicle_ Created" << std::endl;
		}
		~Vehicle_()
		{
			std::cout << "	Class Vehicle_ Destroyed" << std::endl;
		}

		std::string Brand;
		void StartEng()
		{
			std::cout << "	Engine started" << std::endl;
		}
};

// class Derivata : tip_mostenire class_de_baza
class Car_ : public Vehicle_
{
	public:

		Car_()
		{
			std::cout << "	BP Car_ Created" << std::endl;
		}
		~Car_()
		{
			std::cout << "	BP Car_ Destroyed" << std::endl;
		}

		void Honk_()
		{
			std::cout << "	Beep Beep!" << std::endl;
		}
};