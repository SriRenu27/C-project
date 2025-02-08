# C-project
Author- Sri Renu

# 1.Text-to-Speech in C 🗣️ :-

A simple text-to-speech (TTS) system written in C using [eSpeak](http://espeak.sourceforge.net/).  

## Features  
✅ Convert text to speech in real-time  
✅ Supports multiple languages  
✅ Adjustable speech rate and volume  

# Dependencies
sudo apt install espeak  # For Linux

# Usage
./tts "Hello, world!"

# License
This project is licensed under the MIT License.


# 2.Basic Virtual Assistant in C :-

A simple command-line virtual assistant written in C that can:
✅ Greet the user
✅ Display system information
✅ Open files using Notepad (on Windows)
✅ Process basic text commands

## Features
Supports simple commands like greet, info, and open <file>
Opens specified files in Notepad
Runs in an interactive loop until the user exits

# Commands Supported
Command 	           Description
 greet	          Prints a greeting message.
 info	            Displays basic system information.
 open <file>	    Opens the specified file in Notepad.
 exit        	    Exits the assistant.

# Usage
You: greet
Hello! How can I assist you today?
You: info
This is a basic virtual assistant running in C.
You: open test.txt
Attempting to open file: test.txt  (Notepad opens the file)
You: exit
Goodbye!

# Dependencies
GCC Compiler (For compiling the C program)
Notepad (Windows) (For opening files)

#  License
This project is licensed under the MIT License

