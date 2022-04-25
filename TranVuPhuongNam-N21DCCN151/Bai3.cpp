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

using namespace std;

// int main () {
//     int a[100];
//     int n, i, count = 1;
//     cin >> n;
//     for  ( i = 0 ; i < n ; i++ ) {
//         cin >> a[i];
//     }
//     for  ( i = 1 ; i < n ; i++ ) {
//         if (a[i] >= a[i-1]) count++;
//     }
//     cout << count;
// }

// int main () {
//     int t,n,i;
//     int a[100000];
//     bool x = true;
//     cin >> t;
//     while (t--) {
//         cin >> n;
//         for ( i = 0 ; i < n ; i++ ) {
//             cin >> a[i];
//         } 
//         for ( i = 0 ; i < n ; i++ ) {
//               bool y = false;
//             for (int j = 0 ; j <= i; j++) {
//                 if ( a[j] == a[i] && j != i) {
//                     y = true;
//                     break;
//                 }
//             }
//             if ( y) {
//                 continue;
//             }

//             for (int j = 2; j <= sqrt(a[i]); j++) {
//                 if (a[i] % j == 0) {
//                     x = false;
//                     break;
//                 } 
//             }
//                 if (x == true) {
//                    cout << a[i] << " Xuat hien " <<count(a,a+n, a[i]) << " lan" << endl;
//             }
//         }
//     }
// }

// int main() {
//     int a,b,x,y;
//     int c = 0 , d = 0;
//     cin >> a >> b;
//      x = a, y = b;
//     while ( a != 0) {
//         c += a % 10;
//         a /= 10;
//     }
//     while ( b != 0) {
//         d += b % 10;
//         b /= 10;
//     }
//     if (c <= d) cout << x << " " <<y;
//     else cout << y << " " << x;
// }

