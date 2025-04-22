#include <bits/stdc++.h>
using namespace std;
long long int m;
bool iswoodsufficient(long long int arr[], long long mid, int n) {
  long long wood = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > mid) {
      wood += (arr[i] - mid);
    }
  }
  return wood >= m;
}
int main() {
  int n;

  cin >> n >> m;
  long long int heights[n];
  for (int i = 0; i < n; i++) {
    cin >> heights[i];
  }
  long long int lo = 0, hi = 1e9, mid;
  while (hi - lo > 1) {
    mid = (hi + lo) / 2;
    if (iswoodsufficient(heights, mid, n)) {
      lo = mid;
    } else {
      hi = mid - 1;
    }
  }
  if (iswoodsufficient(heights, hi, n)) {
    cout << hi << endl;
  } else {
    cout << lo << endl;
  }
  

  return 0;
}