
// // class Solution {
// // public:
// //     string minWindow(string s, string t) {
// //         if (t == "") return "";

// //         unordered_map<char, int> countT, window;
// //         for (char c : t) {
// //             countT[c]++;
// //         }

// //         int have, need = countT.size();
// //         int resL, resR = -1, resLen = INT_MAX;
// //         int l = 0;
// //         for (int r = 0; r < s.length(); r++) {
// //             char c = s[r];
// //             window[c]++;

// //            if (countT.find(c) != countT.end() && window[c] == countT[c]) {
// //                 have++;
// //             }

// //             while (have == need) {
// //                 if (r - l + 1 < resLen) {
// //                     resL = l;
// //                     resR = r;
// //                     resLen = r - l + 1;
// //                 }

// //                 window[s[l]]--;
// //               if (countT.find(s[l]) != countT.end() && window[s[l]] < countT[s[l]]) {
// //           have--;
// //        }

// //                 l++;
// //             }
// //         }
// //         if (resLen != INT_MAX) {
// //             return s.substr(resL, resR + 1);
// //         } else {
// //             return "";
// //         }
// //     }
// // };





// class Solution {
// public:
//     string minWindow(string s, string t) {
//         if (t == "") return "";

//         unordered_map<char, int> countT, window;
//         for (char c in t) {
//             countT[c]++;
//         }

//         int have, need = countT.size();
//         int res[2], resLen = INT_MAX;
//         int l = 0;

//         for (int r = 0; r < s.length(); r++) {
//             char c = s[r];
//             window[c]++;

//             if (c in countT && window[c] == countT[c]) {
//                 have++;
//             }

//             while (have == need) {
//                 if (r - l + 1 < resLen) {
//                     res[0] = l;
//                     res[1] = r;
//                     resLen = r - l + 1;
//                 }

//                 window[s[l]]--;
//                 if (s[l] in countT && window[s[l]] < countT[s[l]]) {
//                     have--;
//                 }
//                 l++;
//             }
//         }
//         l, r = res[0], res[1];
//         return s[l : r + 1] if resLen != INT_MAX else "";
//     }
// };











class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        if (t.empty()) {
            return "";
        }

        std::unordered_map<char, int> countT, window;
        for (char c : t) {
            countT[c] = 1 + countT[c];
        }

        int have = 0, need = countT.size();
        int resStart = -1, resEnd = -1;
        int resLen = std::numeric_limits<int>::max();
        int l = 0;

        for (int r = 0; r < s.length(); ++r) {
            char c = s[r];
            window[c] = 1 + window[c];

            if (countT.find(c) != countT.end() && window[c] == countT[c]) {
                have++;
            }

            while (have == need) {
                if ((r - l + 1) < resLen) {
                    resStart = l;
                    resEnd = r;
                    resLen = r - l + 1;
                }
                window[s[l]]--;

                if (countT.find(s[l]) != countT.end() && window[s[l]] < countT[s[l]]) {
                    have--;
                }
                l++;
            }
        }

        return (resLen != std::numeric_limits<int>::max()) ? s.substr(resStart, resEnd - resStart + 1) : "";
    }
};







