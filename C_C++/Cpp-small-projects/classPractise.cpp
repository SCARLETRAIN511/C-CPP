#include <iostream>
using namespace std;

class Book{
    private:
        int year;

    public:
        string title;
        string author;
        int pages;
        double gpa;
        //constructor functions
        Book(string atitle,string aAuthor,int aPages,double aGpa){
            title = atitle;
            author = aAuthor;
            pages = aPages;
            gpa = aGpa;

        }
    bool hasHonors(){
        if (gpa > 3.5){
                return true;
        }else{
            return false;
        }
    }

    void setGpa(double aGpa){
        gpa = aGpa;
    }
    
    void setYear(int aYear){
        year = aYear;
    }

    int getYear(){
        return year;
    }
};

class Chef{
    public:
        void makeChiken(){
            cout << "The chef makes chikens" << endl;
        }

        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }

        void makeSpecialDish(){
            cout << "The chef makes special dish" << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
};



int main(){
    Book book1("Harry Potter","JK",200,3.6);
    Book book2("3Body","LCX",500,3.2);
    book1.setGpa(4.0);
    book1.setYear(2001);
    cout << book1.getYear() << endl;
    cout << book1.gpa << endl;
    cout << book1.hasHonors() << endl;
    Chef chef1;
    chef1.makeChiken();
    ItalianChef chef2;
    chef2.makeChiken();
    chef2.makePasta();
    return 0;
}