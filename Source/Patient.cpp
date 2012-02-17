/*
 *  Patient.cpp
 *  Patient Fees
 *
 */

//Implementation file for Patient Class
#include "Patient.h"
using namespace std;

Patient::Patient(double daily) {
	c_dailyRate = daily;
}

void Patient::setDays(int d) {
	c_days = d;
}

void Patient::setDailyRate(double daily) {
	c_dailyRate = daily;
}

void Patient::addCharges(double adtl) {
    c_balance = c_charges += adtl;
}

double Patient::getDailyRate() {
    return c_dailyRate;
}

double Patient::getCharges() {
	c_charges = c_dailyRate * c_days;
	return c_charges;
}
double Patient::getBalance() {
    return c_balance;
}
