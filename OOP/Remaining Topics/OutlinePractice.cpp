#include <iostream>
#include <string>
using namespace std;

class City{
    private:
        int id;

    protected:
        string country;

    public:
        string name;
        int population;
        float area;
        
        City(string n = 0, int pop = 0, float are = 0){
            name = n;
            population = pop;
            area = are;

            cout << "Constructor called for name:" << name << endl;
        }

        void showData(){
            cout << "Name: " << name << endl;
            cout << "Population: " << population << endl;
            cout << "Area: " << area << endl;

            cout << endl;
        }

        void setId(int i){
            this->id = i;
        }
        int getId(){
            return id;
        }

        ~City(){
            cout << "Destructor called for name: " << name << endl;
        }
};

// inheritece
class Village: public City{
    public:
        char gender;

        Village(string n = 0, int pop = 0): City(n, pop){
            cout << "Constructor called for name:" << name << endl;
        }

        void showDataVillage(){
            cout << "Name: " << name << endl;
            cout << "Population: " << population << endl;

            cout << endl;
        }

        ~Village(){
            cout << "Destructor called for name: " << name << endl;
        }

        void setCounty(string n){
            country = n;
        }
        string getCountry(){
            return country;
        }
};

int main(){
    string name;
    int population;
    float area;

    // stack object
    City c1( "Gujrat" , 1200000, 2100.24);
    c1.showData();
    c1.setId(20);
    cout << "Id of City is: " << c1.getId() << endl;


    // heap object
    City* c2 = new City("Lahore", 11000000, 5000.50);
    c2 -> showData();
    c2->setId(60);
    cout << "Id of City is: " << c2->getId() << endl;

    // Child class using parent and own varibales
    Village v1("12 dari", 5000);
    v1.showDataVillage();
    v1.setCounty("Pakistan");
    cout << "Country of Village is:"  << v1.getCountry();

    v1.gender = 'F';
    cout << "Gender of whole village is: " << v1.gender << endl;

    /*The constructor for "12 dari" is called twice because both the parent class (City) and,
    the child class (Village) have constructors, and when you create a Village object,
    C++ first calls the parent constructor and then the child constructor.*/
}