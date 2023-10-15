#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit, string weekDay, double quantity);

int main()
{
    string fruit;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    
    string weekDay;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> weekDay;
    
    double quantity;
    cout << "Enter the quantity: ";
    cin >> quantity;
    
    float result;
    result = calculateFruitPrice(fruit, weekDay, quantity);
    
    if (result != 0)
    {
        cout << result;
    }

    return 0;
}

float calculateFruitPrice(string fruit, string weekDay, double quantity)
{
    float result = 0.0;

    if (weekDay == "Sunday" || weekDay == "Saturday")
    {
        if (fruit == "banana")
        {
            result = quantity * 2.70;
        }
        if (fruit == "apple")
        {
            result = quantity * 1.25;
        }
        if (fruit == "orange")
        {
            result = quantity * 0.90;
        }
        if (fruit == "grapefruit")
        {
            result = quantity * 1.60;
        }
        if (fruit == "kiwi")
        {
            result = quantity * 3.00;
        }
        if (fruit == "pineapple")
        {
            result = quantity * 5.60;
        }
        if (fruit == "grapes")
        {
            result = quantity * 4.20;
        }
    }
    else if (weekDay == "Monday" || weekDay == "Tuesday" || weekDay == "Wednesday" || weekDay == "Thursday" || weekDay == "Friday")
    {
        if (fruit == "banana")
        {
            result = quantity * 2.50;
        }
        if (fruit == "apple")
        {
            result = quantity * 1.20;
        }
        if (fruit == "orange")
        {
            result = quantity * 0.85;
        }
        if (fruit == "grapefruit")
        {
            result = quantity * 1.45;
        }
        if (fruit == "kiwi")
        {
            result = quantity * 2.70;
        }
        if (fruit == "pineapple")
        {
            result = quantity * 5.50;
        }
        if (fruit == "grapes")
        {
            result = quantity * 3.85;
        }
    }
    else
    {
        cout << "error";
        return 0;
    }
    return result;
}