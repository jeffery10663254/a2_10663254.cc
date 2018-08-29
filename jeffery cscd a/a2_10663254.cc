#include <iostream>

using namespace std;

int main()
{
    int a;
    bool prime=false;
  //bool is either true or false
    cout<<"Enter an number :";
    cin>>a;


    for(int b=2;b<a;b++)
    {

        if(a%b==0)
        {
            prime=true;
            break;
        }




    }

    if{prime==false && a>1 )
    {
        cout<<a<<" \nis a prime number.\n";



    }

    else{

        cout<<a<<" is not a prime number.\n";


    }



    return 0;
}
