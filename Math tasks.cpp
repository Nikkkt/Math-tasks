#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //TASK 1. The user enters a fractional number from the keyboard. Round it to two decimal places and display it on the screen
    double number;
    
    cout << "Enter the fractional number: ";
    cin >> number;
    
    number = round(number * 100) / 100;
    cout << "The rounded number is " << number << endl;
    
    //TASK 2. The teacher enters from the keyboard the number of students who have passed homework and the number of "debtors". Calculate the percentage of "debtors" of the total number of students
    int debtors, right_students;
    double percent_of_debtors;
    
    cout << "Enter the number of debtors: ";
    cin >> debtors;
    cout << "Enter the number of students who turned in their homework: ";
    cin >> right_students;
    
    percent_of_debtors = ((double)debtors / (debtors + right_students)) * 100;
    percent_of_debtors = round(percent_of_debtors * 100) / 100;
    
    cout << percent_of_debtors << "% of students didn`t pass their homework" << endl;
    
    //TASK 3. The user enters from the keyboard the time in seconds elapsed since the beginning of the day. Determine how much time (hours, minutes and seconds) is left until midnight
    double elapsed_seconds;
    int hours, mins, secs, remaining_seconds;
    
    cout << "Enter the number of seconds that have passed since the start of the day: ";
    cin >> elapsed_seconds;
    
    remaining_seconds = 86400 - elapsed_seconds;
    
    hours = (remaining_seconds - remaining_seconds % 3600) / 3600;
    mins = (remaining_seconds - remaining_seconds % 60) / 60 - hours * 60;
    secs = remaining_seconds - mins * 60 - hours * 3600;
    
    cout << hours << " hours " << mins << " minutes " << secs << " seconds left until midnight" << endl;
    
    //TASK 4. The user enters from the keyboard the amount in hryvnia, the term of the deposit in months and the interest rate for the year. Calculate how much money the user will have at the end of the term
    double sum, interest_rate, end_sum;
    int months;
    
    cout << "Enter the amount in hrivnia: ";
    cin >> sum;
    cout << "Enter the term of the deposit im months: ";
    cin >> months;
    cout << "Enter the interest rate for the year: ";
    cin >> interest_rate;
    
    end_sum = sum + sum * interest_rate * months / 12 / 100;
    cout << "After " << months << " months you will receive " << end_sum << " hrivnia" << endl;

    //TASK 5. Calculate the surface area of ​​the Earth
    float equatorial_radius = 6378.1, polar_radius = 6356.8;
    const float p = 1.6025;
    const double pi = 3.141592653589793;
    long long S;
    
    S = 4 * pi * pow((pow(equatorial_radius, p) * pow(equatorial_radius, p) / 3 + 2 * pow(polar_radius, p) * pow(equatorial_radius, p) / 3), 1 / p);
    cout << "The surface area of the Earth is equal to " << S << " km^2" << endl;
}
