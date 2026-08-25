# Operating Systems – Skill 01

## 1. Objective

The objective of this practical is to set up the Linux development environment and understand basic operating system concepts related to processes and system calls.

## 2. Tasks

### Environment Setup

* Install and configure a Linux Virtual Machine (VM).
* Configure GCC compiler for C programming.
* Set up a Git repository for the practical work.
* Create the required project directory structure.
* Understand the basic architecture of the Linux shell.
* Build and test an initial Makefile.

### Process and System Call Analysis

* Understand the concept of process abstraction.
* Execute the `fork()` system call.
* Understand and use the `exec()` family of system calls.
* Analyze parent-child process relationships.
* Inspect the process tree in Linux.
* Practice system call tracing using appropriate Linux tools.

## 3. Software Requirements

* Linux / Ubuntu
* GCC Compiler
* Git
* Make
* Terminal
* VS Code or any text editor
* System call tracing tools such as `strace`

## 4. Project Structure

```text
Practical-01/
├── SRC/
│   ├── fork.c
│   ├── exec.c
│   └── ...
├── OUTPUTS/
├── SCREENSHOTS/
├── Makefile
└── README.md
```

## 5. Important Commands

### Check Linux

```bash
uname -a
```

### Check GCC

```bash
gcc --version
```

### Check Git

```bash
git --version
```

### Compile a C Program

```bash
gcc program.c -o program
```

### Execute the Program

```bash
./program
```

### View Processes

```bash
ps
```

### View Process Tree

```bash
pstree
```

### Trace System Calls

```bash
strace ./program
```

## 6. Process Concepts

### `fork()`

The `fork()` system call creates a new child process from the existing parent process.

After `fork()`:

```text
Parent Process
      |
      +------ Child Process
```

The parent and child execute independently.

### `exec()`

The `exec()` family replaces the current process image with a new program. It is commonly used with `fork()` to create a child process and execute another program.

```text
Parent
  |
 fork()
  |
 Child
  |
 exec()
  |
New Program
```

### Parent-Child Relationship

A child process is created by a parent process using `fork()`. The child receives a unique Process ID (PID), while the parent can obtain the child's PID.

## 7. Makefile

A Makefile is used to automate the compilation of C programs. Instead of typing the complete GCC command every time, the required program can be built using:

```bash
make
```

## 8. System Call Tracing

`strace` can be used to observe the system calls made by a program.

Example:

```bash
strace ./program
```

It helps identify system calls such as:

* `fork()`
* `execve()`
* `wait()`
* `open()`
* `read()`
* `write()`
* `close()`

## 9. Learning Outcomes

After completing this practical, we understand:

* Basic Linux environment setup.
* GCC compilation and execution.
* Git repository and project organization.
* Basic shell architecture.
* Makefile-based compilation.
* Process abstraction.
* Creation of processes using `fork()`.
* Execution of programs using `exec()`.
* Parent-child process relationships.
* Linux process trees.
* Basic system call tracing.

## 10. Conclusion

This practical provides a foundation for understanding the Linux operating system environment, process management, system calls, and basic development tools. It also introduces the use of GCC, Git, Makefiles, `fork()`, `exec()`, process-tree utilities, and system call tracing.
