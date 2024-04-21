#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t ;
    cin >> t ;
    

    for(int i = 1 ; i<=t ; i++)
    {
        int w , h ;
        cin >> w >>h ;

        if(w==h)
        {
            cout << "Square"<<endl;
        }
        else
        {
            cout << "Rectangle"<<endl; 
        }
    }
    return 0;
}


