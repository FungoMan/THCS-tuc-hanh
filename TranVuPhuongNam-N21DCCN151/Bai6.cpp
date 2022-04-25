#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <string>
#include <numeric>
#include <map>
#include <iomanip>
#include <set>
#include <sstream>

using namespace std;

// int main() {
//     string s;
//     int n,i;
//     getline(cin,s);
//     for (i = 0; i < s.size(); i++) {
//      

//     }
//     cout << s;
// }

// int main() {
//     string s;
//     int i;
//     int a = 0, b = 0, c = 0;
//     getline(cin,s);
// for ( i = 0; i < s.size(); i++) {
//     if (s[i] >= 65 && s[i] <= 122) a++;
//         if (s[i] >= 48 && s[i] <= 57) b++;
//         if (s[i] >= 32 && s[i] <= 47 || s[i] >= 58 && s[i] <= 64 || s[i] >= 91 && s[i] <= 96 || s[i] >= 123 && s[i] <= 126 ) c++;       
// }
//     cout << a << " " << b << " " << c << endl;
// }

// int main() {
//     int a[100], b[100];
//     int n,i,j = 0;
//     cin >> n;
//     for ( i = 0; i < n; i++) {
//         cin >> b[i];
//     }
//     sort(b,b+n);
//     for ( i = 0; i < n-1; i++) {
//         if (b[i] != b[i+1]) {
//             a[j++] = b[i];
//         }
//     }
//     a[j++] = b[n-1];
//     for ( i = 0; i < j; i++) {
//         cout << a[i] << " ";
//     }
// }

// int main() {
//     string s,a,b;
//     int n,i;
//     getline(cin, s);
//     for ( i = 0; i <= s.size(); i++) {
//         a = s.substr(0, s.find(' '));
//         s = s.erase(0, s.find(' ')+1); 
//         if ( b.find(a) > b.length()) {
//             b += a;
//             b += ' ';
//         }
//     }
//     cout << b;
// }