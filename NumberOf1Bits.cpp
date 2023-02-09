// /* Attempt 1: Using 1 as pivot and and operator */

// class Solution {
// public:
//     int hammingWeight(uint32_t n) {

//         int count = 0;

//         int pivot = 1;

//         for (int i = 0; i < 32; i++)
//         {
//             int p = pivot << i;
//             /*
//                 p = 1 << 0 = 1
//                 p = 1 << 1 = 10
//                 p = 10 << 1 = 100
//                 p = 100 << 1 = 1000
//             */

//             /*
//                 n = 00000000000000000000000000001011

//                 p = 1 << 0 = 1
//                 n & p = 1 = p

//                 p = 1 << 1 = 10
//                 n & p = p

//                 p = 10 << 1 = 100
//                 n & p = 0 != p

//                 n = 100 << 1 = 1000
//                 n & p = 1000 = p

//             */

//             if ((n & p) == p)
//                 count++;
//         }

//         return count;
//     }
// };


// /* Attempt 2: Using bit shift and % 2 */
// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         int count = 0;

//         /*
//             101 % 2 = 1 -> ends with 1
//             n >> 1 = 10
//         */

//         for (int i = 0; i < 32; i++)
//         {
//             if (n % 2 == 1)
//             {
//                 count++;
//             }

//             n = n >> 1;
//         }

//         return count;
//     }
// };


/* Attempt 3: Using the n & (n - 1) */

// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         int count = 0;

//         while ( n & (n-1) )
//         {
//             count++;
//         }

//         return count;
//     }
// };

    // Not Working
    /*
        n = 00000000000000000000000000001011
        n - 1 = 00000000000000000000000000001010
        n & (n-1) = 00000000000000000000000000001010

        n = 00000000000000000000000000001010
        n - 1 = 00000000000000000000000000001001
        n & (n-1) = 00000000000000000000000000001001

        n = 00000000000000000000000000001001
        n - 1 = 00000000000000000000000000001000
        n & (n - 1) = 00000000000000000000000000001000

        n = 00000000000000000000000000001000
        n - 1 = 00000000000000000000000000000111
        n & (n - 1) = 00000000000000000000000000000000
    */