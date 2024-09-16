#include <bits/stdc++.h>
using namespace std;

class car
{
public:
    string brand;
    string model;
    int engine_number;
    int no_of_seats;

    car(string b, string m, int e, int s) : brand(b), model(m), engine_number(e), no_of_seats(s) {};

    void display()
    {
        cout << "Brand -: " << brand << endl;
        cout << "Model -: " << model << endl;
        cout << "Engine Number -: " << engine_number << endl;
        cout << "Number of seats -: " << no_of_seats << endl;
    }
};

int main()
{
    string brand;
    string model;
    int engine_number;
    int no_of_seats;
    cout << "Enter brand name: ";
    getline(cin, brand);
    cout << "Enter model name: ";
    getline(cin, model);
    cout << "Enter engine number: ";
    cin >> engine_number;
    cout << "How many seat are their: ";
    cin >> no_of_seats;

    cout << endl;
    car BuleroNeo(brand, model, engine_number, no_of_seats);

    BuleroNeo.display();
}