#include<iostream>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

// Convert string to lowercase
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    cout <<
"=============================\n";
    cout << " AI Rule-Based Chatbot\n";
    cout << "Type 'exit' to quit\n";
    cout <<
"=============================\n";

    string input;

    while (true) {
        cout << "\nYou: ";
        getline(cin, input);
    
        input = toLower(input);
    
        if (input == "exit") {
            cout << " Bot: Goodbye! Have a great day!\n";
            break;
        }
        else if (input.find("hello") !=string::npos ||
                 input.find("hi") !=string::npos) {
            cout << "Bot: Hello! How can I assist you?\n";
                 }
                 else if (input.find("your name") != string::npos) {
                    cout << "Bot: I am a C++ Rule-Based AI Chatbot.\n";
                 }
                 else if (input.find("how are you") != string::npos) {
                    cout << "Bot: I'm functioning perfefectly!\n";
                 }
                 else if (input.find("college") != string::npos) {
                    cout << "Bot: College life builds discipline and growth.\n";
                 }
                 else{
                    cout << "Bot: Sorry, I don't understand that yet.\n";
        }
    }

    return 0;
}