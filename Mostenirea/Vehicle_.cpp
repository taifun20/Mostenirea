#include "Vehicle_.h"


void Vehicle_::StartEng()
{
	std::cout 
		<< "	Engine started, with " << Gears << " gears and " << TotalWheels << " wheels on the ground, your " 
		<< Brand << " " << Model << " is ready"
		<< std::endl 
		<< "	to race against the Blacklist members" << std::endl;
}

void Vehicle_::SetTotalWheels(int LV_TotalWheels)
{
	TotalWheels = LV_TotalWheels;
}

void Vehicle_::SetGears(int LV_Gears)
{
	Gears = LV_Gears;
}

void Vehicle_::GetTotalWheels()
{
	std::cout << "	Total Wheels: " << TotalWheels << std::endl;
}

void Vehicle_::GetGears()
{
	std::cout << "	Total Gears: " << Gears << std::endl;
}


void Car_::Honk_()
{
	std::cout << "	Honk Honk!" << std::endl;
}