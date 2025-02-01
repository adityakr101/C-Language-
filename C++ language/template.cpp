#include<iostream>
using namespace std;
// Template Function with a Type T
// This T will be changed to the data type of the argumentduring instantiation.
template < class T >
T maxNum ( T x , T y ) {
return ( a > y ? a : y ) ;
}
int main ( )
{ int a = 5 , b = 2 ;
float i = 4.5 , j = 1.3 ;
std :: cout << maxNum < int > ( a , b ) << " \ n ";
std :: cout << maxNum < float > ( i , j ) ;
return 0 ;
}
