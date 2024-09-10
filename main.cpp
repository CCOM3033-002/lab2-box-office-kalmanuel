//Kaleb M. Martinez Ortega - 801230408
//CCOM 3033 - 002

#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std; 

int main() 
{
    //Inicializamos algunas de las variables
    string movie;
    double AdultTickets, ChildTickets, GrossBox, NetBox, DistriProfit; 

    //Definimos las variables constantes que se estaran usando
    const double childfare = 6.00; 
    const double adultfare = 10.00; 
    const double distripercent = 0.20; 

    //Se desplega el proposito del programa
    cout << "\nThis program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl; 
    
    //Se pide el nombre de la pelicula
    cout << "\nMovie name: "; 
    getline(cin, movie); 

    //Se pide la cantnidad de boletos de adultos
    cout << "Enter the amount of Adult tickets sold: "; 
    cin >> AdultTickets; 

    //Se pide la cantidad de boletos de niños
    cout << "Enter the amount of child tickets sold: "; 
    cin >> ChildTickets; 

    //Se calcula el total de las ganancias
    GrossBox = (adultfare * AdultTickets) + (childfare * ChildTickets); 

    //Se calcula cuanto de las ganancias es para el cine.
    NetBox = GrossBox * distripercent; 
    
    //Se calcula cuanto de las ganancias so para el distribudor
    DistriProfit = GrossBox - NetBox; 

    //Se desplegan los resultados
    cout << "\nMovie name:" << setw(18) << '\"' << movie << '\"'; 
    cout << "\nAdult Tickets Sold:" << setw(15) << AdultTickets; 
    cout << "\nChild Tickets Sold:" << setw(15) << ChildTickets; 
    cout << "\nGross Box Office Profit:" << setw(5) << '$' << setprecision(2) << fixed << setw(8) << GrossBox; 
    cout << "\nNet Box Office Profit:" << setw(7) << '$' << setw(8) <<  NetBox; 
    cout << "\nAmount Paid to Distributor:" << setw(2) << '$' << setw(8) << DistriProfit << endl;

    return 0; 
}
