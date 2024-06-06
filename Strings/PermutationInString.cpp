#include <bits/stdc++.h>
using namespace std;
 
bool checkEqual( int a[26], int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
    
}

bool checkInclusion(string s1,string s2){
    int count1[26]={0};
    int size1 = s1.length();
    int size2 = s2.length();
    // count the number of individual character in string s2
    for(int i=0; i<size1 ; i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // checking for the first window

    int i=0;
    int count2[26]={0};
    while(i<size1 && i<size2){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if(checkEqual(count1,count2)) return 1;

    //aage ki window check 
    while (i<size2)
    {
        char newChar = s2[i];
        int index = newChar -'a';
        count2[index]++;

        char oldChar = s2[i-size1];
        index = oldChar - 'a';
        count2[index]--;
        i++;

        if(checkEqual(count1,count2)) return 1;

    }
    
    return 0;



}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin >> s1 >> s2;
    cout << checkInclusion(s1,s2) << endl;
    return 0;
}