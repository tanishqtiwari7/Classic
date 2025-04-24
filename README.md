# 🎮 _Classic Console Application_ 🎮

## _Your Nostalgic Command-Line Adventure!_

A **super-duper** C++ console application that brings back the good ol' days with mathematics tools and simple games. Because who needs fancy graphics when you have _imagination_? 😉

## ✨ Features

- **Mathematics Tools** 🧮

  - Geometry calculations (circle, square, rectangle, triangle)
    > "Circles are just squares with infinite corners" - Probably some mathematician
  - Matrix operations (addition, multiplication, transpose)
    > "I know kung-fu" - Neo, after learning matrix operations

- **Games** 🎲
  - Rock Paper Scissors
    > Perfect for settling life's most important decisions!
  - Spinning wheel game
    > Because sometimes you just need to leave decisions to chance!

## 🗂️ Project Structure

```
ClassicConsoleApp/
├── include/            # Where all the fancy declarations live
├── src/                # The real magic happens here
│   ├── games/          # Fun stuff lives here
│   └── maths/          # The serious business
├── build.bat           # Magic build button for Windows
└── README.md           # You're reading me right now! 👋
```

## 🛠️ Requirements

- C++14 compatible compiler (it's not _that_ old school)
- A working computer (preferably powered on)
- Basic knowledge of how to use a keyboard
- Fingers (recommended but not required)

## 🚀 Building & Running

### Prerequisites

Before you begin, ensure you have the following installed on your system:

1. **Git**: To clone the repository.
2. **MinGW**: A C++ compiler that supports C++17 or later.
   - Ensure `mingw32-make` and `g++` are added to your system's PATH.

### Steps to Build and Run

1. **Clone the Repository**

   Open a terminal and run the following command to clone the project repository:

   ```
   git clone https://github.com/yourusername/ClassicConsoleApp.git
   ```

2. **Navigate to the Project Directory**

   Change to the project directory:

   ```
   cd ClassicConsoleApp
   ```

3. **Build the Project**

   Use the `mingw32-make` command to build the project:

   ```
   mingw32-make
   ```

   This will compile all the source files and generate the executable in the `bin` directory.

4. **Run the Application**

   After a successful build, run the application using the following command:

   ```
   bin\classic_app.exe
   ```

   Follow the on-screen instructions to interact with the program.

### Notes

- If you encounter any issues during the build process, ensure that MinGW is correctly installed and added to your PATH.
- The executable will be located in the `bin` directory as `classic_app.exe`.
- To clean the build files, you can use the following command:
  ```
  mingw32-make clean
  ```
  This will remove all object files, dependency files, and the executable.

## 🎯 Usage

1. Run the application
2. Follow the on-screen instructions to navigate through the program.
   - Enter your username when prompted.
   - Choose from the main menu options:
     - Mathematics Program (for the nerds)
     - Games (for the cool kids)
     - Exit Program (but why would you?)

## 📑 License

This project is released under the "Do Whatever You Want" license.
You're free to use, modify, distribute, or frame it on your wall.

## 🙏 Acknowledgements

- Thanks to my keyboard for not giving up on me
- Coffee, the true programmer's fuel
- You, for actually reading this far! 🌟
