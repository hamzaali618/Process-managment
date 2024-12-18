#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void listProcesses() {
    system("ps -eo pid,size,comm");
}

void terminateProcess(int pid) {
    string command = "kill " + std::to_string(pid);
    system(command.c_str());
}

int main() {
    int choice, pid;

    while (true) {
        cout << "1. List all processes\n";
        cout << "2. Terminate a process\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                listProcesses();
                break;
            case 2:
                cout << "Enter the process ID to terminate: ";
                cin >> pid;
                terminateProcess(pid);
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
