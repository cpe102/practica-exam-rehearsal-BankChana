#include <iostream>
#include <string>
using namespace std;

int main(){
    double G;
    string N;
    cout << "What is your name? : ";
    cin >> N;
    cout << "\nWhat is your GPA? : ";
    cin >> G;
    if (G>=3.5){
        cout << N<< " InW Jrim Jrim!!!";
    }
    else{
        cout << "Try harder, "<< N ;
    }
}
