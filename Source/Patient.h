/*
 *  Patient.h
 *  Patient Fees
 *
 *  Created by Devan Beitel on 11/23/10.
 *  Copyright 2010 FindMySpace. All rights reserved.
 *
 */

#ifndef Patient_H
#define Patient_H

//Patient class declaration
class Patient
{
private:
    double c_dailyRate;
    double c_charges;
    int c_days;
    double c_balance;
public:
	Patient(double);
    void setDays(int); // Sets Days in hospital
	void setDailyRate(double); //Sets daily rate
    void addCharges(double); //Adds to charges for patient
    double getDailyRate(); //Displays Daily Rate
    double getCharges(); // Gets Charges for Patient
    double getBalance();// Gets final balance for patient
};

#endif