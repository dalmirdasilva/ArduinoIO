#include <Asserter.h>
#include <stdio.h>
#include <ByteArrayOutputStreamSpec.h>

int main(int argc, char *argv[]) {

  ByteArrayOutputStreamSpec baosSpec = ByteArrayOutputStreamSpec();
  baosSpec.run();
  return 0;
}
