//Kaleb M. Martinez Ortega - 801230408
//CCOM 3033 - 002

#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std; 

int main() 
{
    string movie;
    double AdultTickets, ChildTickets, GrossBox, NetBox, DistriProfit; 

    const double childfare = 10.00; 
    const double adultfare = 6.00; 

    cout << "\nThis program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl; 
    
    cout << "\nMovie name: "; 
    getline(cin, movie); 

    cout << "Enter the amounty of Adult tickets sold: "; 
    cin >> AdultTickets; 

    cout << "Enter the amount of child tickets sold: "; 
    cin >> ChildTickets; 

    GrossBox = (adultfare * AdultTickets) + (childfare * ChildTickets); 
    NetBox = GrossBox * 0.20; 
    DistriProfit = GrossBox - NetBox; 


    cout << "Movie name:\t\t" << '\"' << movie << '\"'; 
    cout << "\nGross Box Office Profit:" << setw(5) << '$' << setw(9) << GrossBox; 
    cout << "\nNet Box Office Profit:" << setw(7) << '$' << setw(9) <<  NetBox; 
    cout << "\nAmount Paid to Distributor:" << setw(2) << '$' << setw(9) << DistriProfit << endl;


    return 0; 
}
