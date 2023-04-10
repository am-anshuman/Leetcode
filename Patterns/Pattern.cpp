
#include<bits/stdc++.h>
using namespace std;

void print1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void print2(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void print3(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << j+1;
        }
        cout << "\n";
    }
}

void print4(int n) {
    for(int i = 0; i < n; i++) {
        for(int j =0; j < i+1; j++) {
            cout << i+1;
        }
        cout << "\n";
    }
}

void print5(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = n; j > i; j--) {
            cout << "*";
        }
        cout << "\n";
    }
}

void print6(int n) {
    for(int i = n; i > 0; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << "\n";
    }
}

void print7(int n) {
    // no. of columns
    for(int i = 0; i < n; i++) {
        // space
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        // star
        for(int k = 0; k < 2*i+1; k++) {
            cout << "*";
        }
        // space
        for(int l = 0; l < n-i-1; l++) {
            cout << " ";
        }
        cout << "\n";
    }
}

void print8(int n) {
    // no. of columns
    for(int i = 0; i < n; i++) {
        // space
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        // star
        for(int k = 0; k < 2*n - (2*i + 1); k++) {
            cout << "*";
        }
        // space
        for(int l = 0; l < i; l++) {
            cout << " ";
        }
        cout << "\n";
    }
}

void print9(int n) {
    print7(n);
    print8(n);
}

void print10(int n) {
    for(int i = 1; i <= 2*n-1; i++) {
        int stars = i;
        if(i > n) stars = 2*n -i;
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void print11(int n) {
    int start = 1;
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << "\n";
    }
}

void print12(int n) {
    for(int i = 1; i <= n; i++) {
        // number
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        // space
        for(int k = 1; k <= 2*n - 2*i; k++) {
            cout << " ";
        }
        // number
        for(int l = i; l >= 1; l--) {
            cout << l;
        }
        cout << "\n";
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        print12(n);
    }
}