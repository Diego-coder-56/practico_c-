#include <iostream>

using namespace std;

int main(){
    /*int counter = 0;
    //primer loop while

    while(counter <100)
    {
        cout << counter <<endl;
        counter  = counter + 1;
    }
    */

    //segundo loop dowhile

  /*  bool isHappy = true;
    char input = ' ' ;
    do
    {
        cout << ":)" <<endl;
        cout<< "¿sigues feliz? (t/f) " <<endl;
        cin >>input;
        if (input == 'f')
        {
            isHappy = false;
            cout<<": ( ";
        }
        


    }while(isHappy ==true);
    */


   for(int i  = 0;i <100;i++)
   {
    if(i % 2 == 0)
    {
        cout <<"es par :)"<<endl;
    }else{
        cout<<"es impar D:"<<endl;
    }
   }

   
}