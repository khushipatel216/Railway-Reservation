#include <iostream>
using namespace std;

class TimeConverter
{
public:


    void secondsToTime(int totalSeconds)
    {
        int hours = totalSeconds / 3600;
        totalSeconds = totalSeconds % 3600;

        int minutes = totalSeconds / 60;
        int seconds = totalSeconds % 60;

        cout << "HH:MM:SS => "
             << hours << ":"
             << minutes << ":"
             << seconds << endl;
    }


    void timeToSeconds(int hours, int minutes, int seconds)
    {
        int totalSeconds;

        totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Total seconds: " << totalSeconds << endl;
    }
};

int main()
{
    TimeConverter time;
    int choice;

    cout << "===== TIME CONVERTER =====" << endl;
    cout << "1. Seconds to HH:MM:SS" << endl;
    cout << "2. HH:MM:SS to Seconds" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int totalSeconds;

        cout << "Enter total seconds: ";
        cin >> totalSeconds;

        time.secondsToTime(totalSeconds);
    }
    else if (choice == 2)
    {
        int hours, minutes, seconds;

        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;

        time.timeToSeconds(hours, minutes, seconds);
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

