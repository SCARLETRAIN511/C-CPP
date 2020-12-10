#include <iostream>
using namespace std;



int main(){

    double num1,num2;
    char op; //get in the operators

    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the operator " << endl;
    cin >> op;
    cout << "Enter the second number" << endl;
    cin >> num2;
    double result;
    if (op == '+'){
        result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if(op == '/'){
        result = num1/num2;
    }else if(op == '*'){
        result = num1*num2;
    }else{
        cout << "Invalid operators" << endl;
    }

    cout << "The result is "<<result<<endl;
    return 0;

}