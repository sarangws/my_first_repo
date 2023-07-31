#include <iostream>
using namespace std;

class Hero
{
private:
    string personalName;

public:
    string name;
    string superpower;
    string city;

    Hero();
    Hero(string name, string superpower, string city);

    Hero(string name, string superpower)
    {
        this->name = name;
        this->superpower = superpower;
    }

    void displayHero()
    {
        cout << "Name of superhero is " << name << " and superpower is " << superpower << endl;
    }

    void displayHeroWithCity()
    {
        cout << "Name of superhero is " << name << ", superpower is " << superpower << " and city is " << city << endl;
    }

    void displayHeroWithCityAndName()
    {
        cout << "Name of superhero is " << name << ", superpower is " << superpower << " and city is " << city << endl;
        cout << "Personal name of superhero is " << personalName << endl;
    }

    void setPersonalName(string personalName)
    {
        this->personalName = personalName;
    }

    string getPersonalName()
    {
        return personalName;
    }
};

Hero::Hero(string name, string superpower, string city)
{
    this->name = name;
    this->superpower = superpower;
    this->city = city;
}

int main()
{

    Hero spiderman = Hero("Superman", "can shoot");
    // Hero spiderman2 = Hero("Superman", "can shoot", "NY");

    // spiderman.name = "Spiderman";
    // spiderman.superpower = "Can shoot web";

    //spiderman.displayHero();
    spiderman.setPersonalName("Peter");
    spiderman.displayHeroWithCityAndName();

    // spiderman2.displayHeroWithCity();

    return 0;
}
