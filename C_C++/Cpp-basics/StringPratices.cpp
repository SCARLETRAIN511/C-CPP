#include <iostream>
#include <cstring>
using namespace std;

void stringOp1(){
    char x = 'A';
    char s[10] = "Hello";
    char s2[] = "HelloY";
    cout << s2 << endl;

    //reading and printing string
    char s3[50];
    cout << "Enter your name "<<endl;
    cin.getline(s3,50);
    //cin.get(s3,50);
    cout << s3 << endl;
}

void stringOp2(){
    char s4[50] = "Cstring";
    cout << "Type a string";
    cout << strlen(s4)<<endl;
}

void stringOp3(){
    char s1[20] = "Good";
    char s2[20] = "Morning";
    strcat(s1,s2);
    cout << s1<<endl;
    cout << s2<<endl;
}

void stringOp4(){
    char s1[20] = "Programming";
    char s2[10] = "Gra";
    if (strstr(s1,s2) != NULL){
        cout << strstr(s1,s2) << endl;
    }else{
        cout << "Not found" << endl;
    }
}

void stringOp5(){
    //functions strchr;
    char s1[20] = "Programming";
    char s2 = 'r';
    cout << strchr(s1,s2) << endl;
}

void stringConverter(){
    //strtol;
    //strtof;
    char s1[10] = "2455";
    char s2[10] = "31.25";
    long int x = strtol(s1,NULL,10);
    float y = strtof(s2,NULL);
    cout << x << endl;
    cout << y << endl;

    //strtok;
}


int main(){
    //stringOp1();
    //stringOp2();
    stringOp3();
    stringOp4();
    stringOp5();
    stringConverter();
    char s2[20] = "Programming";
    char *s2Ptr = s2;
    cout << s2Ptr <<endl;

    int x = 20;
    int *xPtr = &x;
    cout << *xPtr <<endl;
     
}