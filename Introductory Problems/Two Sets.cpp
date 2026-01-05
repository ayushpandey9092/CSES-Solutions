#include <bits/stdc++.h>

using namespace std;

int N;

int main(){
    scanf("%d", &N);
    if(N%4 == 1 || N%4 == 2)    printf("NO\n");
    else if(N%4 == 3){
        printf("YES\n");
        printf("%d\n", N/2);
        for(int i = 2; i <= N/2; i += 2)
            printf("%d %d ", i, N-i);
        printf("%d\n%d\n", N, N/2+1);
        for(int i = 1; i <= N/2; i += 2)
            printf("%d %d ", i, N-i);
    } else {
        printf("YES\n");
        printf("%d\n", N/2);
        for(int i = 2; i <= N/2; i += 2)
            printf("%d %d ", i, N-i+1);
        printf("\n%d\n", N/2);
        for(int i = 1; i <= N/2; i += 2)
            printf("%d %d ", i, N-i+1);
    }
}
// anathor way 
#include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n;
//     cin >> n;

//     long long sum = n * (n + 1) / 2;

//     if (sum % 2 != 0) {
//         cout << "NO\n";
//         return 0;
//     }

//     cout << "YES\n";

//     long long half = sum / 2;
//     long long cnt1 = 0;

//     // Pass 1: count size of set 1
//     for (long long i = n; i >= 1; i--) {
//         if (half >= i) {
//             half -= i;
//             cnt1++;
//         }
//     }

//     long long cnt2 = n - cnt1;

//     // Print size of set 1
//     cout << cnt1 << "\n";

//     // Pass 2: print elements of set 1
//     half = sum / 2;
//     for (long long i = n; i >= 1; i--) {
//         if (half >= i) {
//             cout << i << " ";
//             half -= i;
//         }
//     }
//     cout << "\n";

//     // Print size of set 2
//     cout << cnt2 << "\n";

//     // Pass 3: print elements of set 2
//     half = sum / 2;
//     for (long long i = n; i >= 1; i--) {
//         if (half >= i) {
//             half -= i;
//         } else {
//             cout << i << " ";
//         }
//     }
//     cout << "\n";

//     return 0;
// }

