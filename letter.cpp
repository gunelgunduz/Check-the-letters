#include <iostream>
using namespace std;

int main ()
{
    char myCharacter;
    cout<<"Enter a character:";
    cin>>myCharacter;
    if ((myCharacter>='A') && (myCharacter<='Z')){
           cout<<myCharacter<< " is a uppercase letter\n";
    }else if ((myCharacter>='a') && (myCharacter<='z')){
        cout<<myCharacter<<"is a lowercase letter\n";
    }else{
        cout<<myCharacter<<" is not a letter\n";
    }
    
    
    
    return 0;

}