#include "funkcijos.cpp"

int main()
{
    int conteiner;
    string answer1, answer2;
    string galvotukai, vargsiukai;
    int kint;
    cout << "Pasirinkite konteineri: (vector - 1, list - 2, deque - 3)";
    cin >> conteiner;
    try
    {
        if(conteiner != 1 && conteiner != 2 && conteiner != 3)
        {
            throw 1;
        }
        if(conteiner == 1)
        {
            vector <Studentas> S;
            vector <Studentas> V;
            vector <Studentas> G;
            cout << "Namu darbu ir egzamino pazymiai turi priklausyti intervalui [1;10]" << endl;
			cout << "Ar norite patys irasyti duomenis (t), ar norite, kad jie butu paimti is failo (n), ar kad keli duomenu failai butu nuskaityti? (k): ";
            cin >> answer1;
            if(answer1 == yes)
            {
                cout << "ne" << endl;
            }
            else if(answer1 == no)
            {
                cout << "nee" << endl;
            }
            else if(answer1 == ka)
            {
                cout << "Kiek failu norite nuskaityti? ";
                cin >> kint;
                for(int i=0; i<kint; i++)
                {
                    cout << "Iveskite n skaiciu: " << endl;
                    cin >> n;
                    FileName = "kursiokai" + to_string(n);
                    FileName += ".txt";
                    vargsiukai = "vargsiukai" + to_string(n);
					vargsiukai += ".txt";
					galvotukai = "galvotukai" + to_string(n);
					galvotukai += ".txt";
					ReadFromFile(S);
					Strategija1(S, G, V);
                    FileName2 = vargsiukai;
                    print(G,G.size());
                    print(V,V.size());
				}
            }
		}
    }      
    catch (int ex4)
	{
		cout << "Ivedete netinkama skaiciu, paleiskite programa isnaujo.";
		exit;
	}
	return 0;
}
