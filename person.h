#include <string>

using namespace std;

class Person{
    protected:
        string name;
        string lastname;
        double finalVid;
	double finalMed;
    public:
        string getName() const { return name; }
	string getLastname() const { return lastname; }
        double getFinalVid() const { return finalVid; }
	double getFinalMed() const { return finalMed; }
        void setName(string n) { name = n; }
	void setLastname(string ln) { lastname = ln; }
        void setFinalVid(double fv) { finalVid = fv; }
	void setFinalMed(double fm) { finalMed = fm; }
        virtual ~Person () = 0;
};

inline Person::~Person() {}
