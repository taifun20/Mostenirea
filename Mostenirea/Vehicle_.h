#pragma once
#include <iostream>
#include <string>

class Vehicle_
{
	public:
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
		void Honk_()
		{
			std::cout << "	Beep Beep!" << std::endl;
		}
};