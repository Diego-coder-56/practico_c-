//¿que son las condicionales?
/*Son estructuras de control que nos 
permiten el flujo de nuestro progrema 
dependiendo de ciertas condiciones
 establecidas por el programador  */

 #include<iostream>

 using namespace std;

 int main(){
   int math = 0;
   int Biology =0;

   cout<<"Introduce cuanto sacaste en matematicas?" <<endl;
   cin>> math;
   cout<<"Introduce cuanto sacaste en biologia?" <<endl;
   cin >> Biology;

   if (math > 6 ){
    cout<<"El alumno esta aprobado en matematicas"<< endl;
   }
   if(Biology < 8){
    cout<<"El alumno esta reprobado en biologia"<< endl;
   }

 }