#include "stdio.h"
#include "stdint.h"

void print_buffer_as_hex(const unsigned char *buffer, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%02X ", buffer[i]); // Print each byte as a 2-digit uppercase hex value
    }
    printf("\n"); // Newline after printing the buffer
}

#define BUFF_SIZE 4979045

int main() {

	const uint8_t chipdb_blob_384[BUFF_SIZE] = {
    #embed "/Users/wmac/macos-embed/chipdb-384.bin"
  };

	// printf("%s", chipdb_blob_384);
  print_buffer_as_hex(chipdb_blob_384, BUFF_SIZE);
	
	return 0;
}

