#include <iostream>
#include <cstring>
#include <string>

int OperationsBinaryString(char *str)
{
    // Check if the string is NULL
    if (str == nullptr)
    {
        return -1;
    }

    int length = strlen(str);
if(length==0)
{
    return 0;
}
    // Check if the length of the string is odd
    // if (length % 2 == 0) {
    //     return -1;
    // }
    int i = 0;
    // int num;
    std::string stri = "";
    // int ans=0;
    int ind = 0;
    while (i < length)
    {
        if (str[i] != 'A' && str[i] != 'B' && str[i] != 'C')
        {
            stri += str[i];
            ind = i;
        }
        else
        {
            break;
        }
        i++;
    }

    int ans = (stri.empty()) ? 0 : std::stoi(stri);
    int index = ind + 1;
    stri.clear();

    while (index < length)
    {
        if (str[index] != 'A' && str[index] != 'B' && str[index] != 'C')
        {
            stri += str[index];
        }
        else
        {
            if (!stri.empty())
            {
                int num = std::stoi(stri);
                if (str[index] == 'A')
                {
                    // int num = std::stoi(stri);
                    ans &= num;
                    //    stri.clear();
                }
                else if (str[index] == 'B')
                {
                    // int num = stoi(stri);
                    ans |= num;
                    //    stri.clear();
                }
                else if (str[index] == 'C')
                {
                    // int num = stoi(stri);
                    ans ^= num;
                    // stri.clear();
                }
            }
            stri.clear();
        }
        index++;
    }
    if (!stri.empty()) {
        int num = std::stoi(stri);
        ans ^= num;  // Apply the last operation (assumed to be XOR if not specified)
    }
    return ans;
}

int main()
{
    // Test cases
    char str1[] = "23C0C59C2A0B33";                                       // Example input
    std::cout << "Result: " << OperationsBinaryString(str1) << std::endl; // Expected output based on input

    return 0;
}
