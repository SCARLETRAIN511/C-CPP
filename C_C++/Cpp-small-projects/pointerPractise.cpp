#include <iostream>
using namespace std;

void pointerPoint1(){
    void *p = NULL;
	int a = 10;
	p = (void *)&a; //指向变量时，最好转换为void *
	//使用指针变量指向的内存时，转换为int *
	*( (int *)p ) = 11;
	printf("a = %d\n", a);

}

void pointerConstant(){
    int a = 100;
	int b = 200;
    //指向常量的指针
	//修饰*，指针指向内存区域不能修改，指针指向可以变
	const int *p1 = &a; //等价于int const *p1 = &a;
	//*p1 = 111; //err
	p1 = &b; //ok
    cout << *p1 << endl;

    //指针常量
	//修饰p1，指针指向不能变，指针指向的内存可以修改
	int * const p2 = &a;
	//p2 = &b; //err
	*p2 = 222; //ok
    cout << *p2 << endl;
}

void pointerPractise2(){
    char str1[3] = {"Hello","For","Goodbye"};
    char *pstr1 = str1;
    cout << *(pstr1+1) << endl;
}

void pointerArray(){
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int n = sizeof(a) / sizeof(a[0]);
	
	for (i = 0; i < n; i++)
	{
		//printf("%d, ", a[i]);
		printf("%d, ", *(a+i));
	}

	printf("\n");
	int *p = a; //定义一个指针变量保存a的地址
    //use the pointer to change the array;
	for (i = 0; i < n; i++)
	{
		p[i] = 2 * i;
	}

    //print out the array using pointer
	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(p + i));
	}
    printf("\n");
    for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

void pointer2Pointer(){
    int a = 10;
    int *pA = &a;
    // this is a pointer that points a pointer
    int **pA2 = &pA;
    std::cout<<"pA:"<<pA<<std::endl<<"*p_a:"<<*pA<<std::endl;
    std::cout<<std::endl;

    std::cout<<"pA2:"<<pA2<<std::endl<<"*pA2:"<<*pA2<<std::endl<<"**pA2: "<<**pA2<<std::endl;
}


int main(){
    int x = 10;
    int *p = &x;
    *p = 20;
    x = 30;
    cout << *p << endl;

    int A[5] = {1,2,3,4,5};
    A[2] = 12;

     //memory allocated in heap;
    int *p2 = new int[5];
    p2[0] = 1;
    p2[1] = 13;
    p2[2] = 12;

    /*
    delete []p2;
    p2 = nullptr;
    */

    cout << p2[1] << endl;
 

    int size;
    cout << "Enter the number of the elements";
    cin >> size;
    //int A[size];
    int *p3 = new int[size];
    cout << p3 << endl;

    delete []p3;
    cout << "Enter the new size";
    cin >> size;
    p3 = new int[size];
    cout << p3 << endl;


    pointerPoint1();
    pointerConstant();
    pointerArray();
    pointerPractise2();
    pointer2Pointer();
}