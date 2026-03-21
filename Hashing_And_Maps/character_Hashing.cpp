#include <iostream>
#include <string>

int main()
{
    int hash[256] = {0};   // initialize

    std::string name = "Sasikumar R";

    for (auto i : name)
    {
        hash[i] += 1;   // correct indexing
    }

    for (int i = 0; i < 256; i++)
    {
        if (hash[i] != 0)
        {
            std::cout << static_cast<char>(i)
                      << " : " << hash[i] << std::endl;
        }
    }

    return 0;
}

// Important ---- Static_cast - > helps to solve the character conversion 