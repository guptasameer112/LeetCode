/*
    Attempt 1:
*/

// class Solution {
// public:
//     int findCenter(vector<vector<int>>& edges) 
//     {
//         int a = edges[0][0];
//         int b = edges[0][1];
//         int c = edges[1][0];
//         int d = edges[1][1];

//         if (a == c or a == d)
//         {
//             return a;
//         }
//         else if (b == d or b == c)
//         {
//             return b;
//         }

//     return 0;
//     }
// };



/*
    Attempt 2:
*/

// class Solution {
// public:
//     int findCenter(vector<vector<int>>& edges) 
//     {
//         if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
//         {
//             return edges[0][0];
//         }
//         else if (edges[0][1] == edges[1][0] || edges[0][1] == edges[1][1])
//         {
//             return edges[0][1];
//         }
//     return 0;
//     }
// };
