// Questions
// 1. Does the stack need to be dynamic in size
// 2. if it is dynamic can i use cpp class or struct of c 
// if cpp class how can i do realloc ? if i cant , can i use vector ?
// 


// CAS C INTERFACE {
typedef void *atomic_counter;
#include <tbb/tbb.h>
using namespace tbb;
// 16:00 
/**
 * 
* Return the new atomic counter on success or NULL on memory allocation error.
// * Also the counter is initialized to 0.
// *
// Threads
// * @return The atomic counter
// */
// static void *ose_four_allocate_atomic_counter(void)
// {
//     atomic<int> *ret = new atomic<int>();
//     return ret;
// }
// /**
//  * Free the atomic counter.
//  *
//  * @param atomic_ctr The counter to free.
//  */
// static void ose_four_free_atomic_counter(atomic_counter atomic_ctr)
// {
//     atomic<int> *ctr = (atomic<int> *)atomic_ctr;
//     assert(ctr != NULL);
//     delete ctr;
// }
// /**
// Threads
// * Denote val as the value of the atomic_ctr.
// * If val==compare then val = swap is done.
// * That is if val equals compare then it is set to swap.
// * In any case the old val is returned.
// *
// * THIS ACTION IS ATOMIC!
// * That means that the compare and the swap are done atomically (i.e. no other change
// * to the value of the counter can occur between them - only before or after both
// * actions have been done).
// *
// * @param atomic_ctr The counter to (possibly) change and return the value of.
// * @param compare The value to base the change decision on.
// * @param swap The value to swap in case the compare equals the contents of the counter.
// *
// * @return The old value of atomic_ctr (before this function changed it, if it did).
// */
// static int ose_four_compare_and_set_atomic_counter(
//     atomic_counter atomic_ctr,
//     int compare,
//     int swap)
// {
//     atomic<int> *ctr = (atomic<int> *)atomic_ctr;
//     assert(ctr != NULL);
//     Threads return ctr->compare_and_swap(compare, swap);
// }
// //} CAS C INTERFACE

// // 1. the examples we hot
// // compare and swap why i need the swap ? 
// // atomic counter

// // 2.  example of using tbb how to use it where to use it ? 
// // : implement (using TBB) synchronisation primitives to replace the POSIX
// // primitive you used in 6.

// // brk() move the border to the refernce i pass it , but i want to use sbrk no ?
// // the video said not to do it because you are not better than the malloc

// // data structure will be linked list because we dont have realoc in cpp
// // how do i test my work without opening 2 diffrent terminals ? 

// 12. Additional instructions:
// a. You are encouraged to implement inheritance for input and output, sync and malloc.
// b. You must use dynamic memory allocation for the stack. Don’t use arrays.
// c. You should use brk(2) for malloc(3) implementation..
// d. Test your work! You must develop at least one non-trivial tester. Submit it with your
// work.
