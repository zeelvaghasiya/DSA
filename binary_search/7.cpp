#include <bits/stdc++.h> 

using namespace std; 

int euclidean(int r1, int r2) 

{ 

    int q, r, t1 = 0, t2 = 1, t; 

    do 

    { 

        q = r1 / r2; 

        r = r1 % r2; 

        t = t1 - q * t2; 

        r1 = r2; 

        r2 = r; 

        t1 = t2; 

        t2 = t; 

    } while (r2 > 0); 

    return t1; 

} 

void encryption(string &message, int k1, int k2) 

{ 

    for (int i = 0; i < message.size(); i++) 

    { 

        message[i] = 'a' + ((message[i] - 'a') * k1 + k2) % 26; 

    } 

} 

void decryption(string &message, int k1, int k2) 

{ 

    for (int i = 0; i < message.size(); i++) 

    { 

        message[i] = 'a' + ((((message[i] - 'a') - k2 + 26) % 26) * k1) % 26; 

    } 

} 

void cryptoanalysis(string &message, int k1, int k2) 

{ 

    cout << "Pi "; 

    for (int i = 0; i < message.size(); i++) 

        cout << message[i] << " "; 

    cout << endl; 

    cout << "Pi mapping "; 

    for (int i = 0; i < message.size(); i++) 

        cout << int(message[i] - 'a') << " "; 

    cout << endl; 

    cout << "K1 "; 

    for (int i = 0; i < message.size(); i++) 

        cout << k1 << " "; 

    cout << endl; 

    cout << "K2 "; 

    for (int i = 0; i < message.size(); i++) 

        cout << k2 << " "; 

    cout << endl; 

    cout << "(Pi * K1) + k2 "; 

    for (int i = 0; i < message.size(); i++) 

        cout << int(message[i] - 'a') * k1 + k2 << " "; 

    cout << endl; 

    encryption(message, k1, k2); 

    cout << "((Pi * K1) + k2) mod 26 "; 

    for (int i = 0; i < message.size(); i++) 

        cout << int(message[i] - 'a') << " "; 

    cout << endl; 

    cout << "Ci mapping "; 

    for (int i = 0; i < message.size(); i++) 

        cout << message[i] << " "; 

    cout << endl; 

    k1 = (euclidean(26, k1)); 

    if (k1 < 0) 

        k1 += 26; 

    decryption(message, k1, k2); 

} 

int main() 

{ 

    string message = "sitaram"; 

    int k1 = 5, k2 = 7; 

    cryptoanalysis(message, k1, k2); 

    cout << message << endl; 

    return 0; 

} 