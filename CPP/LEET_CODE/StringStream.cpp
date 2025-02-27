#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

vector<int> parseInts(string str) {
    vector<int> result; // Vector to store the parsed integers
    stringstream ss(str); // Create a stringstream object with the input string
    char ch; // Variable to hold the comma

    int number;
    while (ss >> number) { // Extract integers from the stringstream
        result.push_back(number); // Add the integer to the vector
        ss >> ch; // Read the comma (discard it)
    }

    return result; // Return the vector of integers
}

int main() {
    string input;
    getline(cin, input); // Read the input string
    vector<int> integers = parseInts(input); // Parse the integers

    // Print the parsed integers
    for (int num : integers) {
        cout << num << endl;
    }

    return 0;
}
