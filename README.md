# IPC Debugger Project – Pipe Simulation
## Overview
This project demonstrates Inter-Process Communication (IPC) using pipes in C++.  
It shows how a parent process and a child process communicate using the pipe()  
and fork() system calls.

## File Included
- ipc_simulator.cpp  
  Contains the C++ program for simulating IPC using pipes.

## Revisions Performed

### Initial Commit
- Added the base IPC simulation code
- Implemented pipe() and fork()
- Enabled message transfer from child process to parent process

### Revision 1: Displayed Parent Process IDs
- Added output statements to display:
  - Parent Process ID
- Helps in understanding process creation and execution flow

### Revision 2: Improved Pipe Message Clarity
- Improved the message sent through the pipe
- Output messages are clearer and more user-friendly
- Makes IPC communication easier to understand
- 
### Revision 3: Added Final End Message
- Added a final message at the end of program execution
