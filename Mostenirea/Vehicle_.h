#pragma once
#include <iostream>
#include <string>

class Vehicle_
{
	public:

		Vehicle_()
		{
			std::cout << "	DEBUG: Class Vehicle_ Created" << std::endl << std::endl;
		}
		~Vehicle_()
		{
			std::cout << "	DEBUG: Class Vehicle_ Destroyed" << std::endl << std::endl;
		}

		std::string Brand;
		std::string Model;
		void StartEng();
		void SetTotalWheels(int LV_TotalWheels);
		void SetGears(int LV_Gears);
		void GetTotalWheels();
		void GetGears();

	private:
		int TotalWheels{0};
		int Gears{0};
};

// class Derivata : tip_mostenire class_de_baza
class Car_ : public Vehicle_
{
	public:

		Car_()
		{
			std::cout << "	DEBUG: BP Car_ Created" << std::endl << std::endl;
		}
		~Car_()
		{
			std::cout << "	DEBUG: BP Car_ Destroyed" << std::endl << std::endl;
		}

		void Honk_();

	// protected : nu se poate apela din main doar din clasa care mosteneste
	// Ramane public doar pentru clasa care mosteneste aceasta clasa
	protected:
	private:
};