/**
 * Implement the template logic directly in the header
 * file; otherwise, the linker won't find the swap
 * function.
 */

// Generic "template" function swaps any type
template <class T>
void swap(T *ap, T *bp) {
  T c = *ap;
  *ap = *bp;
  *bp = c;
}