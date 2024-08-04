/*
Find The Maximum Character Count in the String !! Mostly Repetated Character 
*/

#include <iostream>
#include <string>

std::string max_char_count(const std::string& str) {
    int arr[256] = {0};  
    
    for (char ch : str) {
        arr[static_cast<unsigned char>(ch)]++;
    }

   
    int max_count = -1;
    char max_char;

    for (int i = 0; i < 256; ++i) {
        if (arr[i] > max_count) {
            max_count = arr[i];
            max_char = static_cast<char>(i);
        }
    }

   
    std::string result;
    result += max_char;
    result += " (occurs ";
    result += std::to_string(max_count);
    result += " times)";

    return result;
}

std::string find_max_char_across_strings(const std::string strings[], int numStrings) {
    int overall_count[256] = {0};

    
    for (int i = 0; i < numStrings; ++i) {
        int local_count[256] = {0};
        const std::string& str = strings[i];
        for (char ch : str) {
            local_count[static_cast<unsigned char>(ch)]++;
        }

        for (int j = 0; j < 256; ++j) {
            overall_count[j] += local_count[j];
        }
    }

    
    int max_count = -1;
    char max_char;

    for (int i = 0; i < 256; ++i) {
        if (overall_count[i] > max_count) {
            max_count = overall_count[i];
            max_char = static_cast<char>(i);
        }
    }

    std::string result;
    result += max_char;
    result += " (occurs ";
    result += std::to_string(max_count);
    result += " times across all strings)";

    return result;
}

int main() {
    const int numStrings = 3;
    std::string strings[numStrings] = {"apple", "app", "ap"};

    
    for (int i = 0; i < numStrings; ++i) {
        std::cout << "For string \"" << strings[i] << "\": " << max_char_count(strings[i]) << std::endl;
    }

    
    std::cout << find_max_char_across_strings(strings, numStrings) << std::endl;

    return 0;
}

