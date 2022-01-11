/*(Find the Two Largest Numbers) Using an approach similar to 
that in Exercise 4.17, find the two largest values among the 10 numbers.
[Note: You must input each number only once.] ( c++ how to program )*/

#include <iostream>
using namespace std ;

int main () {
    int counter(1),number(0),secoundLargest(0),theLargest(0);

    while(counter<=10){
        cout<< "\nEnter number: " ;
        cin >> number ;

        if(number > secoundLargest){

            if(number>theLargest){
            secoundLargest = theLargest ;
            theLargest = number ;
            }
            else {
                secoundLargest = number ;
            }

        }

        counter++;
    }
    cout << "The first largest number is : " << theLargest << endl ;
    cout << "The secound largest number is : " << secoundLargest << endl ;


}