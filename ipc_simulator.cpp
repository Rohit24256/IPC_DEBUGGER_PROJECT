#include <iostream>
#include <unistd.h>
using namespace std;
void simulatePipe() {
    int pipefd[2];
    char buffer[50];
    if (pipe(pipefd) == -1) {
        cout << "Pipe creation failed!" << endl;
        return;
    }
    // Display parent PID (Revision 2)
    cout << "Parent PID: " << getpid() << endl;
    int pid = fork();
    if (pid < 0) {
        cout << "Fork failed!" << endl;
        return;
    }
    // Child Process
    if (pid == 0) {
        close(pipefd[0]); // Close read end
        string message = "Hello from Child Process (PIPE)";
        write(pipefd[1], message.c_str(), message.size() + 1);
        close(pipefd[1]);
    } 
    // Parent Process
    else {
        close(pipefd[1]); // Close write end
        read(pipefd[0], buffer, sizeof(buffer));
        cout << "Parent received: " << buffer << endl;
        close(pipefd[0]);
    }
}
int main() {
    cout << "=== IPC Debugger Tool: Pipe Simulation ===\n";
    simulatePipe();
    return 0;
}
