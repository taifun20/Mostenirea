
#include <iostream>
#include "Vehicle_.h"


void FirstCar_()
{
	Car_ BMW_M3_GTR_;
	// Set Stats
	BMW_M3_GTR_.SetGears(6);
	BMW_M3_GTR_.SetTotalWheels(4);
	//BMW_M3_GTR_.GetGears();
	//BMW_M3_GTR_.GetTotalWheels();
	//Set Name / Brand
	BMW_M3_GTR_.Brand = "BMW";
	BMW_M3_GTR_.Model = "M3 GTR";
	// Call Functions
	BMW_M3_GTR_.StartEng();
	BMW_M3_GTR_.Honk_();
}

int main()
{
	FirstCar_();
}