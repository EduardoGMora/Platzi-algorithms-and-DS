#include <iostream>
#include <climits>
#include <vector>

using namespace std;

// Recursive greedy algorithm to calculate the minimum number of coins
int greedyChange( int coinSet[], int n, int N, vector<int> &coinsChange){
    // Base case: if there's no change left to give
    if (N==0)
        return 0;

    // Base case: if there's no coins left to give change
    if (N<0)
        return INT_MAX;
    
    int minCoins = INT_MAX;
    vector<int> coinsChangeTemp;

    // iterate over the coinSet
    for(int i = 0; i<n; i++){
        // Vector to store the coins used for the change
        vector<int> currentCoinsChange;

        // Subtract the current coin and call recursively
        int res = greedyChange(coinSet, n, N - coinSet[i], currentCoinsChange);

        // If the result is valid and less than the current minimum, update the minimum
        if(res != INT_MAX && res+1 < minCoins){
            // Update the minimum number of coins
            minCoins = res + 1;

            // Update the coinsChange vector
            coinsChangeTemp = currentCoinsChange;

            // Add the current coin to the coinsChange vector
            coinsChangeTemp.push_back(coinSet[i]);
        }
    }

    // Update the coinsChange vector
    if (minCoins != INT_MAX)
        coinsChange = coinsChangeTemp;

    return minCoins;
}

int main( int argc, char const *argv[]){
    int coinSet[] = {20,15,10,5,1};
    int n = sizeof(coinSet)/sizeof(coinSet[0]);

    int N = 27;
    vector<int> coinsChange; // Vector to store the coins used for the change
    int result = greedyChange(coinSet, n, N, coinsChange);

    if (result == INT_MAX) 
        cout << "It is not possible to give exact change with the available coins." << endl;
    else {
        cout << "The minimum number of coins to give change is -> " << result << endl;

        cout << "The coins used are: ";
        for (int coin : coinsChange)
            cout << coin << " ";
        
        cout << endl;
    }

    return 0;
}
