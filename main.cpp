#include "funkcija.cpp"

int main()
{
	int conteiner;
	string answer1, answer2;
	string galvotukai;
	string vargsiukai;
	int kint;
	cout << "Pasirinkite konteineri: (vector - 1, list - 2, deque - 3)";
	cin >> conteiner;
	try
	{
		if (conteiner != 1 && conteiner != 2 && conteiner != 3)
		{
			throw 1;
		}
		if (conteiner == 1)
		{
			vector <Studentas> S;
			vector <Studentas> V;
			vector <Studentas> G;
			cout << "Namu darbu ir egzamino pazymiai turi priklausyti intervalui [1;10]" << endl;
			cout << "Ar norite patys irasyti duomenis (t), ar norite, kad jie butu paimti is failo (n), ar kad keli duomenu failai butu nuskaityti? (k): ";
			cin >> answer1;
			if (answer1 == yes)
			{
				cout << "Ar zinote kiek bus studentu? (t/n): ";
				cin >> answer2;
				if (answer2 == yes)
				{
					cout << "iveskite kiek bus studentu: ";
					cin >> n;
					try
					{
						if (n <= 0)
						{
							throw 1;
						}
						ZinomasStudentuSK(S);
						Print2(S);
					}
					catch (int ex1)
					{
						cout << "Ivedete netinkama studentu skaiciu (skaicius > 0), paleiskite programa is naujo " << endl;
						exit;
					}
				}
				else if (answer2 == no)
				{
					NezinomasStudentuSK(S);
					Print2(S);
				}
			}
			else if (answer1 == no)
			{
				/*FileName = "kursiokai.txt";
				ReadFromFile(S);
				ofstream fr("rez.txt");
				fr << "Vardas" << setw(20) << setfill(' ') << "Pavarde" << setw(30) << setfill(' ') << "Galutinis (vid)" << setw(20) << setfill(' ') << "Galutinis (med)" << endl;
				fr << "_____________________________________________________________________________" << endl;
				for (int i = 0; i < n; i++)
					fr << S[i].name << setw(20) << setfill(' ') << S[i].lastname << setw(30) << setfill(' ') << setprecision(3) << S[i].finalVid << setw(20) << setfill(' ') << setprecision(3) << S[i].finalMed << setw(30) << setfill(' ') << S[i].kintamasis1 << endl;
				fr.close();*/
				FileName2 = "kursiokai.txt";
				print2(S,S.size());
			}
			else if (answer1 == ka)
			{
				cout << "Kiek failu norite nuskaityti (nuo 1 iki 5)? : ";
				cin >> kint;
				for (int i = 0; i < kint; i++)
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
                    			print2(G,G.size());
                    			FileName2 = galvotukai;
                    			print2(V,V.size());
				}
			}
		}
		else if (conteiner == 2)
		{
			list <Studentas> S;
			list <Studentas> V;
			list <Studentas> G;
			cout << "Namu darbu ir egzamino pazymiai turi priklausyti intervalui [1;10]" << endl;
			cout << "Ar norite patys irasyti duomenis (t), ar norite, kad jie butu paimti is failo (n), ar kad keli duomenu failai butu nuskaityti? (k): ";
			cin >> answer1;
			if (answer1 == yes)
			{
				cout << "Ne" << endl;
			}
			else if (answer1 == no)
			{
				cout << "Ne" << endl;
			}
			else if (answer1 == ka)
			{
				cout << "Kiek failu norite nuskaityti (nuo 1 iki 5)? : ";
				cin >> kint;
				for (int i = 0; i < kint; i++)
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
                    			FileName2 = galvotukai;
                    			print(V,V.size());
				}
			}
		}
		else if (conteiner == 3)
		{
			deque <Studentas> S;
			deque <Studentas> G;
			deque <Studentas> V;
			cout << "Namu darbu ir egzamino pazymiai turi priklausyti intervalui [1;10]" << endl;
			cout << "Ar norite patys irasyti duomenis (t), ar norite, kad jie butu paimti is failo (n), ar kad keli duomenu failai butu nuskaityti? (k): ";
			cin >> answer1;
			if (answer1 == yes)
			{
			cout << "Ar zinote kiek bus studentu? (t/n): ";
				cin >> answer2;
				if (answer2 == yes)
				{
					cout << "iveskite kiek bus studentu: ";
					cin >> n;
					try
					{
						if (n <= 0)
						{
							throw 1;
						}
						ZinomasStudentuSK(S);
						Print(S);
					}
					catch (int ex1)
					{
						cout << "Ivedete netinkama studentu skaiciu (skaicius > 0), paleiskite programa is naujo " << endl;
						exit;
					}
				}
				else if (answer2 == no)
				{
					NezinomasStudentuSK(S);
					Print(S);
				}
			}
			else if (answer1 == no)
			{
				/*FileName = "kursiokai.txt";
				ReadFromFile(S);
				ofstream fr("rez.txt");
				fr << "Vardas" << setw(20) << setfill(' ') << "Pavarde" << setw(30) << setfill(' ') << "Galutinis (vid)" << setw(20) << setfill(' ') << "Galutinis (med)" << endl;
				fr << "_____________________________________________________________________________" << endl;
				for (int i = 0; i < n; i++)
					fr << S[i].name << setw(20) << setfill(' ') << S[i].lastname << setw(30) << setfill(' ') << setprecision(3) << S[i].finalVid << setw(20) << setfill(' ') << setprecision(3) << S[i].finalMed << setw(30) << setfill(' ') << S[i].kintamasis1 << endl;
				fr.close();
				FileName2 = "kursiokai.txt";*/
				print(S,S.size());
			}
			else if (answer1 == ka)
			{
				cout << "Kiek failu norite nuskaityti (nuo 1 iki 5)? : ";
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
                    			FileName2 = galvotukai;
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
