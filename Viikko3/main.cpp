#include <iostream>
#include <string>

using namespace std;

class Chef
{
    protected:
        string chefName;

    public:
        Chef(string name);
        ~Chef();
        string getName();
        int makeSalad(int ingredients);
        int makeSoup(int ingredients);
};

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef " << name << " constructor" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " destructor" << endl;
}

int Chef::makeSalad(int ingredients)
{
    int portions = ingredients / 5;
    cout << "Chef " << chefName << " with " << ingredients << " items can make salad " << portions << " portions" <<endl;
    return portions;
}

int Chef::makeSoup(int ingredients)
{
    int portions = ingredients / 3;
    cout << "Chef " << chefName << " with " << ingredients << " items can make soup " << portions << " portions" <<endl;
    return portions;
}

string Chef::getName()
{
    return chefName;
}

class ItalianChef : public Chef
{
    private:
        string password = "pizza";
        int flour;
        int water;
        int makePizza(int flour, int water);

    public:
        ItalianChef(string);
        ~ItalianChef();
        bool askSecret(string password, int flour, int water);
};

ItalianChef::ItalianChef(string name)  : Chef(name)
{
    cout << "ItalianChef " << name << " constructor" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << chefName << " destructor" << endl;
}

bool ItalianChef::askSecret(string pass, int f, int w)
{
    if (pass.compare(password) == 0) // Check if password matches "pizza"
    {
        cout << "Password ok!" << endl;
        this->flour = f;
        this->water = w;

        // Call the private function
        makePizza(f, w);
        return true;
    }
    else
    {
        cout << "Wrong password!" << endl;
        return false;
    }
}

int ItalianChef::makePizza(int flour, int water)
{
    int possiblePizzasFromFlour = flour / 5;
    int possiblePizzasFromWater = water / 5;

    int pizzas = min(possiblePizzasFromFlour, possiblePizzasFromWater);

    cout << "ItalianChef " << chefName << " with " << flour << " flour and " << water << " water can make " << pizzas << " pizzas" << endl;

    return pizzas;
}

int main()
{
    Chef myChef("Gordon");
    myChef.makeSalad(11);
    myChef.makeSoup(14);

    cout << endl;

    ItalianChef mario("Mario");
    mario.makeSalad(9);
    mario.askSecret("pizza", 12, 12);

    return 0;
}
