#include "temperature.h"


  Temperature::Temperature(){
	kelvin_ = 0;
}

  Temperature::Temperature(double kelvin){
	kelvin_ = kelvin;
}

  Temperature::Temperature(double temp, char unit){

	if (unit == 'F' || unit == 'f') {
		SetTempFromFahrenheit(temp);
	
	}
	else if (unit == 'C' || unit == 'c') {
		SetTempFromCelsius(temp);
	
	}
	else {

		SetTempFromKelvin(temp);
	
	}
		
}

void Temperature::SetTempFromKelvin(double kelvin){
	kelvin_ = kelvin;
}

void Temperature::SetTempFromCelsius(double celsius){
	kelvin_ = celsius;
	kelvin_ = kelvin_ + 273.15;

}

void Temperature::SetTempFromFahrenheit(double fahrenheit) {

	kelvin_ = (5.0 * (fahrenheit - 32) / 9.0) + 273.15;
}

double Temperature::GetTempAsKelvin() const {
	return kelvin_;
}

double Temperature::GetTempAsCelsius() const {
	double celsius_ = kelvin_ - 273.15;
	return celsius_;
}

double Temperature::GetTempAsFahrenheit() const {
	double fahrenheit_ = ((GetTempAsCelsius() * 9.0) / 5.0) + 32;
	return fahrenheit_;
}

string Temperature::ToString(char unit) const {
		stringstream ss;
		if(unit == 'F' || unit == 'f') {
		ss << GetTempAsFahrenheit() << " " << "Fahrenheit";
		} else if (unit == 'C' || unit == 'c') {
		ss << GetTempAsCelsius() << " " << "Celsius";
		} else if (unit == 'K' || unit == 'k') { 
		ss << setprecision(2) << fixed << GetTempAsKelvin() << " " << "Kelvin";
	    } else {
	    	ss << "Invalid Unit";
	    }
	
		return ss.str();
}




