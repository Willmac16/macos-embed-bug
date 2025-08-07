#include "stdio.h"
#include "stdint.h"

int main() {

	const uint8_t chipdb_blob_384[4979045] = {
    #embed "/Users/wmac/macos-embed/chipdb-384.bin"
  };

	printf("%s", chipdb_blob_384);
	
	return 0;
}

