#include "std_lib_facilities.h"


constexpr double cm_to_m {0.01};
constexpr double in_to_m {2.54*0.01};
constexpr double ft_to_m {12.0*2.54*0.01};
vector<string> legal_units {"cm", "m", "in", "ft"};

bool legal_unit(string unit)
{
    bool legal = false;
    for (auto legal_unit : legal_units)
    {
        if (unit == legal_unit)
        {legal = true;}

    }
    return legal;
}


double units_to_m(double val, string unit)
{
    if ("cm" == unit)
    	{return val * cm_to_m;}
    else if ("in" == unit)
    	{return val * in_to_m;}
    else if ("ft" == unit)
    	{return val * ft_to_m;}
    else 
    	{return val;}
}


int main() {

	double val {0.0};
    double smallest {0.0};
    double largest {0.0};
    double unit_in_m {0.0};
    string unit {" "};
    int total {0};
    double sum {0.0};
    vector<double> values(0);

    cout << "Enter a value with a unit (cm, m, in or ft):\n";


    while (cin >> val >> unit)
    {if (legal_unit(unit))
        {
            unit_in_m = units_to_m(val, unit);
            cout << val << unit;
            if (unit != "m")
            {cout << " (" << unit_in_m << "m)";}

            if (total == 0)
            {smallest = val;
             largest = val;
             cout << "\n";}

            else if (unit_in_m < smallest)
            {cout << " the smallest so far.\n";
             smallest = unit_in_m;}

            else if (unit_in_m > largest)
            {cout << " the largest so far.\n";
             largest = unit_in_m;}

            else
            {cout << '\n';}

            sum += unit_in_m;
            values.push_back(unit_in_m);
            total += 1;
        }

        else {cout << "Error: unit is invalid\n";}
    }

    sort(values);
    cout << "The smallest value is " << smallest << "m\n";
    cout << "The largest value is " << largest << "m\n";
    cout << total << " values were entered.\n";
    cout << "The sum of the values is " << sum << "m\n";
    cout << "The values in order: ";
    for (auto value : values){
          cout << value << " ";}
    cout << '\n';

    return 0;
}