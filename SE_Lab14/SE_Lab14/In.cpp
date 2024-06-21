#include "In.h"
#include "Error.h"

namespace In {
    IN In::getin(wchar_t infile[])
    {
        const int arr[256] = IN_CODE_TABLE;

        std::wifstream file(infile);
        if (!file.is_open()) {
            throw ERROR_THROW(110)
        }
        IN params;
        for (int i = 0; i < 256; i++) {
            params.code[i] = arr[i];
        }
        wchar_t ch;
        int line = 0, column = 0, i = 0, ignore = 0;
        while (file.get(ch)) {
            if (ch == IN_CODE_ENDL) {
                line++;
                column = 0;
                params.text[i] = ch;
                i++;
                continue;
            }
            if (ch < 256 && params.code[ch] == IN::F) {
                throw ERROR_THROW_IN(111, line, column);
            }
            if (ch < 256 && params.code[ch] == IN::I) {
                ignore++;
                continue;
            }
            if (ch < 256 && params.code[ch] == IN::T) {
                params.text[i] = ch;
            }
            i++;
            column++;
        }
        params.ignor = ignore;
        params.lines = line;
        params.size = i;
        return params;
    }
}
