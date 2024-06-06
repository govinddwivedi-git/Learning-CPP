#include <bits/stdc++.h>
using namespace std;

char getMaxOccCharacter(string s) {

  int arr[26] = {0};
  bool multipleMaxOccurrences = false; // Flag variable to track multiple occurrences

  for (int i = 0; i < s.length(); i++) {
    char ch = s[i];
    int number = ch - 'a';
    arr[number]++;
  }

  // Find maximum occurring element and check for multiple occurrences
  int maxi = -1, ans = 0;
  for (int i = 0; i < 26; i++) {
    if (maxi < arr[i]) {
      ans = i;
      maxi = arr[i];
      multipleMaxOccurrences = false; // Reset flag for each new maximum
    } else if (maxi == arr[i]) {
      multipleMaxOccurrences = true; // Set flag if another character has the same maximum
    }
  }

  if (multipleMaxOccurrences) {
    return 48; // Return -1 if multiple characters have the maximum occurrence
  } else {
    return ans + 'a';
  }
}

int main()
{
    string s;
    cin >> s;
    cout << getMaxOccCharacter(s);
    return 0;
}