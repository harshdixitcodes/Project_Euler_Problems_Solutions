#include<iostream>
#include<string>
using namespace std;

int main() {
    string largenum = 
        "731671765313306249192251196744265747423553491949349698352031277450632623957831801698480186947885184385861560789112949495459"
        "501737958331952853208805511125406987471585238630507156932909632952274430435576689664895044524452316173185640309871112172238"
        "311362229893423380308135336276614282806444486645238749303589072962904915604407723907138105158593079608667017242712188399879"
        "790879227492190169972088809377665727333001053367881220235421809751254540594752243525849077116705560136048395864467063244157"
        "221553975369781797784617406495514929086256932197846862248283972241375657056057490261407972968652414535100474821663704844031"
        "998900088952434506585412275886668811642717147992444292823086346567481391912316282458617866458359124566529476545682848912883"
        "142607690042242190226710556263211111093705442175069416589604080719840385096245544436298123098787992724428490918884580156166"
        "097919133875499200524063689912560717606058861164671094050775410022569831552000559357297257163626956188267042825248360082325"
        "7530420752963450";
    long long maxProduct = 0; // To store the maximum product
    int windowSize = 13;      // The number of digits to consider

    // Start the process only if there are enough digits
    if (largenum.size() >= windowSize) {
        long long currentProduct = 1; // Current product of the window

        // Initialize the first window
        for (int i = 0; i < windowSize; i++) {
            currentProduct *= largenum[i] - '0';
        }
        maxProduct = currentProduct;

        // Slide through the rest of the digits
        for (int i = windowSize; i < largenum.size(); i++) {
            // To avoid division by zero
            if (largenum[i - windowSize] == '0') {
                // Recalculate the product for the current window
                currentProduct = 1;
                for (int j = i - windowSize + 1; j <= i; j++) {
                    currentProduct *= largenum[j] - '0';
                }
            } else {
                // Slide the window by dividing the outgoing and multiplying the incoming
                currentProduct /= largenum[i - windowSize] - '0';  // Remove the first digit of the old window
                currentProduct *= largenum[i] - '0';              // Add the new digit
            }
            // Update maxProduct if the current product is greater
            if (currentProduct > maxProduct) {
                maxProduct = currentProduct;
            }
        }
    }

    cout << "The greatest product of thirteen adjacent digits is: " << maxProduct << endl;
    return 0;
}
