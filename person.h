class Person
{
    protected:
        string name;
        string lastname;
    public:
        string getName() const 
        {
          return n;
        }
    string getLastName() const
    {
      return ln;
    }
    void setName(string n) 
    {
      name = n;
    }
    void setLastName(string ln)
    {
      lastName = ln;
    }
};
