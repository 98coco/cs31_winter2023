//
//  main.cpp
//  Final Review
//
//  Created by Coco Li on 3/19/23.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//class string{  //what include <string> is
//private:
//    int m_size;
//    char* m_data;
//
//public:
//    int length();
//    int size();
//};


//void swap (int x, int y){
//    int temp = x;
//    x = y;
//    y = temp;
//}
//
//void swapPASS (int& x,int& y){
//    int temp = x;
//    x = y;
//    y = temp;
//}
//
//int foo2(int x, int& y, int& z, string arr[]) {
//  if (x == z)
//    x = y;
//  else
//    z = x;
//  cout << x << " " << y << " " << z << endl; // prints 2,2,1
//
//  if (x != y)
//    cout << foo2(x, y, z, arr) << endl;
//
//  if (arr[x-1] == "Sup")
//    return 1;
//  else
//    return 0;
//}
//
//
//int foo(int x, int& y, int& z, string arr[]) {
//  if (x == z)
//    x = y;
//  else
//    z = x;
//  cout << x << " " << y << " " << z << endl; //1, 2, 1
//
//  if (x != y)
//    cout << foo2(x, y, z, arr) << endl;// pause side mission for side mission
//
//  if (arr[x-1] == "Sup")
//    return 1;
//  else
//    return 0;
//}
//
//int changeOdd(int arr[], int n) {
//  int count = 0;
//  for (int i = 0; i < n; i++) {
//    if (arr[i] % 2 == 1) {
//      arr[i]--;
//      count++; // 2
//    }
//  }
//  n++; //3
//  return count;
//}

int main() {
    
    char l = '"';
    cout << l << "Hello 'W'!" << l << endl;
//        int n = 5;
//        int array[5] = {2, 6, 3, 5, 10};
//        cout << changeOdd(array, n) << endl;
//
//    for (int i = 0 ; i < 5; i++){
//        cout << array[i] << endl;  //array {2,6,2,4,10}7
//    }
//
//    int x = 1, y = 2, z = 3;
//    string arr[] = {"Sup", "Hi", "Hey"};
//
//      // Print values before the call to foo
//      cout << x << " " << y << " " << z << endl; //1,2,3
//      // Print the return value of foo
//      cout << foo(x, y, z, arr) << endl; // side mission// 1
//      // Print values after the call to foo
//      cout << x << " " << y << " " << z << endl;// 1, 2, 1

//
//
//    //string
//
//    //c string
//    //c string is an array of char in c++
//
//    //ex: of c string
//
//    const char* name = "Coco"; // pointer name is pointing to the first letter of Coco; this is because the string is an array of char
//    // Q: Why can it still cout name without dereferencing the pointer?
//    // A:
//    cout << name << endl;
//
////    char name2[5] = {'C','o','c','o',0}; //0 is a null character --> this array is a const char array
//    char name2[5] = {'C','o','c','o','\0'};
//    cout << name2 << endl;
//
//    //lets change the above to a standard string --> is this the same as saying c++ string?
//    //do so by including the string library
//
//    string manifest = "Coco will pass her exams."; //string literal?
//    cout << manifest << endl;
//
////    string manifest = "Coco will pass her exams" + "She is such as slay"; --> cant do this because c++ decided not to allow this
//
//    string example = "hi";
//    //^^ cant do this to strings because this is a const char array --> not an actual string
//    //can't add two pointers together or two arrays
//    manifest += " She is such a slay"; //this will add she is such as slay to coco will pass her exams because the += is an overloaded operator in the string class of c++
//
////    "s" < "t"; //comparing address of s and t --> not possible
//
//    cout << manifest << endl;
//
//    // How is it not an actual string if we declared it as a string class?
//
//
////vectors
//
//    //push_back has to have a parameter
//    //capacity increases the current vector capacity by 2 when there is no more room
//    //capacity is good because it is much more efficient than
//
////enums
//    //enumeration -- a set of values; a way to give a name to a value
//    //instead of having a bunch of integers called a, b, c we can hav enums which have the value a,b,c, that correspond to integers
//    //has to be an integer for enum
//
////    int A = 0;    //if we were to have this, later on in the code we might want to change some values of each of the variables. However, it may cause problems because we did not group these integers together. EX: we might want to change the value of A later on in the code, and we will lose the value of 0 in A
////    int B = 1;
////    int C = 3;
////
////    int value = B; // we also can assign 5 here and the code below no longer makes sense --> int value = 5
////
////    if (value == B){
////       // do something
////    }
////
//
//    // to solve these problems we can group these as enum types
//
//
////    enum Example : unsigned char
////    { //we can also specify what type of integer we want this to be. here we are assigning it as an unsign char --> can't assign it as a float because float is not an integer value
////        D,E,F
////    };
////
////
////    int d = 0;
////    int e = 1;
////    int f =2;
//
////    Example value2 = D; //by having an enum, we can't change value2 unless it is of the enum type example
////
////    if(value2 == 0){ //can compare value2 to and integer 0 because unless we initialize our enums, the default starts from 0 and increment by 1
////        //do something
////    }
//
//   int  x = 5;
//   int  y= 4;
//
//    swap(x,y);
//
//    cout << x << endl; //should give you 5
//    cout << y << endl; //should give you 4
//
//    swapPASS(x,y);
//
//    cout << x << endl; //should give you 4
//    cout << y << endl; //should give you 5
//
    
    
//    int array[10] = {4,6,2,3,-1,-3,2,2,-7,-9};
//    int index;
//    cin >> index;
//
//    int *p = array + index;
//
//    for (int i = 0; i < 5; i++){
//        int hops = *p;
//        p+= hops;
//    }
//
//    cout << *p << endl;

    /*
    index = 0
     array + 0 --> pointer is pointing to the 0 index of the array
     
     hops = 4;
     
     8
    
    */
    
//    vector <int> a {5,100}; //gives 5, 100
//    vector <int> a2 (5,100); //gives 100,100,100,100,100
//
//    cout << a2 << endl;  --> cant cout  a container
//    cout << a << endl;
    
//    for (int i = 0; i < 5; i++){  //gives 100,100,100,100,100
//        cout << a2[i];
//    }
//
//    for (int i = 0; i < 2; i++){ //gives 5, 100
//        cout << a[i];
//    }
//
//    
    return 0;
}
