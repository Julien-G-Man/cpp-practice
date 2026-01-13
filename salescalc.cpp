#include<iostream>

using namespace std;
int main()
{
    int sales = 95000;
    cout<<"Sales: $"<<sales<<endl;

    double state_tax_rate = 0.04;
    double state_tax = sales * state_tax_rate;
    cout<<"State Tax: $"<<state_tax<<endl;

    double county_tax_rate = 0.02;
    double county_tax = sales * county_tax_rate;
    cout<<"County Tax: $"<<county_tax<<endl;

    const double total_sales = sales - state_tax - county_tax;
    cout<<"Total sales = Sales - State Tax - County Tax"<<endl;
    cout<<"Total sales: $"<<total_sales;

    return 0;
}
