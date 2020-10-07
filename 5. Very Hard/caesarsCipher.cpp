#include <bits/stdc++.h>

using namespace std;

/* Problem-Task :
    Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher (check Resources tab for more info) shifts each letter by a number of letters.
    If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

    Create a function that takes a string s (text to be encrypted) and an integer k (the rotation factor). It should return an encrypted string.

    Sample Tests:
    caesarCipher("middle-Outz", 2) ➞ "okffng-Qwvb"

    // m -> o
    // i -> k
    // d -> f
    // d -> f
    // l -> n
    // e -> g
    // - -
    // O -> Q
    // u -> w
    // t -> v
    // z -> b

    caesarCipher("Always-Look-on-the-Bright-Side-of-Life", 5)
    ➞ "Fqbfdx-Qttp-ts-ymj-Gwnlmy-Xnij-tk-Qnkj"

    caesarCipher("A friend in need is a friend indeed", 20)
    ➞ "U zlcyhx ch hyyx cm u zlcyhx chxyyx"

 * Problem Link : https://edabit.com/challenge/GmPfqu2jmLDBD2NYS
*/

string caesarCipher(std::string s, int k)
{
	int n = s.size();
	string ans = "";

	for (auto c : s)
	{
		if (c >= 'a' && c <= 'z')
		{
			int t = c - 'a';
			t = (t + k) % 26;
			ans += (char)(t + 'a');
		}
		else if (c >= 'A' && c <= 'Z')
		{
			int t = c - 'A';
			t = (t + k) % 26;
			ans += (char)(t + 'A');
		}
		else
			ans += c;
	}
	return ans;
}

int main()
{
	//input
	string s;
	int k;
	getline(cin, s);
	cin >> k;

	cout << caesarCipher(s, k) << endl;
	return 0;
}