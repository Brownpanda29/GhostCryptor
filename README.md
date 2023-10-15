# GhostCryptor

Welcome to GhostCryptor, your gateway to digital secrecy and control.

## About GhostCryptor

GhostCryptor is a powerful encryption tool designed to secure your files and data from prying eyes. It can be a key to unlock untold possibilities.

## Features

- State-of-the-art encryption algorithms
- Unbreakable file protection
- Secure ransomware capabilities
- User-friendly command-line interface
- Easy-to-use decryption guide

## Usage

1. Clone this repository to your local machine.
2. Customize the configuration settings in `config.json`.
3. Run GhostCryptor with your chosen parameters.
4. Follow the instructions carefully to unlock your files.

Remember, unauthorized use of GhostCryptor is illegal and unethical. Use it responsibly and at your own risk.

## Disclaimer

GhostCryptor is a fictional creation for entertainment purposes. Any real-world use of such software for illegal activities is prohibited and may lead to serious legal consequences.

## Author

- Alias: DarkGhost
- Contact: [ethanprime.c137@protmail.com]


# Setting up a Development Environment for Compiling C++ Code on Windows 10

This guide will help you set up a development environment on Windows 10 to compile your C++ code that includes AES encryption and libcurl. We will use MinGW as the C++ compiler and install the required dependencies.

## Step 1: Install MinGW-w64

1. Download the MinGW-w64 installer from the official repository: [MinGW-w64 Installer](https://sourceforge.net/projects/mingw-w64/).

2. Run the installer (`mingw-w64-install.exe`) and follow these steps:
   - Choose the architecture (32-bit or 64-bit).
   - Set the installation directory (e.g., `C:\MinGW`).
   - Select the "posix" threading model.
   - Choose the exception model as "seh."

3. After installation, add MinGW to your system's PATH:
   - Open the Start menu and search for "Environment Variables."
   - Click "Edit the system environment variables."
   - In the "System Properties" window, click the "Environment Variables" button.
   - Under "System variables," find the "Path" variable and click "Edit."
   - Add the MinGW bin directory to the PATH (e.g., `C:\MinGW\bin`).
   - Click "OK" to save the changes.

## Step 2: Install OpenSSL

1. Download the Win64 OpenSSL installer from the OpenSSL website: [OpenSSL Binaries](https://slproweb.com/products/Win32OpenSSL.html).

2. Run the installer and follow the installation wizard. Use the default settings for most options.

## Step 3: Install libcurl

1. Download libcurl binaries for MinGW from the curl website: [libcurl Downloads](https://curl.se/windows/).

2. Select the "libcurl-mingw" package matching your MinGW installation (32-bit or 64-bit). Download the package and extract it to a directory of your choice.

## Step 4: Compile Your C++ Code

Assuming you have `main.cpp` and `aesencr.h` in the same directory, you can compile your code as follows:

1. Open Command Prompt.

2. Navigate to the directory where your code is located using the `cd` command. For example:

   ```bash
   cd path\to\your\code\directory
Compile your code using the g++ compiler, linking with OpenSSL and libcurl libraries. Replace your_program_name with the desired name of your executable:

g++ main.cpp -o your_program_name -std=c++11 -I"path\to\libcurl\include" -L"path\to\libcurl\lib" -lcrypto -lssl -lcurl


Make sure to replace "path\to\libcurl\include" and "path\to\libcurl\lib" with the actual paths where you extracted libcurl in Step 3.

If the compilation is successful, you should have an executable named your_program_name in your code directory.

You can run the compiled program using the Command Prompt. For example:

your_program_name.exe

