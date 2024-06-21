#include <iostream>
#include <functional>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a = 0;
    cin >> a;

    char booling[2][6] = { {"False"}, {"True"} };

    function <bool()> f = [=]()mutable {
        return a >= 0;
        };


    cout << booling[f()] << endl;

    string str1 = "Привет", str2 = "HI!!!!";

    auto g = [str1, str2]() ->string {
        return str1 + str2;
        };

    cout << "Конкатенация: " << g() << endl;

    char bb;
    cin >> bb;

    auto j = [bb]() {
        return (int(bb) > 0 && int(bb) < 128);
        };

    cout << booling[j()] << endl;

    return 0;
}
