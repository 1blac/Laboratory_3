#include "Automobile.h"

void Automobile::SetBrand(const char* brand) { this->brand = brand; }
void Automobile::SetColour(string colour) { this->colour = colour; }
void Automobile::SetEngine_capacity(double engine_capacity)
{
	if (engine_capacity >= 1000) this->engine_capacity = engine_capacity;
	else 
	{
		double R = 0;

		system("color 4F ");
		system("color 4F ");
		cout << "You have entered an incorrect value for engine capasity, the value range must be between 25 and 2108.Try again" << endl;// exit(1);
		cout << "Engine_capasity: ";
		system("color 0F ");
		cin >> R;
		SetEngine_capacity(R);

	}

}
void Automobile::SetPower(int power) 
{
if (power >= 25 && power <= 2108) this->power = power;
else
{
	int K = 0;

	system("color 4F ");
	system("color 4F ");
	cout << "You have entered an incorrect value for power, the value range must be between 25 and 2108.Try again" << endl;// exit(1);
	cout << "Power of car: ";
	system("color 0F ");
	cin >> K;
	SetPower(K);
}
}

const char* Automobile::GetBrand() const { return  brand; }
string Automobile::GetColour() const { return colour; }
double Automobile::GetEngine_capacity() const { return engine_capacity; }
int Automobile::GetPower() const { return power; }

Automobile::Automobile()
{
	SetBrand("");
	SetColour("");
	SetEngine_capacity(2000);
	SetPower(26);
}
Automobile::Automobile(const char* brand = "", string colour = 0, double engine_capacity = 0, int power = 0)
{
	SetBrand(brand);
	SetColour(colour);
	SetEngine_capacity(engine_capacity);
	SetPower(power);
}
Automobile::Automobile(const Automobile& A)
{
	SetBrand(A.GetBrand());
	SetColour(A.GetColour());
	SetEngine_capacity(A.GetEngine_capacity());
	SetPower(A.GetPower());
}

Automobile::~Automobile() {}

Automobile::operator string() const
{
	stringstream ss;
	ss << "Brand of car: " << GetBrand() << endl;
	ss << "Colour of car: " << GetColour() << endl;
	ss << "Engine capacity: " << GetEngine_capacity() << endl;
	ss << "Power of car: " << GetPower() << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Automobile& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Automobile& A)
{
	const char* brand_tmp;
	string tmp;
	cout << "Print brand of car:"; getline(in, tmp);  brand_tmp = tmp.c_str();
	cout << "Print colour of car:"; in >> A.colour;
	cout << "Print engine capacity:"; in >> A.engine_capacity;
	cout << "Print power of car:"; in >> A.power;
	Automobile(brand_tmp, A.colour, A.engine_capacity, A.power);
	return in;
}