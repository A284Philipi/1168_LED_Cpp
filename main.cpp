#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    int cont = 0, b, leds = 0, k;
    string a;
    cin >> b;
    while (cont < b){
        cin >> a;
        for (k = 0; k < a.length(); k++){
            if (a[k] == '2' || a[k] == '3' || a[k] == '5'){
                leds = leds + 5;
            }
            if (a[k] == '1'){
                leds = leds + 2;
            }
            if (a[k] == '8'){
                leds = leds + 7;
            }
            if (a[k] == '9' || a[k] == '6'|| a[k] == '0'){
                leds = leds + 6;
            }
            if (a[k] == '4'){
                leds = leds + 4;
            }
            if (a[k] == '7'){
                leds = leds + 3;
            }
        }
        cout << leds << " leds" <<endl;
        leds = 0;
        cont++;
    }
    return 0;
}
