
#include<bits/stdc++.h>
using namespace std;



void fun(int * p){
    int y = 20 ;
    p = &y;
    cout << "In fun function : " << *p <<endl;
}



int main(){
    int x = 10;
//    cout << &x ;
    int * p = &x;

    fun(p);
    cout << "In main function : " << p <<endl;
    cout << "In main function : " << *p <<endl;



    return 0;
}




//



//#include<bits/stdc++.h>
//using namespace std;
//
//    int y = 20 ;
//
//void fun(int * &p){
//
//    p = &y;
//    cout << "In fun function : " << *p <<endl;
//}
//
//
//
//int main(){
//    int x = 10;
////    cout << &x ;
//    int * p = &x;
//
//    fun(p);
//    cout << "In main function : " << p <<endl;
//    cout << "In main function : " << *p <<endl;
//
//
//
//    return 0;
//}
