#include<iostream>

using namespace std;

int main(){
    int math = 0;

   cout<<"Introduce cuanto sacaste en matematicas?" <<endl;
   cin>> math;
   

   switch (math)
   {
   case 10:
    cout<<"La alumna es una genio";
    break;

    case 7:
        cout<<"La ALUMNA SACO 7";
        break;
    case 0:
    cout<<"La alumna reprobo";
    break;

   default:
    cout<<"Valor incorrecto ";
    break;
   }



}