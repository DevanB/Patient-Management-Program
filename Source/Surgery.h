/*
 *  Surgery.h
 *  Patient Fees
 *
 */

#ifndef Surgery_H
#define Surgery_H

//Surgery class declaration

class Surgery
{
private:
    double c_surg1;
    double c_surg2;
    double c_surg3;
    double c_surg4;
    double c_surg5;
    double c_surgCosts;
public:
    Surgery();
    double getSurgCosts(); //Gets c_surgCosts for final balance
    void addSurg1(); //Adds Surg1 price to c_surgCosts variable
    void addSurg2(); //Adds Surg2 price to c_surgCosts variable
    void addSurg3(); //Adds Surg3 price to c_surgCosts variable
    void addSurg4(); //Adds Surg4 price to c_surgCosts variable
    void addSurg5(); //Adds Surg5 price to c_surgCosts variable
};

#endif