// /*
//     Algorithm 1: As the majority is greater than (n/2), then it will lie at the middle of the sorted array
// */

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(), nums.end());

//         return nums[(nums.size())/2];
//         /* Works for both even and odd */
//     }
// };

/*
    Algorithm 2: Using map
*/

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         map <int, int> m;

//         for (int e: nums)
//         {
//             if (m.find(e) == m.end())
//             {
//                 m[e] = 1;
//             }
//             else
//             {
//                 m[e] += 1;
//             }
//         }

//         map<int, int>::iterator it = m.begin();
//         while (it != m.end())
//         {
//             if (it -> second > nums.size()/2)
//             {
//                 return it->first;
//             }

//             it++;
//         }

//         return -1;
//     }
// };

/* Can also be solved using Boyer-Moore Voting Algorithm, dk how tho*/