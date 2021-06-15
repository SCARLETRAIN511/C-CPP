#include <iostream>
using namespace std;

class MyException{

};

class MyException2:public MyException{

};

int main(){
    try{    
        throw MyException();
    }
    catch(MyException2 e){
        cout <<"Exception2"<<endl;
    }
    catch(MyException e){
        cout <<"Exception1"<<endl;
    }catch(int e){
        cout <<"Int catch"<<endl;
    }
    catch(double e){
        cout << "double catch"<<endl;
    }
    catch(...){
        cout <<"All catch"<<endl;
    }
}