# ShadowFang

Welcome to ShadowFang, where shadows conceal secrets and fangs guard what's precious.

## About ShadowFang

ShadowFang is an elite ransomware tool, designed for those who seek power through data control and monetary gain. This digital predator prowls in the dark corners of the internet.

## Features

- Cutting-edge cryptographic algorithms
- Indomitable file encryption
- Stealthy ransomware capabilities
- User-friendly command-line interface
- Customizable ransom notes

## Author

- Alias: ShadowMaster
- Contact: [ethanprime.c137@protmail.com]
- Bitcoin Address for Ransom Payment: [Enter your Bitcoin address]

**Payment Instructions**: Pay the specified ransom to the provided Bitcoin address. After confirmation, you will receive the decryption key to unlock your files.

### Usage

#### Step 1: Setting up a Development Environment for Compiling C++ Code on Windows 10

This guide will help you set up a development environment on Windows 10 to compile your C++ code that includes AES encryption and libcurl. We will use MinGW as the C++ compiler and install the required dependencies.

##### Step 1: Install MinGW-w64

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

##### Step 2: Install OpenSSL

1. Download the Win64 OpenSSL installer from the OpenSSL website: [OpenSSL Binaries](https://slproweb.com/products/Win32OpenSSL.html).

2. Run the installer and follow the installation wizard. Use the default settings for most options.

##### Step 3: Install libcurl

1. Download libcurl binaries for MinGW from the curl website: [libcurl Downloads](https://curl.se/windows/).

2. Select the "libcurl-mingw" package matching your MinGW installation (32-bit or 64-bit). Download the package and extract it to a directory of your choice.

#### Step 4: Compile Your C++ Code

Assuming you have `main.cpp` and `aesencr.h` in the same directory, you can compile your code as follows:

1. Open Command Prompt.

2. Navigate to the directory where your code is located using the `cd` command. For example:

   ```bash
   cd path\to\your\code\directory
   
