/**********************************************************
*Teht�v�: Harjoitus18
*Tekij�: Olli Kauppinen
*PVM: 05.11.2013
*Kuvaus:
*Tee ohjelma, joka kysyy viiden koiran nimet ja i�t.
*Tiedot tallennetaan tietuetaulukkoon.
*a) j�rjest� tiedot ik� -kent�n mukaan suuruusj�rjestykseen
*(pienimm�st� suurimpaan). Ohjelma tulostaa lopuksi
*jarjestetyn taulukon n�yt�lle.
*b) j�rjest� tiedot nimi -kent�n mukaan aakkosj�rjestyksess�
*Ohjelma tulostaa lopuksi jarjestetyn taulukon n�ytolle.
*
*Lajittelu tulee toteuttaa siten, ett� se toimisi samoin
*my�s 50 tai 5000 koiran tapauksssa.
*
* Versio 1.0 H4718 05.11.2013
***********************************************************/

#include<iostream>
using namespace std;

const int MAX_TAULU = 5;

struct KOIRA
{
	char nimi[40];
	int ika;
};

int main()
{
	KOIRA koirat[MAX_TAULU];
	KOIRA apukoira[1];

	cout << "\nSy�t� koirien tiedot\n";
	
	for (int ind = 0; (ind < MAX_TAULU); ind++)
	{
		cout << "\nNimi?: \n";
		cin >> koirat[ind].nimi;
		cout << "\nIka?: \n";
		cin >> koirat[ind].ika;
	}

	for (int i = 0; i < (MAX_TAULU - 1); i++)
	{
		
		for (int j = i + 1; j < MAX_TAULU; j++)
		{
			if (koirat[i].ika > koirat[j].ika)
			{
				apukoira[0] = koirat[j];
				koirat[j] = koirat[i];
				koirat[i] = apukoira[0];
			}
		}
	}
	for (int ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << koirat[ind].nimi <<" " << koirat[ind].ika << endl;
	}
}