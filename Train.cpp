#include <iostream>
using namespace std;

class Train
{
private:
    string trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

public:
    static int trainCount;

    Train()
    {
        trainCount++;

        this->trainNumber = "";
        this->trainName = "";
        this->source = "";
        this->destination = "";
        this->trainTime = "";
    }

    ~Train()
    {
        trainCount--;
    }

    void inputTrainDetails()
    {
        cout << "Enter Train Number: ";
        cin >> this->trainNumber;

        cout << "Enter Train Name: ";
        cin >> this->trainName;

        cout << "Enter Source: ";
        cin >> this->source;

        cout << "Enter Destination: ";
        cin >> this->destination;

        cout << "Enter Train Time: ";
        cin >> this->trainTime;
    }

    string getTrainNumber()
    {
        return this->trainNumber;
    }

    void displayTrainDetails()
    {
        cout << "Train Number: " << this->trainNumber << endl;
        cout << "Train Name: " << this->trainName << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Train Time: " << this->trainTime << endl;
    }

    static int getTrainCount()
    {
        return trainCount;
    }
};

int Train::trainCount = 0;

int main()
{
    int choice;

    Train train;

    while (true)
    {
        cout << "\n- Railway Reservation System Menu -" << endl;
        cout << "1. Add New Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            train.inputTrainDetails();

            break;

        case 2:

            train.displayTrainDetails();

            break;

        case 3:
        {
            string searchTrainNumber;

            cout << "Enter Train Number to search: ";
            cin >> searchTrainNumber;

            if (train.getTrainNumber() == searchTrainNumber)
            {
                train.displayTrainDetails();
            }
            else
            {
                cout << "Train with number "
                     << searchTrainNumber
                     << " not found!" << endl;
            }

            break;
        }

        case 4:

            cout << "Exiting the system. Goodbye!" << endl;

            return 0;

        default:

            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}