//
//  pointers
//
//  Created by Coco Li on 3/9/23.
//

#include <iostream>
#include <string>
using namespace std;

//void swapPointer(int *x, int*y){
//    int z = *x;
//    *x = *y;
//    *y = z;
//}
//
//void swapReference(int& x, int& y){
//    int z = x;
//    x = y;
//    y = z;
//}

int main(){

//    int a = 45, b = 35;
//    cout << "Before Swap" << endl;
//    cout << "a= " << a << " b= " << b << endl;

//    swapPointer(&a,&b);
//
//    cout << "After Swap with pass by pointer" << endl;
//    cout << "a= " << a << " b= " << b << endl;  //a = 35, b = 45

//    swapReference(a,b);
//
//    cout << "After Swap with pass by reference" << endl;
//    cout << "a= " << a << " b= " << b << endl; // a = 35, b =45

//
//    int n = 5;
//    cout << n << endl; // value stored in n
//    cout << &n << endl; //address of n
//    int* ptr = &n; //can't assign int* ptr = n because a pointer points to an address; doesnt store a value
//                // ptr is now pointing to the address of n and can access the value at n
//    cout << ptr << endl; // will print the address of n because ptr is equal to the address of &n
//    cout << *ptr << endl; // will cout the value the pointer is pointing at; the star after declaring a printer is now used to dereference the pointer
//    cout << &ptr << endl;  // pointing to the address of pointer; pointer has its own address in the memory
//
//    // changing pointers
//
//    *ptr = 10; // dereferencing after initalization; doing this means that the pointer's value is now 10 and that it is pointing at 10; we changed the value at the adress of n
//    cout << ptr << endl; //produces the address of 5; why is it pointing to the adress of 5?
//                        // answer: it is because 10 is now assigned to that address at which 5 was just at
//    cout << *ptr << endl; // produces the value of 10
//    cout << &ptr << endl; // produces the address of ptr -- different from the address of n because we are getting the address of the pointer; address of the pointer is different from the address of n
//    cout << &n << endl; // produces the address of 5; why does it not make n change its address?
//                        // answer: it is because 10 is now stored at that address of n
//    cout << n << endl; //value of n is 10 because in line 16 we mentioned how the ptr points to the address of n and can access the value in n; by dereferencing ptr to 10, we are essentially saying that whatever value ptr is pointing to is now equal 10
//
//    int q = 5;
//    ptr = &q;
//    cout << ptr << endl; //point to the address of q
//    cout << *ptr << endl; //produces 5


//Aryan's Code of explaining pointers

//    int n = 3;
//    int a = 2;
//    int* ptr1 = &n;
//    int* ptr2 = &a;
//
//    cout << "N's Address: " << ptr1 << " Value of N: " << *ptr1 << endl;
//    cout << "A's Address: " << ptr2 << " Value of A: " << *ptr2 << endl;
//
//    ptr1 = ptr2;
//
//    cout << "ptr1 = ptr2" << endl; // ptr1 is now pointing to the address of A rather than N; ptr1 also has the value of A rather than N
//    cout << "N's Address: " << ptr1 << " Value of N: " << *ptr1 << endl;
//    cout << "N's Address: " << ptr2 << " Value of A: " << *ptr2 << endl;
//
//    cout << "N's Address: " << ptr1 << " Value of N: " << *ptr1 << " Address of ptr1: " << &ptr1 << endl; // although the pointers now point at the same thing, they still have their own unique addresses
//    cout << "N's Address: " << ptr2 << " Value of A: " << *ptr2 << " Address of ptr2: " << &ptr2 << endl; // although the pointers now point at the same thing, they still have their own unique addresses

//    ptr = new int;  // ask about new int
//    cout << ptr << endl;
//    cout << *ptr << endl;


    int *p1, *p2;

    p1 = new int; // new int helps allocate new memory for a variable --> use delete to clear it
    *p1 = 42;
    p2 = p1;
    cout << "*p1 == " << *p1 << endl;  //42
    cout << "*p2 == " << *p2 << endl;  //42 because p1 allocated 42 to its new storage

    *p2 = 53;
    cout << "*p1 == " << *p1 << endl;  // 53
    cout << "*p2 == " << *p2 << endl;  // 53

    p1 = new int;
    *p1 = 88;
    cout << "*p1 == " << *p1 << endl; //88
    cout << "*p2 == " << *p2 << endl; //53

  
    return 0;
}
