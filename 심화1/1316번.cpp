#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<string> word;
	int word_size{};
	cin >> word_size;
	int word_count{ word_size };
	for (int i{}; i < word_size; ++i)
	{
		string word_copy{};
		cin >> word_copy;
		word.push_back(word_copy);

		sort(word_copy.begin(), word_copy.end());
		word_copy.erase(unique(word_copy.begin(), word_copy.end()), word_copy.end());

		for (const auto& x : word_copy)
		{
			string word2{ word[i] };
			bool xy{false};
			for (int j = word[i].find_first_of(x); j < word[i].find_last_of(x); ++j)
			{
				if (word2[j] != x)
				{
					xy = true;
					word_count--;
					break;
				}
			}
			if (xy == true)
				break;
		}
	}
	cout << word_count;

	return 0;
}

// GPT가 개선해준 코드
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// bool isGroupWord(const string& word) {
//     vector<bool> seen(26, false);  // 알파벳 'a'부터 'z'까지의 사용 여부
//     char last_char = '\0';  // 이전 문자를 저장

//     for (char current : word) {
//         if (last_char != current) {  // 새로운 문자 시작
//             if (seen[current - 'a']) return false;  // 이미 보았던 문자면 그룹 단어가 아님
//             seen[current - 'a'] = true;  // 문자 보았음을 기록
//             last_char = current;  // 현재 문자를 이전 문자로 설정
//         }
//     }
//     return true;
// }

// int main() {
//     int word_size, word_count = 0;
//     cin >> word_size;

//     for (int i = 0; i < word_size; ++i) {
//         string word;
//         cin >> word;
//         if (isGroupWord(word)) word_count++;
//     }

//     cout << word_count;
//     return 0;
// }
