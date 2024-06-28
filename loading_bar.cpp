#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Function to create a loading bar
void loadingBar() {
    // ANSI escape codes for colored output
    // Note: Not all terminals support color; this is common in Unix-based systems.
    const string green = "\033[0;32m";
    const string reset = "\033[0m";
    
    // Characters for the loading bar
    char a = '-', b = '=';

    cout << "\n\n\n\n";
    cout << "Loading...\n\n";
    // cout << "\t\t\t\t\t";

    // Print initial loading bar
    for (int i = 0; i < 26; i++) {
        cout << a;
    }

    // Set the cursor again to the starting point of the loading bar
    cout << "\r";
    // cout << "\t\t\t\t\t";

    // Print loading bar progress
    for (int i = 0; i < 26; i++) {
        cout << green << b << reset << flush;

        // Sleep for 100 milliseconds
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    cout << endl;
}


void myLoadingBar() {
	char init = '-';
	char load = '=';

	cout << "\n\n\n\n";
	cout << "Loading...\n\n";

	for (int i=0; i<26; i++) {
		cout << init;
	}

	cout << "\r";

	for (int i=0; i<26; i++) {
		cout << load << flush;

		this_thread::sleep_for(chrono::milliseconds(200));
	}

	cout << endl;
}

// Driver code
int main() {
    // Function call
    loadingBar();
	myLoadingBar();
    return 0;
}