//
//  Pharmacy.h
//  Patient Fees
//
//  Created by Devan Beitel on 11/24/10.
//  Copyright 2010 FindMySpace. All rights reserved.
//


#ifndef Pharmacy_H
#define Pharmacy_H

//Pharmacy class declaration

class Pharmacy
{
private:
    double c_med1;
    double c_med2;
    double c_med3;
    double c_med4;
    double c_med5;
    double c_medCosts;
public:
    Pharmacy();
    double getMedCosts();
    void addMed1();
    void addMed2();
    void addMed3();
    void addMed4();
    void addMed5();
};

#endif