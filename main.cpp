#include <iostream>
#include <string>

int main() {

    //1
    std::string text;
    std::cout << "Enter a text: ";
    std::getline(std::cin, text);

    int count = 0;
    size_t pos = text.find("ум");

    while (pos != std::string::npos) {
        if (pos > 0 && !std::isalpha(text[pos - 1])) {
            count++;
        }
        pos = text.find("ум", pos + 2);
    }

    std::cout << "Number um \"ум\": " << count << std::endl;

    //10
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::string result;
    bool isFirstLetter = true;

    for (char c : sentence) {
        if (isFirstLetter && c != ' ') {
            isFirstLetter = false;
        } else {
            result += c;
            if (c == ' ') {
                isFirstLetter = true;
            }
        }
    }

    std::cout << "Modified: " << result << std::endl;

    //14
    std::string str;
    std::cout << "stroka: ";
    std::getline(std::cin, str);

    if (str.substr(0, 3) == "abc") {
        str.replace(0, 3, "www");
    } else {
        str += "zzz";
    }

    std::cout << "Result: " << str << std::endl;

    //19

    std::string str = "abcadafbdefa";
    std::string result;
    for (char c : str) {
        result += c;
        if (c == 'a') {
            result += 'b';
        }
    }
    std::cout << result << std::endl;

    return 0;
}
