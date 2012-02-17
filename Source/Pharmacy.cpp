//
//  Pharmacy.cpp
//  Patient Fees
//
//  Created by Devan Beitel on 11/24/10.
//  Copyright 2010 FindMySpace. All rights reserved.
//

//Implementation file for Pharmacy Class
#include "Pharmacy.h"
#include <iostream>
using namespace std;


Pharmacy::Pharmacy()
{
    c_med1 = 1;
    c_med2 = 2;
    c_med3 = 3;
    c_med4 = 4;
    c_med5 = 5;
}
double Pharmacy::getMedCosts(){return c_medCosts;}
void Pharmacy::addMed1(){c_medCosts += c_med1;}
void Pharmacy::addMed2(){c_medCosts += c_med2;}
void Pharmacy::addMed3(){c_medCosts += c_med3;}
void Pharmacy::addMed4(){c_medCosts += c_med4;}
void Pharmacy::addMed5(){c_medCosts += c_med5;}