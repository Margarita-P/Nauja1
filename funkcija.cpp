#include "funkcija1.hpp"

using namespace std;

bool check(double number)
{
	if (number > 0 && number <= 10)
		return true;
	if (number <= -1 || number > 10)
		return false;
}
double vidurkis()
{
	double vid = ((suma / sk) * 0.4) + (egz * 0.6);
	return vid;
}
double mediana()
{
	for (int i = 0; i < sk; i++)
	{
		for (int j = i + 1; j < sk; j++)
		{
			if (pazymiai[i] > pazymiai[j])
			{
				double t = pazymiai[i];
				pazymiai[i] = pazymiai[j];
				pazymiai[j] = t;
			}
		}
	}
	double med = 0;

	if (pazymiai.size() % 2 != 0)
	{
		med = (pazymiai.at(pazymiai.size() / 2) * 0.4) + (egz * 0.6);

	}
	else if (pazymiai.size() % 2 == 0)
	{
		med = (((pazymiai.at(pazymiai.size() / 2) + pazymiai.at((pazymiai.size() / 2) - 1)) / 2) * 0.4) + (egz * 0.6);
	}
	return med;
}
template <class T>
void print(T Stud, long int a)
{
	ofstream out(FileName2);
	for(long int i = 0; i<a; i++)
	{
		out << Stud.front().getName() << setw(20) << setfill(' ') << Stud.front().getLastname() << setw(30) << setfill(' ') << setprecision(3) << Stud.front().getFinalVid() << endl;
		Stud.pop_front();
	}
	out.close();
	
}
void ReadFromFile(vector <Studentas>& S)
{
	string name1;
	string lastname1;
	double finalVid1;
	double finalMed1;
	int kintamasis11;
	S.clear();
	n = 0;
	ifstream in(FileName);
	string x;
	int y;
	try {
		if (!in)
		{
			throw 1;
		}
		for (int i = 0; i < 100; i++)
		{
			in >> x;
			if (x == "Egz.")
			{
				sk = i - 2;
				break;
			}
		}
		for (int i = 0; !in.eof(); i++)
		{
			suma = 0;
			
			in >> name1;
			in >> lastname1;
			pazymiai.clear();
			for (int j = 0; j < sk; j++)
			{
				in >> y;
				suma = suma + y;
				pazymiai.push_back(y);
			}
			in >> egz;
			double kint3 = vidurkis();
			if (kint3 > 5 || kint3 == 5)
			{
				kintamasis11 = 1;
			}
			else if (kint3 < 5)
			{
				kintamasis11 = 0;
			}
			finalVid1 = vidurkis();
			finalMed1 = mediana();
			n = i;
			Studentas Student(name1, lastname1, finalVid1, finalMed1, kintamasis11);
			S.push_back(Student);
		}
		in.close();
	}
	catch (int ex3)
	{
		cout << "Duomenu failas nerastas" << endl;
		exit;
	}
}
void CreateFile()
{
	string v = "Vardas";
	string p = "Pavarde";
	string nd = "ND";
	string e = "Egz.";
	n = 0;
	cout << "iveskite kiek bus studentu: ";
	cin >> n;
	cout << "iveskite kiek bus namu darbu pazymiu: ";
	cin >> sk;
	string file;
	file = "kursiokai" + to_string(n);
	file += ".txt";
	FileName = file;
	ofstream out(file);
	out << left << setw(20) << v << setw(20) << p;
	for (int i = 1; i < sk + 1; i++)
	{
		out << setw(7) << nd + to_string(i);
	}
	out << setw(7) << e << endl;
	srand(time(NULL));
	for (int i = 1; i < n + 1; i++)
	{
		out << left << setw(20) << "Vardas" + to_string(i) << setw(20) << "Pavarde" + to_string(i);
		for (int j = 0; j < sk; j++)
		{
			out << setw(7) << rand() % 10 + 1;
		}
		out << setw(7) << rand() % 10 + 1 << endl;
	}
	out.close();
}
template <class T>
void Strategija1(T& S, T& G, T& V)
{
	n1 = 0;
	n2 = 0;
	G.clear();
	V.clear();
	auto start = chrono::steady_clock::now();
	copy_if(S.begin(), S.end(), back_inserter(G), [](Studentas const& a) {return a.getFinalVid() >= 5;});
	copy_if(S.begin(), S.end(), back_inserter(V), [](Studentas const& a) {return a.getFinalVid() < 5;});
	cout << "Sugrupiuoti studentus i 'Galvotukus' ir 'Vargsiukus', faile su " << n << " stulpeliu uztruko: " << chrono::duration_cast<chrono::milliseconds>(chrono::steady_clock::now() - start).count() << " ms" << endl;
}
