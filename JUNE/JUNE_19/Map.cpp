#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map with string keys and integer values
    map<string, int> studentScores;

    // Add some key-value pairs to the map
    studentScores["Alice"] = 90;
    studentScores["Bob"] = 85;
    studentScores["Charlie"] = 92;

    // Access and print the values using the keys
    cout << "Alice's score: " << studentScores["Alice"] << endl;
    cout << "Bob's score: " << studentScores["Bob"] << endl;

    // Check if a key exists in the map
    if (studentScores.count("Charlie") > 0) {
        cout << "Charlie's score: " << studentScores["Charlie"] << endl;
    }

    // Update the value associated with a key
    studentScores["Bob"] = 88;
    cout << "Updated Bob's score: " << studentScores["Bob"] << endl;

    // Iterate over the map
    cout << "All student scores:" << endl;
    for (const auto& entry : studentScores) {
        cout << entry.first << ": " << entry.second << endl;
    }

    // Remove a key-value pair from the map
    studentScores.erase("Charlie");

    // Check if a key exists after erasing it
    if (studentScores.count("Charlie") > 0) {
        cout << "Charlie's score (after erasing): " << studentScores["Charlie"] << endl;
    } else {
        cout << "Charlie's score doesn't exist in the map anymore." << endl;
    }

    return 0;
}

