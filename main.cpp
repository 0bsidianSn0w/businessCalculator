#include <iostream>
using namespace std;


float profitCalc(float fixedCosts, float variableCosts, float sellingPrice, int unitsSold) {
    float profitLoss { ((sellingPrice * unitsSold) - fixedCosts - (variableCosts * unitsSold)) };
    return profitLoss;
}

int main() {
    float fixedCostsGlobal;
    float variableCostsGlobal;
    float sellingPriceGlobal;
    int unitsSoldGlobal;
    char wantsToQuit;

    while (true) {
        cout << "Please enter fixed costs." << endl << "> ";
        cin >> fixedCostsGlobal;
        cout << "Please enter variable costs." << endl << "> ";
        cin >> variableCostsGlobal;
        cout << "Please enter units sold." << endl << "> ";
        cin >> unitsSoldGlobal;
        cout << "Please enter selling price." << endl << "> ";
        cin >> sellingPriceGlobal;
        cout << endl;
        cout << "Revenue was: " << (sellingPriceGlobal * unitsSoldGlobal) << endl;
        cout << "The profit / loss was: " << profitCalc(fixedCostsGlobal, variableCostsGlobal, sellingPriceGlobal, unitsSoldGlobal) << endl;
        cout << "Variable costs: " << variableCostsGlobal * unitsSoldGlobal << endl;
        cout << "Fixed costs dont change. so: " << fixedCostsGlobal << endl;
        cout << "Total costs: " << (fixedCostsGlobal + variableCostsGlobal * unitsSoldGlobal) << endl;
        cout << endl << endl;
        cout << "Would you like to quit? (Y/N)" << endl << "> ";
        cin >> wantsToQuit;
        if ((wantsToQuit == 'Y') || (wantsToQuit == 'y')) {
            return 0;
        }
        cout << endl;
    }
}