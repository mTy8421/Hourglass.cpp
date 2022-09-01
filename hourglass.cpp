#include <iostream>

using namespace std;

int main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= i - 1; k++){
            cout << " ";
        }
        for (int j = 1; j <= 5 - i + 1;j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    
    return EXIT_SUCCESS;
}