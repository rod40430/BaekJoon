#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main(void)
{
	string word;
	cin >> word;
	transform(word.begin(), word.end(), word.begin(), [](unsigned char c) {return toupper(c); });

	if (word.size() < 1 && word.size() > 1000000)
		exit(1);

	vector<int> word1(26, 0);

	for (const auto& x : word)
	{
		switch (x)
		{
		case 'A': word1[0]++; break;
		case 'B': word1[1]++; break;
		case 'C': word1[2]++; break;
		case 'D': word1[3]++; break;
		case 'E': word1[4]++; break;
		case 'F': word1[5]++; break;
		case 'G': word1[6]++; break;
		case 'H': word1[7]++; break;
		case 'I': word1[8]++; break;
		case 'J': word1[9]++; break;
		case 'K': word1[10]++; break;
		case 'L': word1[11]++; break;
		case 'M': word1[12]++; break;
		case 'N': word1[13]++; break;
		case 'O': word1[14]++; break;
		case 'P': word1[15]++; break;
		case 'Q': word1[16]++; break;
		case 'R': word1[17]++; break;
		case 'S': word1[18]++; break;
		case 'T': word1[19]++; break;
		case 'U': word1[20]++; break;
		case 'V': word1[21]++; break;
		case 'W': word1[22]++; break;
		case 'X': word1[23]++; break;
		case 'Y': word1[24]++; break;
		case 'Z': word1[25]++; break;
		default:
			break;
		}
	}
	int count{};

	for (const auto& x : word1)
	{
		if (x == *max_element(word1.begin(), word1.end()))
			count++;

		if (count > 1)
		{
			cout << '?';
			return 0;
		}
	}

	cout << char ('A' + (int(max_element(word1.begin(), word1.end()) - word1.begin())));
	
	return 0;
}
