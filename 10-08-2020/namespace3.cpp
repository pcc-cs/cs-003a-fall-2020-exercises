/**
 * This is a so-called "global variable," which causes
 * coupling between the files/modules and makes the
 * functions hard to test. DON'T USE THESE!!!
 */
// int x;

// "Unnamed" namespace, prevents global clash
namespace {
  int x;
}

void inc() {
  x++;
}