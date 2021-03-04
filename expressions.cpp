#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

    //input and output variables must be declarated and or initialized before using

    //int a,b,c,d,f,x,y;

   //float z;


    //input prompting and receiving

   // cout << " \n Enter the value for a,b,c,d,x, y : \t ";
   // cin >> a >> b >> c >> d >> x >> y;

    //calculation and process of expressions - BODMAS

  // f = a * x + b;

   // z = x * x + y * y;

   // z = (float)a * x +  (float)(b - c) * (c -d) /y;
    //z = rand(5);
    //output

   //cout << " \n The value of ax+b is \t" << c << endl;
   cout << "\n The value of z is \t" << z << endl;


    // Simple interest


    /*float p,r,si ;
    int n;
   cout << " \n Enter the principle amount NZ$\t";
   cin >> p;
    cout << " \n Enter the number of months\t";
    cin >> n;
    cout << " \n Enter the rate of interest\t";
    cin >> r;


    si = (p * n * r) / 100 ;
    cout << "\n Simple interest = NZ$ \t" << si <<endl;*/

    float a,b,c,x1,x2;



    cout << "\n Enter a,b,c \t" ;
    cin >> a >> b >> c;

     x1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2*a);

    cout << "\n x1 = \t " << x1;

    


    return 0;
}
