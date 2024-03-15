#include <iostream>

using namespace std;

int main()
{
    double merchandiseCost,salary,rent,costOfElectricity,totalExpences,desiredNetProfit,newNetProfit,markUp;

    cout<<"Enter the cost of the merchadise"<<endl;
    cin>>merchandiseCost;

    cout<<"Enter the salary"<<endl;
    cin>>salary;

    cout<<"Enter the cost of the rent"<<endl;
    cin>>rent;

    cout<<"Enterthe cost of the electricity"<<endl;
    cin>>costOfElectricity;

    totalExpences = merchandiseCost + salary + rent + costOfElectricity;

    desiredNetProfit = merchandiseCost*0.1;

    newNetProfit = desiredNetProfit/0.85;

    markUp = (newNetProfit + totalExpences)/merchandiseCost;
    cout<<"The merchandise that should be marked up so that Linda gets the desired profit is "<<markUp;

    return 0;
}
