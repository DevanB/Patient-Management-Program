/*
 *  Surgery.cpp
 *  Patient Fees
 *
 *  Created by Devan Beitel on 11/23/10.
 *  Copyright 2010 FindMySpace. All rights reserved.
 *
 */

//Implementation file for Surgery Class
#include "Surgery.h"
#include <iostream>
using namespace std;

Surgery::Surgery()
{
    c_surg1 = 5;
    c_surg2 = 10;
    c_surg3 = 15;
    c_surg4 = 20;
    c_surg5 = 25;
}
double Surgery::getSurgCosts() {return c_surgCosts;}
void Surgery::addSurg1() { c_surgCosts += c_surg1; }
void Surgery::addSurg2() { c_surgCosts += c_surg2; }
void Surgery::addSurg3() { c_surgCosts += c_surg3; }
void Surgery::addSurg4() { c_surgCosts += c_surg4; }
void Surgery::addSurg5() { c_surgCosts += c_surg5; }