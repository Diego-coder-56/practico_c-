#include<iostream>

 using namespace std;

 int main(){
   int math = 0;
   int Biology =0;

   cout<<"Introduce cuanto sacaste en matematicas?" <<endl;
   cin>> math;
   cout<<"Introduce cuanto sacaste en biologia?" <<endl;
   cin >> Biology;

   if (math == 10 ){
    cout<<"Eres un genio :)"<< endl;
   }
   else if(math  > 6)
   {
    cout<<"Aprobaste matematicas"<< endl;

   }

   else
   {
    cout<<"El alumno esta reprobo en matematicas :( )"<< endl;

   }

 }