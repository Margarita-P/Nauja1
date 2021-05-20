#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h> 
#include <chrono>
#include <list>
#include <deque>

using namespace std;

class Studentas
{
    private:
	    string name;
	    string lastname;
	    double finalVid;
	    double finalMed;
	    int kintamasis1;
	
	public:
		Studentas()
		{
			name = "";
	    		lastname = "";
	   	 	finalVid = 0;
	   		finalMed = 0;
	    		kintamasis1 = 0;
		}
		string getName() const { return name; }
		string getLastname() const { return lastname; }
		double getFinalVid() const { return finalVid; }
		double getFinalMed() const { return finalMed; }
		int getKint1() const { return kintamasis1; }

		void setName(string n) { name = n; }
		void setLastname(string ln) { lastname = ln; }
		void setFinalVid(double fv) { finalVid = fv; }
		void setFinalMed(double fm) { finalMed = fm; }
		void setKint1(int ki) { kintamasis1 = ki; }

		Studentas(const Studentas& t) :
			name(t.name), lastname(t.lastname),
			finalVid(t.finalVid), finalMed(t.finalMed),
			kintamasis1(t.kintamasis1) {}

		Studentas& operator=(const Studentas& t)
		{
			name = t.name;
			lastname = t.lastname;
			finalVid = t.finalVid;
			finalMed = t.finalMed;
			kintamasis1 = t.kintamasis1;
			return *this;
		}

		~Studentas() {};
};

int sk = 0;
int n = 0;
double suma = 0;
double egz = 0;
string yes = "t";
string no = "n";
string ka = "k";
double number = 0;
double number5 = 0;
string FileName;
vector <double> pazymiai;
int n1 = 0, n2 = 0;
string FileName2;

bool check(double number);
double vidurkis();
template <class T>
double mediana();
template <class T>
void print(T Stud, long int a);
template <class T>
void ReadFromFile(T& S);
template <class T>
void ZinomasStudentuSK(T& S);
template <class T>
void NezinomasStudentuSK(T& S);
void CreateFile();
template <class T>
void Strategija1(T& S, T& G, T& V);
