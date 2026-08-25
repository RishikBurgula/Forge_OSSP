# Operating Systems – Skill-2

## Objective

This practical focuses on developing an interactive command-line loop and implementing keyboard input handling.

## Tasks

### Interactive Main Loop

* Create the main program loop.
* Display a command prompt to the user.
* Read user input continuously.
* Handle exit conditions.
* Design the control flow of the interactive loop.
* Test the interactive loop with different inputs.

### Keyboard Input Handling

* Capture keyboard input character by character.
* Handle the **Backspace** key.
* Process the **Enter** key.
* Manage the input buffer.
* Support multi-character commands.
* Test user interaction through the terminal.

## Software Requirements

* Linux / Ubuntu
* GCC Compiler
* Git
* Terminal
* C Programming Language

## Project Structure

```text
Skill-2/
├── SRC/
│   ├── main.c
│   └── ...
├── OUTPUTS/
├── SCREENSHOTS/
├── Makefile
└── README.md
```

## Main Loop

The program continuously displays a prompt and waits for the user to enter a command.

```text
Start
  |
  v
Display Prompt
  |
  v
Read Keyboard Input
  |
  v
Process Input
  |
  +---- Exit Command? ---- Yes ----> End
  |
  No
  |
  v
Execute / Handle Command
  |
  v
Display Prompt Again
```

## Keyboard Input

The program captures keyboard input and stores the characters in an input buffer.

### Backspace

When the Backspace key is pressed, the last character entered is removed from the buffer and the terminal display is updated.

### Enter

When the Enter key is pressed, the input stored in the buffer is considered a complete command and is processed by the program.

### Multi-Character Commands

The input buffer allows multiple characters to be entered before pressing Enter.

Example:

```text
os> hello
os> fork
os> exit
```

## Testing

The interactive loop is tested using:

* Single-character input.
* Multi-character commands.
* Backspace operations.
* Empty input.
* Enter key.
* Exit command.
* Repeated commands.

## Learning Outcomes

After completing this practical, we understand:

* How an interactive command loop works.
* How to display and manage a command prompt.
* How keyboard input is captured.
* How an input buffer stores characters.
* How Backspace and Enter keys are handled.
* How multi-character commands are processed.
* How control flow is designed and tested.

## Conclusion

This practical provides an understanding of interactive command-line program design. It demonstrates how user input can be captured, stored, edited, and processed while maintaining a continuous main loop with appropriate exit conditions.
