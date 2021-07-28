#include <iostream>
#include <string>

using namespace std;

/* Proto Fonctions */
double Fibbo(int64_t);
void TestRes(bool);

/* Proto Tests */
bool test_Fibbo();

int main(int argc, char const *argv[])
{
    /* code */
    int64_t ite = stoi(argv[1]);
    double res = 0;

    cout << "Fibonacci Sequence for " << ite << " iterations \n";

    test_Fibbo();
    cout << "END TESTS \n\n";


    res = Fibbo(ite);

    cout << "Result = " << res << "\n";

    return 0;
}

/* Fonctions Core */
double Fibbo(int64_t ite)
{
    double f_2 = 0;
    double f_1 = 1;
    double res = 0;

    if (ite > 1)
    {
        for (uint i = 0; i < ite-1; i++)
        {
            res = f_2 + f_1;
            f_2 = f_1;
            f_1 = res;
        }
    }
    else
    {
        res = ite;
    }
    return res;
}

void TestRes(bool res)
{
    if (res == true)
    {
        cout << "✅\n";
    }
    else
    {
        cout << "❌\n";
    }
}

/* Tests Core */
bool test_Fibbo()
{
    bool res = false;

    /* Test F0 = 0*/
    cout << "Test F0 = 0 \n";
    if (Fibbo(0) == 0)
    {
        res = true;
    }
    TestRes(res);
    res = false;

    /* Test F1 = 1*/
    cout << "Test F1 = 1 \n";
    if (Fibbo(1) == 1)
    {
        res = true;
    }
    TestRes(res);
    res = false;

    /* Test F2 = 1*/
    cout << "Test F2 = 1 \n";
    if (Fibbo(2) == 1)
    {
        res = true;
    }
    TestRes(res);
    res = false;

    /* Test F6 = 8*/
    cout << "Test F6 = 8 \n";
    if (Fibbo(6) == 8)
    {
        res = true;
    }
    TestRes(res);
    res = false;

    /* Test F15 = 610*/
    cout << "Test F15 = 610 \n";
    if (Fibbo(15) == 610)
    {
        res = true;
    }
    TestRes(res);
    res = false;

    /* Test F16 = 987*/
    cout << "Test F16 = 987 \n";
    if (Fibbo(16) == 987)
    {
        res = true;
    }
    TestRes(res);
    res = false;

    /* Test F50 = 12586269025*/
    cout << "Test F50 = 12586269025 \n";
    if (Fibbo(50) == 12586269025)
    {
        res = true;
    }
    TestRes(res);
    res = false;

    /* Test F60 = 1548008755920 */
    cout << "Test F60 = 1548008755920  \n";
    if (Fibbo(60) == 1548008755920 )
    {
        res = true;
    }
    TestRes(res);
    res = false;

    return res;
}