#include<bits/stdc++.h>
using namespace std;
void saydigit(int n, string arr[]){
    if(n == 0){
        return;
    }
    int c = n % 10;
    n /= 10;
    saydigit(n, arr);
    cout << arr[c] << " ";
}
int main(int argc, char const *argv[])
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five",
                        "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    saydigit(n, arr);
    return 0;
}