#include <iostream>
#include <string>
using namespace std;
//095
main()
{
    string n;
    cout << "Input Number : ";
    cin >> n;
    cout << "Output : ";
    if(n[n.length()-1]=='0'||n[n.length()-1]=='2'||n[n.length()-1]=='4'||n[n.length()-1]=='6'||n[n.length()-1]=='8') cout << "Even Number";
    else cout << "Odd Number";
    return 0;
}

