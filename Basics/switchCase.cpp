/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter te value of b"<<endl;
    cin>>b;
    
    char opr;
    cout<<"enter the opration you want"<<endl;
    cin>> opr;
    switch(opr){
     
    case'+':cout<<(a+b) <<endl;
         break;
    
    case'-':cout<< (a-b) <<endl;
          break;

    case '*':cout<< (a*b) <<endl;
           break;
    
    case'/':cout<< (a/b) <<endl;
             break;
      
    case'%':cout<< (a%b) <<endl;
              break;
    }
    return 0;
}
