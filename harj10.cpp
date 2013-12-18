/*************************************************************************************************************************************************************
*Teht�v�: Harjoitus9
*Tekij�: Noora Kuikka
*PVM: 22.10.2013
*Kuvaus:
*Tee ohjelma, joka laskee sy�tetyist� kokonaisluvuista sek� positiivisten
*ett� negatiivisten kokonaislukujen osuuden. Lukujen sy�tt� lopetetaan
*sy�tt�m�ll� luku 0.
*
*Tulostus:
*Sy�tit kokonaislukuja seuraavasti:
*----------------------------------
*Negatiiviset 7 kpl 70.00%
*Positiiviset 3 kpl 30.00%
*Yhteens� 10 kpl 100.00%
*Versio 1.0 H4719 22.10.2013
**************************************************************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    
	double num;
	double negative = 0;
	double positive = 0;
	double count = 0;
	double negPercentage;
	double posPercentage;
	double total;
	
	cout << "Enter an integer. Press '0' to exit.\n";
	
	
	
	    do
	    {  
	        count++;
		    cout << "Number #" << count << ": ";
	        cin >> num;
		
		    if(num < 0) negative++;
		    else if(num > 0) positive++;
	    }
	    while (num != 0);
	
	total = count -1;
	negPercentage = (negative/total) * 100;
	posPercentage = (positive/total) * 100;

	cout << endl << endl << "Results:" << endl << endl << "Negative Integers: " << negative << "  -----" << "  Percentage: " << negPercentage << "%";
	cout << endl << "Positive Integers: " << positive << "  -----" << "  Percentage: " << posPercentage << "%";
	cout << endl << "Total Integers: " << total << "  -----" << "  Total Percentage: 100%" << endl;
	return 0;
	
}
	