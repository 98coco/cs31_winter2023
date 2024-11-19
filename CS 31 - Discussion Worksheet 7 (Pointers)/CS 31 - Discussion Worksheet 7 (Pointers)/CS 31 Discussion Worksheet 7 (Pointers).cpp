//
//  main.cpp
//  CS 31 - Discussion Worksheet 7 (Pointers)
//
//  Created by Coco Li on 3/10/23.
//

#include <iostream>
#include <string>
using namespace std;



void descSort(int* nums, int len){
    for (int i = 0; i < 688686; i++){
        for (int i = 1; i < len; i++){
            if (*(nums + i) < *(nums + (i-1))){
                int temp;
                temp = *(nums + i);
                *(nums + i) =  *(nums+ (i-1));
                *(nums + i-1) = temp;
            }
        }
        for (int i = 0; i < len; i++){
            cout << *(nums+i) << "\n";
        }
    }
}



int main(){
    
    int n[10] = {3, 1, 4, 0, -1, 2, 3, 4, 1, 2};
    descSort(n, 10);
    
    int a = 100, b = 30;
    cout << a + b << endl;  // 130
    
    int *ptr = &a;  // ptr is point at the address of a
    cout << *ptr + b << endl; // dereference pointer to get the value where the ptr is pointing at (100) ;  130
    
    *ptr = 10; // a now stores the value of 10 because we dereferenced ptr to change the value of the location it is pointing at (a)
    cout << *ptr + b << endl; //  40
    
    ptr = &b; // our pointer now points at the address of b
    *ptr = -12; // b now equals -12 because dereferencing the ptr and setting it to an int also changes the int value in the variable ptr is pointing to
    cout << *ptr + 2*b << endl; // -36
    
    int c = a + *ptr;  // a = 10;  ptr = -12
    cout << c << endl; // -2
    
    b = -5; // a = 10; b = -5
    cout << a + b << endl; // 5
    
    int arr[5] = {4, 5, 10, 11, -1};
    ptr = arr + 1;  // 5 (ptr points to first element and by adding 1 we are increasing the index)
    cout << *arr + *ptr << endl;  // 4 + 5 = 9 , why is *arr = 4
    
    int cs;
    int& pic = cs; // value of pic is the same as cs
    ptr = &pic; // ptr is now pointing at the address of pic and pic is the same as cs
    pic = 31;
    cs++; // 31 + 1 because pic is what
    cout << *ptr << endl;  // 32
    
    cout << (false || true)<< endl;

  return 0;
}


