#include <iostream>
using namespace std;

class SalesData{
    friend SalesData add(const SalesData&, const SalesData&);
    friend istream &read(istream&, SalesData &);
    friend ostream &print(ostream&,SalesData &);
    public:
        SalesData() = default;
        SalesData(const string &s,unsigned n,double p){
            bookNo = s;
            unitsSold = n;
            price = p;
            revenue = price * unitsSold;
        }
        SalesData(istream&);
        string isbn(){
            return bookNo;
        }
        SalesData &combine(const SalesData&);

    private:
        string bookNo;
        unsigned unitsSold = 0;
        double revenue = 0.0;
        double price = 0.0;
};
istream &read(istream& is,SalesData& item){
    double price = 0.0;
    is >> item.bookNo>>item.unitsSold>>item.price;
    item.revenue = item.price * item.unitsSold;
    return is;
}
ostream &print(ostream& os,SalesData& item){
    os << item.isbn()<<" "<<item.unitsSold<<" "<<item.revenue;
    return os;
}

int main(){
    SalesData s("5",4,500.0);
    cout << s.isbn()<<endl;
    read(cin,s);
    print(cout,s);
    
}