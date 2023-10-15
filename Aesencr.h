#ifndef AES_ENCRYPTION_H
#define AES_ENCRYPTION_H

#include <openssl/aes.h>

class AESEncryption {
public:
    AESEncryption();
    
    void GenerateKey(unsigned char* key, int keySize);
    void Encrypt(const unsigned char* input, unsigned char* output, size_t length);
    void Decrypt(const unsigned char* input, unsigned char* output, size_t length);

private:
    AES_KEY aesKey;
};

AESEncryption::AESEncryption() {
    // Constructor can be kept empty
}

void AESEncryption::GenerateKey(unsigned char* key, int keySize) {
    if (keySize == 16) {
        AES_set_encrypt_key(key, 128, &aesKey);
    } else if (keySize == 32) {
        AES_set_encrypt_key(key, 256, &aesKey);
    }
}

void AESEncryption::Encrypt(const unsigned char* input, unsigned char* output, size_t length) {
    AES_encrypt(input, output, &aesKey);
}

void AESEncryption::Decrypt(const unsigned char* input, unsigned char* output, size_t length) {
    AES_decrypt(input, output, &aesKey);
}

#endif
