#include "Truck.h"

Truck::Truck()
{
	SetBrand("");
	SetColour("");
	SetEngine_capacity(2000);
	SetPower(50);
	
}
Truck::Truck( const char* brand = "", string colour = "",double engine_capasity = 0, int power = 0)
{
	
	SetBrand(brand);
	SetColour(colour);
	SetEngine_capacity(engine_capasity);
	SetPower(power);
}

Truck::~Truck() {}

void Truck::SetLoad_capacity(int load_capacity)
{
	if (load_capacity >= 500 && load_capacity <= 100000) this->load_capacity = load_capacity;
	else
	{
		double F = 0;
		cout << "Brand of car: " << GetBrand() << endl;
		cout << "Colour of car: " << GetColour() << endl;
		cout << "Engine capacity: " << GetEngine_capacity() << endl;
		cout << "Power of car: " << GetPower() << endl;
		cout << "Load_capacity: " << load_capacity << endl;
		system("color 4F ");
		system("color 4F ");
		cout << "You have entered an incorrect value for load capasity, the value range must be between 500 and 100000.Try again" << endl;// exit(1);
		cout << "Load_capacity: ";
		system("color 0F ");
		cin >> F;
		SetLoad_capacity(F);
	}
}
void Truck::Setbrand(const char* brand) { Automobile::SetBrand(brand); }
int Truck::GetLoad_capacity() const { return load_capacity; }
const char* Truck::Getbrand() const { return brand; }

Truck::operator string() const
{
	stringstream ss;
	ss << "Brand of car: " << GetBrand() << endl;
	ss << "Colour of car: " << GetColour() << endl;
	ss << "Engine capacity: " << GetEngine_capacity() << endl;
	ss << "Power of car: " << GetPower() << endl;
	ss << "Load_capacity: " << GetLoad_capacity() << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Truck& A)
{
	out << string(A);
	return out;
}