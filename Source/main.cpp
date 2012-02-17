#include <iostream>
#include "Patient.h"
#include "Surgery.h"
#include "Pharmacy.h"
using namespace std;


int main()
{
	int mainChoice;
	int choice;
	int subChoice;
	double daily; //Variable for daily rate
	int day; //Variable for days stayed
    
	Patient john(4);
	Surgery surgeries;
    Pharmacy walgreens;

	cout << "Welcome to the most amazing patient fees program ever!" << endl << endl;

	do
	{
		cout << "What would you like to do?" << endl;    
		cout << "1 - Stay A Few Nights" << endl;
		cout << "2 - Have Surgery" << endl;
		cout << "3 - Go to the Pharmacy" << endl;
		cout << "4 - Check Out!" << endl;
		cout << "5 - Close Program" << endl;
		cout << "Choice: ";
		cin >> choice;

		switch(choice)
		{
			cout << choice; 
			
			case 1://Stay for a few nights submenu
				do
				{
					cout << "What would you like to do?" << endl << endl;
					cout << "1 - Calculate a patient's stay amount" << endl;
					cout << "2 - Change the daily rate" << endl;
					cout << "3 - Go Back to Main Menu" << endl;
					cout << "Choice: ";
					cin >> subChoice;

					switch(subChoice)
					{
						case 1:
							//Retrieve days stayed and daily rate to stay
							cout << "Please enter the number of days the patient stayed: ";
							cin >> day;
                            
    						//Store values in patient instance
							john.setDays(day);

							//Display stay amount
							cout << "Your patient's stay amount is " << john.getCharges() << "." << endl;                                
                            break;

                        case 2:
							cout << "What do you want to change the daily stay rate to? " << endl;
							cin >> daily;
							john.setDailyRate(daily);
							cout << "The daily stay rate has been updated to " << john.getDailyRate() << endl;
                            break;
					}
                   
				} while (subChoice != 3);
			break;
               
			case 2: //Have Surgery submenu
				do
				{
					cout << "Welcome to the Surgery center!" << endl;
					cout << "What would you like to do?" << endl << endl;
					cout << "1 - Add surgeries completed to final bill" << endl;
					cout << "2 - Go back to Main Menu" << endl;

					cout << "Choice: ";
					cin >> subChoice;

					switch(subChoice)
					{
						case 1:
							do
							{
								cout << "What surgery(ies) would you like to add to the final bill?" << endl;
								cout << "1 - Surgery 1" << endl;
								cout << "2 - Surgery 2" << endl;
								cout << "3 - Surgery 3" << endl;
								cout << "4 - Surgery 4" << endl;
								cout << "5 - Surgery 5" << endl;
								cout << "6 - Go back to Surgery Center menu" << endl;
								cout << "Choice ";
								
								cin >> mainChoice;
								switch (mainChoice)
								{
									case 1: surgeries.addSurg1(); break;
									case 2: surgeries.addSurg2(); break;
									case 3: surgeries.addSurg3(); break;
									case 4: surgeries.addSurg4(); break;
									case 5: surgeries.addSurg5(); break;
                                }
							} while (mainChoice !=6);
						break;

					}
				} while (subChoice !=2);
               break;
			
			case 3: // Go to the Pharmacy
                do
                {
                    cout << "Welcome to the Pharmacy!" << endl;
                    cout << "What would you like to do?" << endl << endl;
                    cout << "1 - Add Medicines to final bill" << endl;
                    cout << "2 - Go back to Main Menu" << endl;
                    
                    cout << "Choice: ";
                    cin >> subChoice;
                    
                    switch(subChoice)
                    {
                        case 1:
                            do
                            {
                                cout << "What medicine(s) would you like to add to the final bill?" << endl;
                                cout << "1 - Medicine 1" << endl;
                                cout << "2 - Medicine 2" << endl;
                                cout << "3 - Medicine 3" << endl;
                                cout << "4 - Medicine 4" << endl;
                                cout << "5 - Medicine 5" << endl;
                                cout << "6 - Go back to Pharmacy menu" << endl;
                                cout << "Choice ";
                                
                                cin >> mainChoice;
                                switch (mainChoice)
                                {
                                    case 1: walgreens.addMed1(); break;
                                    case 2: walgreens.addMed2(); break;
                                    case 3: walgreens.addMed3(); break;
                                    case 4: walgreens.addMed4(); break;
                                    case 5: walgreens.addMed5(); break;
                                }
                                
                            } while (mainChoice !=6);
                            break;
                    }
                } while (subChoice !=2);
               break;
			
			case 4: // Check out.
                john.addCharges(surgeries.getSurgCosts());
                john.addCharges(walgreens.getMedCosts());
				cout << "Your patient's final total is: " << john.getBalance() << endl;
			break;
		}
       
	} while (choice !=5);

	return 0;
}