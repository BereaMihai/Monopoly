#include <iostream>
#include <fstream>
using namespace std;

ofstream output("listaUseri.txt");
int main()
{
 int players=0;

 while(players<4)
    {
       string nume="";
       string parola="";
          cout<<"Introdu nume jucator: "<<endl;
          cin>>nume;
          output<< nume<<" ";
          cout<<"Introduceti parola"<<endl;
          cin>>parola;
          output<<parola<<endl;
          players++;
     }
   cout<<"Reading:"<<endl;
   ifstream read("listaUseri.txt");
   string username,password;

 while(read>>username>>password)
    {
       cout<<"Username:"<<username<<" Password: "<<password<<endl;
    }

return 0;
}
